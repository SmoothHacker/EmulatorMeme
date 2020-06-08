#include <iostream>
#include <cstring>
#include "disassembler.h"

int main(int argc, char **argv) {
    if (std::strcmp(argv[1], "-h") == 0 || argc != 2) {
        std::cout << "  Usage: ./Blue-World.exe binary" << std::endl;
    }

    FILE *f = fopen(argv[1], "rb");
    disassembler disass;
    disass.fileProcessor(f);

    printf("Disassembly for %s\n\n", argv[1]);
    while (disass.pc < disass.fileSize) {
        disass.pc += disass.disassembleToConsole();
    }

    return 0;
}
