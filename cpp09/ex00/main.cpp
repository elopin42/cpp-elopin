#include "BitcoinExchange.hpp"
#include <sstream>

void parseLinecheck(const std::string& line) {
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
            parseLinecheck(fr.getline(i));
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
