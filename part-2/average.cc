// Parth Kheni
// pkheni@csu.fullerton.edu
// @pkheni123
// Partners: @Javo-05

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Done: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  // Done: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  // for (int i = 1; i < arguments.size(); i++) {
  //   double num = std::stod(arguments[i]);
  //   sum = sum + num;
  // }

  for (std ::string const& arg : arguments) {
    double num = std::stod(arg);
    sum = sum + num;
  }

  // Done: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double denom{(arguments.size() - 1) * 1.0};
  double avg{sum / denom};
  // Done: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << avg << "\n";
}