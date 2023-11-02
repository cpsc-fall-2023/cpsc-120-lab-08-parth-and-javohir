// Parth Kheni
// pkheni@csu.fullerton.edu
// @pkheni123
// Partners: @Javo-05

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <value1> <value2> <value3> ..." << std::endl;
        return 1;
    }

    double sum = 0.0;
    int numValues = argc - 1;

    for (int i = 1; i < argc; i++) {
        double value;
        std::istringstream iss(argv[i]);

        if (!(iss >> value)) {
            std::cerr << "Invalid input: " << argv[i] << std::endl;
            return 1;
        }

        sum += value;
    }

    double average = sum / numValues;
    std::cout << "Average: " << average << std::endl;

    return 0;
}
