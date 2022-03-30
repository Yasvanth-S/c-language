#include <stdio.h>

int main()
{
    int Size = 0;
    scanf("%d",&Size);
    int Number = 0;
    int One = 1;
    int Odd = 1;
    int OneFlag = 0;
    for(int row = 1; row<=Size; row++)
    {
        if(row % 2 != 0 && row!= 1)
        {
            Odd = row; 
        }
        Number += Odd;
        if(OneFlag == 0)
        {
            One=-1;
            OneFlag=1;
        }
        else
        {
            One = +1;
            OneFlag = 0;
        }
        for(int element = 0; element < row; element++)
        {
            if(element>0)
            Number += One;
            printf("%-2d ",Number);

        }
        printf("\n");
    }
}
