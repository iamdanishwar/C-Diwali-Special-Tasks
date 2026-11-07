#include <stdio.h>
int main(){

    int n , sum = 0;
    printf("Enter the Number (n) : ");
    scanf("%d", &n);

    do{
        sum += n;
        n--;
    }while(n != 0);

    printf("The Sum of the Natural Numbers upto n is : %d \n", sum);

    return 0;
}