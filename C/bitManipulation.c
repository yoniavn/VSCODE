#include "common.h"

#define MASK(x) ((unsigned char)(1 << x)) //compile time macro
#define PTBD 0b10010000

/* example: in port B:
    set bit 2 and 5, clear bits 0,3,7
    if bit 4 is high, then invert bit 1
  */

void manage_port_B()
{
    uint8_t temp;
    temp = PTBD;                                    //freeze PTBD value
    temp = temp | (MASK(2) | MASK(5));              //set bit 2 and 5
    temp = temp & ~((MASK(0) | MASK(3) | MASK(7))); //clear bits 0,3,7
    if (temp & MASK(4))
    {
        temp = temp ^ MASK(1);
    }
}
int main()
{
    manage_port_B();
    return 0;
}