#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("CLS");
    int i, j;
    for (i = 1; i<= 5; ++i)
    {
        for (j = 1; j <= 2 * i; j = ++j)
        {
            switch (j)
            {
            case 1:
printf("U N");
                break;
            case 3:
printf(" I V");
                break;
            case 5:
printf(" E R");
                break;
            case 7:
printf(" S I");
                break;
            case 9:
printf(" T Y");
                break;
            }
        }
printf("\n");
    }
    for (i = 1; i<= 4; ++i)
    {
        for (j = 1; j <= 10 - 2 * i; ++j)
        {
            switch (j)
            {
            case 1:
printf("U N");
                break;
            case 3:
printf(" I V");
                break;
            case 5:
printf(" E R");
                break;
            case 7:
printf(" S I");
                break;
            case 9:
printf(" T Y");
                break;
            }
        }
printf("\n");
    }

getchar();
    return 0;
}
