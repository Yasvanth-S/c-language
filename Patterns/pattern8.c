#include <stdio.h>

int main()
{
    int num = 0;
    int tpsStar = 0;
    int row = 0;
    int star = 0;
    scanf("%d", &num);
    tpsStar = num/2-1; 
    for(row = 0; row < num; row++)
    {
        if(row == 0 || row == num / 2)
        {
            if(row == 0)
            printf(" ");
            for(star = 0; star < tpsStar;printf("*"), star++);
            if(row == 0)
            printf(" ");
        }
        if(row >=1)
        {
            printf("*");
            if(row != num/2)
            for(star = 0; star <tpsStar; printf(" "), star++);
            printf("*"); 
        } 
        printf("\n");
    } 
}
