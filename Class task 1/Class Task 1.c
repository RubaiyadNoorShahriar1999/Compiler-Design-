#include <stdio.h>
#include <stdbool.h>



bool isKeyword(char* str)
{
if (!strcmp(str, "if") || !strcmp(str, "else") ||!strcmp(str, "while") || !strcmp(str, "do") ||!strcmp(str, "break") ||!strcmp(str, "continue") || !strcmp(str, "int")
|| !strcmp(str, "double") || !strcmp(str, "float")|| !strcmp(str, "auto")|| !strcmp(str, "const")|| !strcmp(str, "short")|| !strcmp(str, "struct")|| !strcmp(str, "goto")||
!strcmp(str, "enum")|| !strcmp(str, "signed")|| !strcmp(str, "typedef")|| !strcmp(str, "switch")|| !strcmp(str, "void")||
!strcmp(str, "static")|| !strcmp(str, "char")|| !strcmp(str, "union")|| !strcmp(str, "sizeof")|| !strcmp(str, "volatile")||
!strcmp(str, "case")|| !strcmp(str, "default")|| !strcmp(str, "long"))
     printf("Yes, It's a keyword!");
else printf("Not a keyword");
return (true);
}


int main()
{
    char str[50];
    printf("Enter the text: ");
    gets(str);
    isKeyword(str);
    return 0;
}
