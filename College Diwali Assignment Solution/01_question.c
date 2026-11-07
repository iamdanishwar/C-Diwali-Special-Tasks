#include <stdio.h>
int main(){

    int day;
    printf("Enter the Number of day(1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf(" DAY : Monday \n");
            break;
        case 2:
            printf(" DAY : Tuesday \n");
            break;
        case 3:
            printf(" DAY : Wednesday \n");
            break;
        case 4:
            printf(" DAY : Thursday \n");
            break;
        case 5:
            printf(" DAY : Friday \n");
            break;
        case 6:
            printf(" DAY : Saturday \n");
            break;
        case 7:
            printf(" DAY : Sunday \n");
            break;
        default:
            printf("INVALID INPUT \n");
    }
    return 0;
}
    
