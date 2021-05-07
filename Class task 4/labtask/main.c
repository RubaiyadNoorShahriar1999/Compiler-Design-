#include <stdio.h>

int main()
{
    char name[50];
    int marks, num;

    printf("Enter the total number of students: ");
    scanf("%d", &num);

    FILE *file;
    file = fopen("test.txt","a");

    if(file == NULL)
    {
        printf("error!");
        exit(1);
    }

    for (int i = 0; i < num; ++i)
    {
        printf("Enter Student Name %d : ", i+1);
        scanf("%s", name);

        printf("Enter Student Marks %d : ", i+1);
        scanf("%d", &marks);

        fprintf(file, "%s %d \n", name, marks);
    }

    fclose(file);

    return 0;
}
