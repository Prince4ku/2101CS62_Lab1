#include<stdio.h>

void minus(int n,int m){
    printf("Enter the first number : ");
    scanf("%d",&n);
    printf("Enter the second number : ");
    scanf("%d",&m);

    printf("first number - second number = %d",n-m);
}

int main(){
    printf("This is the calculator to do substaraction (-) between two numbers\n");
    long long n ,m;
    minus(n,m);
    return 0;
}   