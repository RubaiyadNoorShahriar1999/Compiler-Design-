#include <stdio.h>
#include <stdbool.h>


bool isString(char* str)
{
    int num=0,i;
    for( i=num ; i<strlen(str);i++)
    {

        if(str[i]==' '|| str[i]=='-')
            {
                for(int j=num ; j<)
                {
                    printf(str[j]);
                    printf("\n");
                }

                num = i+1;
            }
    }
    return (true);
}



int main()
{
    char str[50];
    printf("Enter the text: ");
    gets(str);

    isString(str);

    return 0;
}

