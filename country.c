#include<stdio.h>
void namaste();
void bonjour();

int main(){

    char country;
    printf("enter the country name :");
    scanf("%c", &country);

    if(country=='i'){
        namaste();
    }
    else if(country=='f'){
        bonjour();
    }

    return 0;

}

void namaste(){
    printf("namaste \n");
}
void bonjour(){
    printf("bonjour \n");
}