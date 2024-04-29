#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Header.h"

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    // Генерация случайных чисел и запись в файл
    vector<string> lines;
    for (int i = 0; i < 5; ++i) {
        int randomNumber = rand() % 100 + 1;
        lines.push_back(to_string(randomNumber));
    }

    writeToFile("input.txt", lines);

    // Чтение из файла и выбор чисел
    vector<string> fileLines = readFromFile("input.txt");
    vector<string> numbersOnly;
    int lineNumber = 1;

    for (const string& line : fileLines) {
        if (isNumber(line)) {
            numbersOnly.push_back(line + " - " + to_string(lineNumber));
        }
        lineNumber++;
    }

    // Запись отфильтрованных чисел в новый файл
    writeToFile("filtered_numbers.txt", numbersOnly);

    return 0;
}
