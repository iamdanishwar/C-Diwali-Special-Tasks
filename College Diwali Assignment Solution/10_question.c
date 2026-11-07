#include <stdio.h>
int main() {
    
    int arr[10] , avg , sum = 0;
    printf("Enter 10 elements of the array: \n");
    for(int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    avg = sum / 10;
    printf("The average of the Ten Numbers: %d \n" , avg);


    return 0;
}