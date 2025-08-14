
#include "glb.hpp"

int main(int argc, char *argv[]){
  if (argc != 4){
    std::cerr << "error with value" << std::endl;
    return 1;
  }
  std::ifstream file(argv[1]);
  if (!file.is_open()){
    std::cerr << "error with files, can't open." << std::endl;
  }
  std::string line;
  while (std::getline(file, line)){
    std::cout << line << std::endl;
  }
  file.close();
  return 0;
}
