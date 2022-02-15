#include <stdio.h>

int inOutPut()                          //функция ввода и вывода данных
{
    FILE *fp;
    char name[] = "input.txt";
    if ((fp = fopen(name, "r")) == NULL) //проверка на существование файла
    {
        printf("Не удалось открыть файл!\n");
        //getchar();
        return 0;
    }
    while(fgets != '(')            //требуемые действия над данными

    fclose(fp);
    //getchar();
    return 0;
}

int main()
{   
    inOutPut();

    return 0;
}