#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[5];
    printf("Enter  an operator : \n");
    gets(ch);

    switch(ch[0]){

       case '+':
            if(ch[1]=='+')
                printf("Incremental Operator");
            else if (ch[1]== '=')
                printf("Binary Add AND  assignment Operator");
            else if (ch[1]== '\0')
                printf("Addition Operator");
            else
                printf("Not an Operator");

            break;


        case '-':
            if(ch[1]=='-')
                printf("Decremental Operator");
            else if (ch[1]=='=')
                printf("Binary Subtract AND assignment Operator");
            else if (ch[1]== '\0')
                printf("Subtraction Operator");
            else
                printf("Not an Operator");

            break;


        case '*':
            if(ch[1]=='=')
                printf("Binary Multiply AND assignment Operator");
            else if (ch[1]== '\0')
                printf("Multiplication Operator");
            else
                printf("Not an Operator");
            break;


        case '/':
            if(ch[1]=='=')
                printf("Binary Divide AND assignment Operator" );
            else
                printf("Division Operator");
            break;


        case '%':
            if (ch[1]== '\0')
                printf("modulo division Operator");
            else
                printf("Not an Operator");
            break;


        case '`':
            if (ch[1]== '\0')
                printf("Binary One's complement Operator");
            else
                printf("Not an Operator");
            break;


        case '^':
            if (ch[1]== '\0')
                printf("Binary XOR Operator");
            else
                printf("Not an Operator");
            break;


        case '>':
            if(ch[1]== '=')
                printf("Greater Than equals to Operator");
            else if (ch[1]== '>')
                printf("Binary Right Shift Operator");
            else if (ch[1]== '\0')
                printf("Greater Than Operator");
            else
                printf("Not an Operator");
            break;


        case '<':
            if(ch[1]== '=')
                printf("Less Than equals to Operator");
            else if (ch[1]=='<')
                printf("Binary Left Shift Operator");
            else if (ch[1]== '\0')
                printf("Less Than Operator");
            else
                printf("Not an operator");
            break;


        case '=':
            if(ch[1]== '=')
                printf("Equivalent Operator");
            else if (ch[1]== '\0')
                printf("Equals Operator");
            else
              printf("Not an operator");
            break;


        case '!':
            if(ch[1]== '=')
                printf("Not equals to Operator");
            else if (ch[1]== '\0')
                printf("Logical Not Operator");
            else
                printf("Not an Operator");
            break;


        case '&':
            if(ch[1]== '&')
                printf("AND Operator");
            else if (ch[1]== '\0')
                printf("Binary AND Operator");
            else
                printf("Not an Operator");
            break;


        case '|':
            if(ch[1]== '|')
                printf("OR Operator");
            else if (ch[1]== '\0')
                printf("Binary OR Operator");
            else
                printf("Not an operator");
            break;


        default:
            printf("Not an operator");
            break;


    }
    printf("\n");
    printf("\n");

    main();

    return 0;
}
