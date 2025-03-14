/**
 * @file main.cpp
 * @brief Entry point for the bracket checking program.
 * @author Alireza Behbahani
 * @date 2025-03-14
 */

#include "header.h"

 /**
  * @brief Main function to read a file and check for bracket errors.
  * @return 0 on successful execution.
  */
int main() {
    ifstream file("test.txt");
    vector<string> codeLines;
    string line;

    // Read the file line by line
    while (getline(file, line)) {
        codeLines.push_back(line);
    }

    // Check for bracket mismatches
    checkBrackets(codeLines);

    return 0;
}
