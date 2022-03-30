#include <stdio.h>
typedef unsigned long long int ull;

int main()
{
    ull Input = 0;
    scanf("%llu", &Input);
    ull Tens = 1;
    int Safe = Input;
    int NoOfLines = 0;
    while(1)
    {
        if(Input<=9)
        break;
        Input /= 10;
        Tens *= 10;
        NoOfLines ++; 
    }
    int PatArr[NoOfLines];
    for(int i = 0; i<= NoOfLines; i++)
    {
        PatArr[i] = Safe/Tens;
        Safe %= Tens;
        Tens/=10; 
    }
    for(int Row = 0; Row<= NoOfLines; Row++)
    {
        for(int Space = 0; Space < Row; Space++)
        {
            printf(" ");
        }
        for(int Num = Row; Num <= NoOfLines; Num++)
        {
            printf("%d ",PatArr[Num]);
        }
        printf("\n");
    }
    int i = NoOfLines-1;
    for(int Row = 1; Row <= NoOfLines; Row++)
    {
        for(int Space = NoOfLines; Space > Row; Space--)
        {
            printf(" ");
        }
        for(int Num = 0; Num <= Row; Num++)
        {
            printf("%d ",PatArr[i+Num]);
        }
        --i;
        printf("\n");
    }
}
