#include "common.h"

void print(const BYTE *buffer, int count)
{
    while (count--)
    {
        printf("%c", *(buffer++));
    }
    printf("\n");
}

int multiply(int x, int y)
{
    printf("x: %d  y: %d\n", x, y);
    if (y == 0)
    {
        return 0;
    }
    if (y > 0)
    {
        return (x + multiply(x, y - 1));
    }
    if (y < 0)
    {
        return -multiply(x, -y);
    }
}

int main(int argc, char *argv[])
{
    const uint8_t size = 50;

    BYTE buff_one[size] = "this is the source string";
    BYTE buff_two[] = "and this destination string";

    strncat((char *)buff_one, (char *)buff_two, 10);
    printf("%s\n", buff_one);
    print(buff_one, strlen((char *)buff_one));

    printf("%s\n", strstr((char *)buff_one, "our")); //if sub string "our" found then return pointer to start of string found. else null

    memset((char *)buff_one, '0', (uint8_t)strnlen((char *)buff_one, 50));

    print(buff_one, strlen((char *)buff_one));
    printf("%d \n", multiply(2, 3));
    ;
    return 0;
}