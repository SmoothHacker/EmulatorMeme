#include <iostream>
#include <cstring>
#include "disassembler.h"

int main(int argc, char **argv) {
    if (argc != 2 || std::strcmp(argv[1], "-h") == 0) {
        std::cout << "\tUsage: ./disassembler binary" << std::endl;
        return 1;
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
