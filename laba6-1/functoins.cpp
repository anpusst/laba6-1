#include "Header.h"

void writeToFile(string filename, const vector<string>& lines) {
    ofstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file for writing!" << endl;
        return;
    }

    try {
        for (const string& line : lines) {
            file << line << endl;
        }
    }
    catch (const exception& e) {
        cout << "Error writing to file: " << e.what() << endl;
    }

    file.close();
}

vector<string> readFromFile(string filename) {
    vector<string> lines;
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file for reading!" << endl;
        return lines;
    }

    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }

    file.close();
    return lines;
}

bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}
