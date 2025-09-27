#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

class btc {
  private:
    std::vector<std::string> lines;
  public:
    btc() {}
    btc(const btc& other) : lines(other.lines) {}
    btc& operator=(const btc& other) {
        if (this != &other) {
            lines = other.lines;
        }
        return *this;
    }

    ~btc() {}

     void loadfiles(const std::string filename) {
      std::ifstream file(filename.c_str());
      if (!file.is_open()) throw std::runtime_error("could not open file.");

      std::string line;
      while(std::getline(file, line)) {
        lines.push_back(line);
      }
      file.close();
    }
      void printAll() const {
        for (std::vector<std::string>::const_iterator it = lines.begin(); it != lines.end(); ++it) {
            std::cout << *it << std::endl;
        }
      }
      const std::string& getline(size_t index) const {
        if (index >= lines.size()) 
          throw std::out_of_range("Index hors limite");
        return lines[index];
      }
};

#endif // !BITCOINEXCHANGE_HPP
