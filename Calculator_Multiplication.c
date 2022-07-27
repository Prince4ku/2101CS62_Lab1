#include<stdio.h>

void multiplication(long n,long long m){
    printf("Enter the first number : ");
    scanf("%d",&n);
    printf("Enter the second number : ");
    scanf("%d",&m);

    printf("first number * second number = %d",n*m);
}

int main(){
    printf("This is the calculator to do multiplication (*) between two numbers\n");
    long long n ,m;
    multiplication(n,m);
    return 0;
}   