#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int fileCheck()
{
    int lines = 0;
    
    FILE* file = fopen("input.txt", "r");
    if(file == NULL) //проверка на существование файла
    {
        printf("Input file does not exist!\n");
        return 0;
    }

    while(!feof(file))
    {
        if(fgetc(file) == '\n')
        {
            lines++;
        }
    }
    fclose(file);
    return lines;
}

int iscorrect()
{
    int correct;

    FILE* file = fopen("input.txt", "r");
    if(file == NULL)
    {
        correct = 1;
    }
    else
    {
        correct = 0;
    }
    
    if(correct == 0)
    {
        printf("Data is correct!\n");        
    }
    else
    {
        printf("Data is wrong!\n");
    }
    
    return 0;
}

int main()
{
    char str[SIZE];
    int lines = fileCheck();

    FILE* file = fopen("input.txt", "r");
    for(int line = 0; line < lines; line++)
    {
        fgets(str, SIZE, file);
        str[strlen(str) - 1] = '\0';
        
    }
    iscorrect();

    fclose(file);

    return 0;
}