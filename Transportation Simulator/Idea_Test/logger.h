#ifndef LOGGER_INCLUDED
#define LOGGER_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

inline void printTolog(string output, string filePath) { ofstream fout(filePath); fout << output; fout.close(); }

#endif // logger included
