#include <stdio.h>

int isNumber(char str[]);

int main(void)
{
    char str[255];

    printf("Enter a number: ");
    scanf("%s", str);

    if (isNumber(str))
        printf("Entered input is a number");
    else
        printf("Entered input is not a number");

    return 0;
}

int isNumber(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        if (0 <= str[i] - '0' && str[i] - '0' >= 9)
            return 0;

    return 1;
}
