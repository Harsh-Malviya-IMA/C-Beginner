#include<stdio.h>
int main(){
    int a, b; // a>b
    printf("Enter Dividend: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);
    // int q  = a/b;
    // int r = a - b*q; // divissor*quotient+remainder=dividend
    // printf("The Remainder when %d is divided by %d is : %d", a, b, r);
    int r = a%b;
    printf("The Remainder when %d is divided by %d is : %d", a, b, r);
    return 0;
}