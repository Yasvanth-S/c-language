#include <stdio.h>

int main()
{
    char Word[12];
    int ctr = 0;
    while(1)
    {
        char temp;
        scanf("%c",&temp);
        Word[ctr] = temp;
        if(temp == '\n')
        break;
        ctr++;
    }
    for(int Row = 0; Row < ctr; Row++)
    {
        for(int Alpha = ctr-1; Alpha >= Row; Alpha--)
        {
            printf("%c ",Word[ctr-Alpha-1]);
        }
        printf("\n");
    }
    for(int Row = 0; Row < ctr; Row++)
    {
        for(int Alpha = 0; Alpha <= Row; Alpha++)
        {
            printf("%c ",Word[Alpha]);
        }
        printf("\n");
    }
}
