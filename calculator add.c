#include<stdio.h>

void plus(int n,int m){
    printf("Enter the first number : ");
    scanf("%d",&n);
    printf("Enter the second number : ");
    scanf("%d",&m);

    printf("first number + second number = %d",n+m);
}

int main(){
    printf("This is the calculator to do addition (-) between two numbers\n");
    long long n ,m;
    plus(n,m);
    return 0;
}   