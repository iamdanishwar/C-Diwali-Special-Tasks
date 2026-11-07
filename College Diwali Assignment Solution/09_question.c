#include <stdio.h>

int main(){

    int matrix[2][2] , res[2][2] , i , j;
    
    printf("Enter Elements of Matrix : \n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            res[j][i] = matrix[i][j];
        }
    }
    printf("The Transpose of the given Matrix is : \n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}