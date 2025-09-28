#include "RPN.hpp"

void RPN::process(std::string st) {
  std::stringstream ss(st);
  std::string token;
  while(ss >> token)
  {
    // std::cout << "Token: " << token << std::endl;
    if (token == "+" || token == "-" || token == "*" || token == "/")
    {
      if (stack.size() < 2)
      {
        std::cerr << "Error" << std::endl;
        return ;
      }

      double b = stack.top();
      stack.pop();
      double a = stack.top();
      stack.pop();
      double result = 0;

      if (token == "+") result = a + b;
      if (token == "-") result = a - b;
      if (token == "*") result = a * b;
      if (token == "/") result = a / b;

      stack.push(result);

    }
    else {
      double num = atof(token.c_str());
      if (num > 10 || num < 0)
      {
        std::cerr << "Error" << std::endl;
        return ;
      }
      stack.push(num);
    }
  }
  if (stack.size() != 1) {
        std::cerr << "Error" << std::endl;
        return;
  }

  std::cout << "Result: " << stack.top() << std::endl;
}
