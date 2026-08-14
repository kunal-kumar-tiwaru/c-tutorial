// this code check if the persion is eligible to vote or not 

#include<stdio.h>
int main(){

    int age;
    printf("enter the age :");
    scanf("%d", &age);

    if(age>=18){
        printf("you are applicable for vote ");//print this statement if age>=18 statement is true

    }

    else{
        printf("you are not applicable for vote");//print this statement if age>=18 statement is false

    }

    return 0;

}