
#include <iostream>
#include <limits>
#include <cctype>
#include <cstdlib>
#include <cmath> 
#include "ScalarConverter.hpp"
#include <iomanip>

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &) {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) {
    return *this;
}


void ScalarConverter::convert(const std::string &literal) {
    char *end;
    double value = std::strtod(literal.c_str(), &end);

    if (std::isnan(value) || std::isinf(value)) {
        std::cout << "char: impossible" << std::endl;
    }
    else if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max()) {
        std::cout << "char: impossible" << std::endl;
    }
    else {
        char c = static_cast<char>(value);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    if (std::isnan(value) || std::isinf(value)) {
        std::cout << "int: impossible" << std::endl;
    }
    else if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max()) {
        std::cout << "int: impossible" << std::endl;
    }
    else {
        int n = static_cast<int>(value);
        std::cout << "int: " << n << std::endl;
    }
    if (std::isnan(value)) {
    std::cout << "float: nanf" << std::endl;
    } else if (std::isinf(value)) {
        std::cout << "float: " << (value > 0 ? "+inff" : "-inff") << std::endl;
    } else if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max()) {
        std::cout << "float: impossible" << std::endl;
    } else {
        float f = static_cast<float>(value);
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << f << "f" << std::endl;
    }
    if (std::isnan(value)) {
        std::cout << "double: nan" << std::endl;
    } else if (std::isinf(value)) {
        std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
    } else if (value < -std::numeric_limits<double>::max() || value > std::numeric_limits<double>::max()) {
        std::cout << "double: impossible" << std::endl;
    } else {
        double d = static_cast<double>(value);
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "double: " << d << std::endl;
    }
}
