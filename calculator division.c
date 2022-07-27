#include<stdio.h>

void division(float n,float m){
    printf("Enter the first number : ");
    scanf("%f",&n);
    printf("Enter the second number : ");
    scanf("%f",&m);

    printf("first number / second number = %f",n/m);
}

int main(){
    printf("This is the calculator to do division (/) between two numbers\n");
    float n ,m;
    division(n,m);
    return 0;
}   