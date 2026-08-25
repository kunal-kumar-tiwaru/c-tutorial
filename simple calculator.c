#include<stdio.h>
#include<math.h>

//ok
int main(){

    float num1;
    scanf("%f", &num1);
     
    char sym;
    scanf(" %c", &sym);

    float num2;
    scanf("%f", &num2);

    switch (sym) {
        case '+':printf("%f", num1 + num2);
            break;
        case '-':printf("%f", num1 - num2);
            break;
        case '*':printf("%f", num1 * num2);
            break;
        case '/':
            if(num2 == 0){
                printf("any number is not devided by 0");
            } 
            else {
                printf("%f", num1 / num2);
            }
            break;
        case '^':printf("%f", pow(num1, num2));
            break;
        default:printf("some error found");
    }

    return 0;

}

