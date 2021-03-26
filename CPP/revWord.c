#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char *str, char *end)
{
    char temp;

    //printf("%d\n", end);
    while (str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
    //printf("%s \n", str);
}

void reverseWord(char *str, int length)
{
    char *start = str;
    char *end = str;

    while (*end)
    {
        end++;
        if (*end == '\0')
        {
            reverseString(start, end - 1);
        }
        else if (*end == ' ')
        {
            reverseString(start, end - 1);
            start = end + 1;
        }
    }
}

int main(int argc, char *argv[])
{
    char str[] = "The big brown fox jumped over the lazy dog.";
    printf("\n%s\n", str);
    reverseWord(str, strlen(str));
    printf("\n%s\n", str);

    return 0;
}