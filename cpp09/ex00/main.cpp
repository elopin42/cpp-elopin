#include "BitcoinExchange.hpp"
#include <sstream>

double checkDataLine(const std::string& line, btc const& data) {
    size_t pos = line.find('|');
    if (pos == std::string::npos)
        throw std::runtime_error("bad input => " + line);

    std::string date = line.substr(0, pos);
    date.erase(0, date.find_first_not_of(" \t"));
    date.erase(date.find_last_not_of(" \t") + 1);

    double save_date = -1;

    for (int i = 1; i; i++) {
        try {
          data.getline(i);
        }
        catch (...) {
          return save_date;
        }
        std::string line2 = data.getline(i);
        size_t pos2 = line2.find(',');
        if (pos2 == std::string::npos) continue;

        std::string date2 = line2.substr(0, pos2);
        std::string valueStr2 = line2.substr(pos2 + 1);

        date2.erase(0, date2.find_first_not_of(" \t"));
        date2.erase(date2.find_last_not_of(" \t") + 1);
        valueStr2.erase(0, valueStr2.find_first_not_of(" \t"));
        valueStr2.erase(valueStr2.find_last_not_of(" \t") + 1);

        std::stringstream ss2(valueStr2);
        double value2 = 0;
        if (!(ss2 >> value2))
            throw std::runtime_error("not a number in data => " + valueStr2);

        if (date2 == date) {
            return value2;
        } else if (date2 > date) {
            return save_date; 
        } else {
            save_date = value2;
        }
    }

    return save_date;
}

void parseLinecheck(const std::string& line, btc const& data) {
    size_t pos = line.find('|');
    if (pos == std::string::npos)
        throw std::runtime_error("bad input => " + line);

    std::string date = line.substr(0, pos);
    std::string valueStr = line.substr(pos + 1);

    date.erase(0, date.find_first_not_of(" \t"));
    date.erase(date.find_last_not_of(" \t") + 1);
    valueStr.erase(0, valueStr.find_first_not_of(" \t"));
    valueStr.erase(valueStr.find_last_not_of(" \t") + 1);

    if (date.length() != 10) 
        throw std::runtime_error("bad date => " + date);

    std::stringstream ss(valueStr);
    double value = 0;
    if (!(ss >> value))
        throw std::runtime_error("not a number => " + valueStr);

    if (value < 0)
        throw std::runtime_error("not a positive number.");
    if (value > 1000000000)
        throw std::runtime_error("too large a number.");
    int year, month, day;
    std::stringstream sst;

    sst << date.substr(0, 4);
    sst >> year;
    sst.clear(); sst.str("");
    sst << date.substr(5, 2);
    sst >> month;
    sst.clear(); sst.str("");
    sst << date.substr(8, 2);
    sst >> day;
    if (year < 2009 || year > 2026)
        throw std::runtime_error("invalid year in date => " + date);

    if (month < 1 || month > 12)
        throw std::runtime_error("invalid month in date => " + date);

    if (day < 1 || day > 31)
        throw std::runtime_error("invalid day in date => " + date);

    double refValue = checkDataLine(line, data);
    std::cout << date << " => " << value << " = " << value * refValue << std::endl;
}

void process(btc const& fr, btc const& data)
{
  (void) data;
  try{
    if (fr.getline(0) != "date | value")
      throw std::runtime_error("line[0] != date | value");
    for (int i = 1; 42; i++) {
      try {
        fr.getline(i);
        try {
            parseLinecheck(fr.getline(i), data);
        }
        catch (const std::exception& e) {
          std::cerr << "Error: " << e.what() << std::endl;
        }
      }
      catch (const std::exception& e) {
        return ;
      }
    }
  }
  catch (const std::exception& e) {
      std::cerr << "Error: " << e.what() << std::endl;
        return ;
  }
}

int main(int ac, char** av) {
    try {
        if (ac != 2) {
            throw std::runtime_error("Bad number of arguments");
        }

        btc fr;
        fr.loadfiles(av[1]);
        btc data;
        data.loadfiles("data.csv");
        process(fr, data);
    }
    catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
