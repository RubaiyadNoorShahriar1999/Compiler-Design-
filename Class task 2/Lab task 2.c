#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, l, t = 0;
    char input[20];
    printf(" Enter the input: ");
    scanf("%s", input);
    l = strlen(input);

    if (input[0] != '(' && input[l - 1] != ')')
        t--;
    for (int i = 0; i < l; i++)
    {
         if (t < 0) break;

        if (input[i] == '(' && input[i] == ')' )
{
         if (input[i] == 42 || input[i] == 43 || input[i] == 45 || input[i] == 47 || input[i] == 37)
         {
            if (input[i - 1] > 96 && input[i - 1] < 123 && input[i + 1] > 96 && input[i + 1] < 123)
            {
                continue;
            }

         }
            else
                break;
}

    }

    if (t == 0)
        printf("valid");
    else
        printf("Invalid");
    printf("\n");
    main();

    return 0;
}
