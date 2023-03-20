#include "stdbool.h"
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int col = *matrixColSize-1;
    int row = matrixSize-1;
    int i = 0,j = 0;
    bool flag = false;
    int max;

    for(;i <= row;i++)
    {
        for(;j <= col;j++)
        {
            if(matrix[i][j] == target)
                flag = true;
        }
        j = 0;        
    }
    return(flag);
}