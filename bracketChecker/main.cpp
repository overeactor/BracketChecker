

/**
 * @brief Main function to read a file and check for bracket errors.
 * @return 0 on successful execution.
 */
int main() {
    ifstream file("test.txt");
    vector<string> codeLines;
    string line;
    while (getline(file, line)) {
        codeLines.push_back(line);
    }

    checkBrackets(codeLines);
    return 0;
}
