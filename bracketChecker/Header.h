/**
 * @file header.h
 * @brief Header file for bracket checking functions.
 * @author Alireza Behbahani
 * @date 2025-03-14
 */

#ifndef BRACKET_CHECKER_H
#define BRACKET_CHECKER_H

#include <iostream>
#include <stack>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

/**
 * @brief Checks if a character is an opening bracket.
 * @param ch Character to check.
 * @return True if the character is '(', '[', or '{'.
 */
bool isOpeningBracket(char ch);

/**
 * @brief Checks if a character is a closing bracket.
 * @param ch Character to check.
 * @return True if the character is ')', ']', or '}'.
 */
bool isClosingBracket(char ch);

/**
 * @brief Checks if an opening bracket matches a closing bracket.
 * @param open Opening bracket character.
 * @param close Closing bracket character.
 * @return True if they form a matching pair.
 */
bool isMatchingPair(char open, char close);

/**
 * @brief Checks the given lines of code for unmatched brackets.
 * @param codeLines Vector of strings representing lines of code.
 */
void checkBrackets(const vector<string>& codeLines);

#endif // BRACKET_CHECKER_H

