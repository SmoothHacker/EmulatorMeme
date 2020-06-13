#include "BlueWorld.h"

int main(int argc, char **argv) {
    if (argc != 2 || std::strcmp(argv[1], "-h") == 0) {
        std::cout << "\tUsage: ./disassembler binary" << std::endl;
        return 1;
    }
    std::cout << "---------- BlueWorld Intel 8080 Emulator ----------" << std::endl;
    return 0;
}
