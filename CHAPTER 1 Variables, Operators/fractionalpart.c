#include<stdio.h>
int main(){
    float x ;
    printf("Enter a decimal  number: ");
    scanf("%f",&x);
    float y;
    y = x;
    float z = x - y;
    printf("\nFractional part is: %d", z);
    return 0;
}