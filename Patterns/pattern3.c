#include <stdio.h>

int main()
{
    int Line = 0;
    scanf("%d",&Line);
    int Number = 1;
    for(int row = 0; row<Line;row++)
    {
        Number += row;
        for(int num = 0; num<=row;num++)
        {
            printf("%-2d ",Number+num);
        }
        printf("\n");
    }
    for(int row = Line-1; row>=0 ;row--)
    {
        for(int num = 0; num<=row;num++)
        {
            printf("%-2d ",Number+num);
        }
        Number-=row;
        printf("\n");
    }
}
