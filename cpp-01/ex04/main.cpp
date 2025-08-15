
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
  std::string s1 = argv[2]; // ce qu'on veut remplacer
  std::string s2 = argv[3]; // ce par quoi remplacer

  while (std::getline(file, line)) {
      size_t pos = 0;
      while ((pos = line.find(s1, pos)) != std::string::npos) {
          line.erase(pos, s1.length());
         line.insert(pos, s2);
         pos += s2.length();
      }
      file2 << line << std::endl;
  }

  file.close();
  file2.close();
  return 0;
}
