//Set the Bit in an 8-bit Register
#include <stdio.h>
#include <stdint.h>

uint8_t set_bit(uint8_t reg, uint8_t pos) {
    reg=reg|(1<<pos);
    return reg;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);  // Accept register value and position
    uint8_t result = set_bit(reg, pos);
    printf("%u", result);         // Output the result as an integer
    return 0;
}