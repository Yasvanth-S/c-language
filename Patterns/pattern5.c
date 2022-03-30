#include <stdio.h>
 
int main()
{
    int NoOfLines = 0;
    scanf("%d",&NoOfLines);
    int FirstHalf = 0;
    int SecondHalf = NoOfLines * (NoOfLines+1);
    for(int Row = 0; Row < NoOfLines; Row++)
    {
        for(int Space = 0; Space < Row; Space++)
        {
            printf("   ");
        }
        for(int Num = Row+1; Num <=NoOfLines; Num++)
        {
            printf("%-2d ", FirstHalf + Num);
        }
        FirstHalf += (NoOfLines-Row-1);
        SecondHalf -= (NoOfLines - Row);
        for(int Num = NoOfLines; Num > Row; Num--)
        {
            printf("%-2d ", SecondHalf + NoOfLines - Num +1);
        }
        printf("\n");
    } 
}
