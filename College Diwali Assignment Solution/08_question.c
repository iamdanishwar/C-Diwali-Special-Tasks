#include <stdio.h>
int main(){

    int m1[2][2] , m2[2][2] , res[2][2] , i , j , k;


    printf("Enter Elements of 1st Matrix : \n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter Elements of 2nd Matrix : \n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){   
            scanf("%d", &m2[i][j]);
        }
    }

    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            res[i][j] = 0;
            for(k = 0 ; k < 2 ; k++){
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("The Resultant Matrix is : \n");
    for(i = 0 ; i < 2 ; i++){
        for(j = 0 ; j < 2 ; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }


    return 0;
}