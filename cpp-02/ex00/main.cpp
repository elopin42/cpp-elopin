#include "Fixed.hpp"

int main() {
    mfci defaultNumber;
    mfci copiedNumber(defaultNumber);
    mfci anotherNumber;
    anotherNumber = defaultNumber;
    return 0;
}

