//Clear the Bit in an 8-bit Register
#include <stdio.h>
#include <stdint.h>

uint8_t clear_bit(uint8_t reg, uint8_t pos) {
    reg=reg&~(1<<pos);
    return reg;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    uint8_t result = clear_bit(reg, pos);
    printf("%u", result);
    return 0;
}