#include <stdio.h>

int main()
{
    int input;
    scanf("%d",&input);
    for(int line = 1; line<=input; line++)
    {
        int num = line;
        for(int row = 1; row <=line; row++)
        {
            printf("%-2d ",num);
            num =num + input - row;
        }
        printf("\n");
    }
}
