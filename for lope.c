//this code is use to find the factors of given number

#include<stdio.h>

 int main(){
    int a;
    int numfac=0;

    printf("Enter the number whose factors you need: ");
    scanf("%d", &a);

    for(int i=1;i<=999999;i=i+1){
        if(a%i==0){
            printf("%d \n",i);
        }
    }
    for(int j=1;j<=999999;j=j+1){
        if(a%j==0){
            numfac=numfac+1;
        
        }
    }

    printf("number of factors is : %d \n", numfac);

        
    if(numfac==2){
        printf("number is prime");
    }
    else{
        printf("number is composite");
    }
  

    
    
    return 0;
    }