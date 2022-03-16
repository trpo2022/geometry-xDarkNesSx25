#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

//checking the validity of the input file
int fileCheck()
{
    FILE* file = fopen("input.txt", "r");
    //checking for the existence of a file
    if(file == NULL)
    {
        printf("Input file does not exist!\n");
        return 0;
    }

    //counting rows for line-by-line function
    int lines = 0;
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

//checking the entered data
int isCorrect()
{
    //string figure names
    char circleStr[] = "circle";
    char triangleStr[] = "triangle";

    //opening and reading a file
    FILE* file = fopen("input.txt", "r");
    int circleRadius;
    double circleX = 0, circleY = 0;
    char *figure;
    char str[SIZE];
    fgets(str, SIZE, file);

    //separator
    figure = strtok(str, "(");
    //if circle, than
    if(strcmp(figure, circleStr) == 0)
    {   
        printf("Figure - ");
        puts(figure);
    }
    //if triangle, than
    else if(strcmp(figure, triangleStr) == 0)
    {
        printf("Figure - ");
        puts(figure);
    }
    //if incorrect figure
    else
    {
        printf("Figure undefined\nExpected: 'circle' or 'triangle'\n");
    }
    
    return 0;
}

int main()
{
    // char str[SIZE];
    // int lines = fileCheck();

    // FILE* file = fopen("input.txt", "r");
    // for(int line = 0; line < lines; line++)     //i'll need this later
    // {                                           //there should be a line-by-line function here
    //     fgets(str, SIZE, file);
    //     str[strlen(str) - 1] = '\0';
        
    // }
    // fclose(file);
    
    isCorrect();

    return 0;
}