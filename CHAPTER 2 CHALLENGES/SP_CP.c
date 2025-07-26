#include <stdio.h>
int main(){
    int cp ;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    int sp;
    printf("Enter selling price: ");
    scanf("%d", &sp);
    // if(sp>cp){
    //     printf("Profit");
    // } 
    // if(cp>sp){
    //     printf("Lose");
    // } else {
    //     printf("No profit, No lose");
    // }
    //    return 0;
    if(sp > cp){
        printf("Profit");
    } else if (cp > sp){
        printf("Loss");
    } else {
        printf("N profit, No loss");
    }
    return 0;
}    
