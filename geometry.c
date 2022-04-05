#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 50

//checking the entered data
int isCorrect()
{
    //string figure names
    char circleStr[] = "circle";
    char triangleStr[] = "triangle";

    int circleRadius;
    float circleX = 0, circleY = 0;
    char *figure;

    printf("Enter a shape with parameters in the format:\ncircle(x y, rad) or triangle(x, y, z, x)\n");
    fgets(figure, 7, stdin);

    //if circle, than
    if(strcmp(figure, circleStr) == 0)
    {   
        printf("Figure: ");
        puts(figure);
        scanf("(%f %f, %d)", &circleX, &circleY, &circleRadius);
        if(circleRadius > 10000)
        {
            printf("Incorrect parameters! Check brackets and commas.\n");
        }
        else
        {
            printf("X coord: %.1f\n", circleX);
            printf("Y coord: %.1f\n", circleY);
            printf("Radius: %d\n", circleRadius);
        }
    }
    //if triangle, than
    else if(strcmp(figure, triangleStr) == 0)
    {
        printf("Figure: ");
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
    isCorrect();

    return 0;
}