#include <stdio.h>
int main(){


    int n , temp ,sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &n);


    do
    {
        temp = n % 10;
        if(n % 2 == 0){
            sum += temp;
        }
        n /= 10;

    } while (n != 0);
    
    printf("The Sum of even digits in the Number is : %d \n", sum);

    return 0;
}