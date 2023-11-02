// Parth Kheni
// pkheni@csu.fullerton.edu
// @pkheni123
// Partners: @Javo-05

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  bool first{true};
  double total{0.0};
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double num{std::stod(argument)};
    total = total +  num;
  }
  double denom{static_cast<double>(arguments.size() - 1)};
  double avg = total / denom;
  std::cout << "average = " << avg;
  return 0;
}
