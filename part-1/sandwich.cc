// Parth Kheni
// pkheni@csu.fullerton.edu
// @pkheni123
// Partners: @Javo-05

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // Done: Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() != 4) {
    std::cout << "error: you must supply three arguments" << std::endl;
    return 1;
  }
  // Done: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];
  // Done: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "." << std::endl;
  return 0;
}
