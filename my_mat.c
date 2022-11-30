#include "stdio.h"
#define SIZE 10

int adj_mat[SIZE][SIZE];
int Floyd_Warshell();

int initialize()
{
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            int value;
            scanf("%d", &value);
            adj_mat[i][j] = value;
        }
    }
    Floyd_Warshell();
    return 0;
}

int isPath(int i, int j)
{
    if (adj_mat[i][j]!=-1)
    {
        printf("True");
    }
    printf("False");
    return 0;
}

int shortestPath(int i, int j)
{
    printf("%d", adj_mat[i][j]);
    return 0;
}

int Floyd_Warshell()
{
    for(size_t k=0; k< SIZE; k++)
    {
        for (size_t i = 0; i < SIZE; i++)
        {
            for (size_t j = 0; j < SIZE; j++)
            {
                if (adj_mat[i][j] > adj_mat[i][k] + adj_mat[k][j])
                {
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];
                }
                
            }
            
        }
        
    }
    for (size_t i = 0; i < SIZE; i++)
    {
        for (size_t j = 0; j < SIZE; j++)
        {
            if (adj_mat[i][j]==0)
            {
                adj_mat[i][j] = -1;
            }
            
        }
        
    }
    
    return 0;
}