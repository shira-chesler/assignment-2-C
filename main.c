#include <stdio.h>
#include "my_mat.h"

int main()
{
    char ch;
    scanf(" %c",&ch);
    while (ch!='D')
    {
        if (ch=='A')
        {
            initialize();
        }
        else if (ch=='B')
        {
            int i, j;
            scanf("%d", &i);
            scanf("%d", &j);
            isPath(i, j);
        }
        else //(ch=='C')
        {
            int i, j;
            scanf("%d", &i);
            scanf("%d", &j);
            shortestPath(i, j);
        }
        scanf("%c", &ch);
    }

    return 0;
}

