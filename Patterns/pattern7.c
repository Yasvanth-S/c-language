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
    int TenSafe = Tens; 
    Input = Safe;
    int Number = Safe;
    for(int Row = 0; Row<= NoOfLines; Row++)
    {
        Safe = Number;
        TenSafe = Tens;
        for(int Num = Row; Num <= NoOfLines; Num++)
        {
            Number = Safe / TenSafe;
            Safe %= TenSafe;
            TenSafe /= 10;
            printf("%d ",Number);
        }
        Number = Input % Tens;
        Tens /= 10;
        printf("\n");
    }
}
