#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"Russian");
    int n;
    printf("n:1-январь;2-февраль;3-март;4-апрель;5-май;6-июнь;\n7-июль;8-август;9-сентябрь;10-октябрь;11-ноябрь;12-декабрь;\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("31"); break;
        case 2:printf("28"); break;
        case 3:printf("31"); break;
        case 4:printf("30"); break;
        case 5:printf("31"); break;
        case 6:printf("30"); break;
        case 7:printf("31"); break;
        case 8:printf("31"); break;
        case 9:printf("30"); break;
        case 10:printf("31"); break;
        case 11:printf("30"); break;
        case 12:printf("31"); break;
        default:printf("неверное значение");
    }
    return 0;
}