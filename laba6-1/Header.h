#ifndef HEADER_H
#define HEADER_H

using namespace std;

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

void writeToFile(string filename, const vector<string>& lines);
vector<string> readFromFile(string filename);
bool isNumber(const string& str);
#endif