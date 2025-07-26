#include <stdio.h>
int main(){
    int n; // dabba ban gya
    printf("Enter a number: ");
    scanf("%d", &n); // dabbe me value daal di
    if(n%2==0){ // agar 2 se divisible hua toh
        printf("Even Number");
    } else { // agar 2 se divisible nhi hua toh
        printf("Odd Number");
    }
    return 0;
}
