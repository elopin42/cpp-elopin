#include "Fixed.hpp"

mfci::mfci(){
  std::cout << "constructeur by default call" << std::endl;
}

mfci::mfci(const mfci &other) {
  std::cout << "constructeur call for copie" << std::endl;
  (void) &other;
}

mfci &mfci::operator=(const mfci &other) {
  std::cout << "operator for affectation" << std::endl;
  (void) &other;
  return *this;
}

mfci::~mfci(){
  std::cout << "pour supprimer" << std::endl;
}
