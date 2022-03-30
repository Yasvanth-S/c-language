#include <stdio.h>

int main()
{
    int NoOfLines = 0;
    scanf("%d", &NoOfLines);
    int AddNum = NoOfLines * 2;
    int Number = 1;
    int Mid = (NoOfLines/2) + (NoOfLines%2);
    for(int Row =1; Row <= NoOfLines; Row++)
    {
        for(int Num = 0; Num < NoOfLines; Num++)
        {
            printf("%-2d ", Number+Num);
        }
        if(Row == Mid && NoOfLines%2 == 0)
        {
            Number += NoOfLines;
        }
        else if(Row == Mid && NoOfLines%2 !=0 )
        {
            Number -= NoOfLines;
        }
        else if(Row > Mid)
        {
            Number -= AddNum;
        }
        else
        {
            Number += AddNum;
        }
        printf("\n");
    }
}
