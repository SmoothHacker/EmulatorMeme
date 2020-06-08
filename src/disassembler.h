#pragma once
#include <vector>
#include <fstream>
#include <string>
#include <map>

class disassembler {
public:
    unsigned char *programBuffer;
    int pc;
    int fileSize; // Number of Bytes

    void fileProcessor(FILE *fileInput);
    int disassembleToConsole();
    disassembler();
};
