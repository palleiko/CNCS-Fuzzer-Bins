#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char** argv) {
    if (argc == 1) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }
    printf("Check 1 passed\n");

    char* input = argv[1];
    if ((input[0] & 0xFF) < 'z') return 2;
    printf("Check 2 passed\n");

    if (strlen(input) < 4) return 3;       
    printf("Check 3 passed\n");

    uint16_t size = input[3] & 0xFF;
    printf("%02x\n", size);
    if (size < 0x10) return 4;
    printf("Check 4 passed\n");

    printf("Allocating you a buffer of %d bytes\n", size);
    char buf[size];
    memcpy(buf, input, size);
    printf("%s\n", buf);
    free(buf);
    return 0;
}
