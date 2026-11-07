#include <stdio.h>
int main(){
 
    int i , temp , j, arr[5] = {8 , 9 , 6 , 7 , 5};

    for(i = 0 ; i < 5 ; i++){
        for(j = i + 1 ; j < 5 ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0 ; i < 5 ; i++){
        printf("%d", arr[i]);
    }
    
    return 0;
}