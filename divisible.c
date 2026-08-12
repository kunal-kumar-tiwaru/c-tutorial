#include <stdio.h>
#include <stdio.h>


int main(){
    int num;
    printf("enter the number to ckeck if it is divisible by 2 or not: ");
    scanf("%d", &num);

    printf("%d is divisible by 2: %d \n", num, num % 2 == 0);

    return 0;

}