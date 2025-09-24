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
     void data_processing(const std::string filename) {
       try {
          std::ifstream file(filename.c_str());
         if (!file.is_open()) throw std::runtime_error("could not open file.");
       }
       catch(const std::exception& e) {
         std::cerr << "Error: " << e.what() << std::endl;
       }
     }
      void printAll() const {
        for (std::vector<std::string>::const_iterator it = lines.begin(); it != lines.end(); ++it) {
            std::cout << *it << std::endl;
        }

      }
};

#endif // !BITCOINEXCHANGE_HPP
