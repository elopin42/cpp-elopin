
#include "glb.hpp"

int main(int argc, char *argv[]){
  if (argc != 4){
    std::cerr << "error with value" << std::endl;
    return 1;
  }
  std::string filename = argv[1];
  size_t last_point = filename.find_last_of('.');
  std::string second_file = filename.substr(0, last_point) + ".replace";
  std::ifstream file(argv[1]);
  if (!file.is_open()){
    std::cerr << "error with name file, can't open." << std::endl;
    return 1;
  }
  std::ofstream file2(second_file.c_str());
  if (!file2.is_open()){
    std::cerr << "error with create file, can't open." << std::endl;
    return 1;
  } 
  std::string line;
  while (std::getline(file, line)){
    file2 << line << std::endl;
  }
  file.close();
  file2.close();
  return 0;
}
