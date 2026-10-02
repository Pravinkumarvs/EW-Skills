//Set or Clear a Specific Bit in a Register
#include <stdio.h>

unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    if(mode==1){
        reg=reg|(1<<pos);
    }
    else{
        reg=reg&~(1<<pos);
    }
    return reg;
}

int main() {
    unsigned char reg;
    int pos, mode;
    scanf("%hhu %d %d", &reg, &pos, &mode);
    printf("%d", modifyBit(reg, pos, mode));
    return 0;
}