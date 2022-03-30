#include <stdio.h>

int main()
{
    int NoOfLines = 0;
    scanf("%d", &NoOfLines);
    int Num = 9;
    for(int Row = 0; Row < NoOfLines; Row++)
    {
        int Half = Num - Row+1;
        for(int First = 0; First < Row; First++)
        {
            printf("%d", Half++);
        }
        printf("%d",0);
        for(int Second = 0; Second < Row; Second++)
        {
            printf("%d",Num-Second);
        }
        printf("\n");
    }
}
