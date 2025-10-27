#include<stdio.h>
int main(){
    int n, i, factoria=1;
    printf("Enter a factorial number:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        factoria = factoria *i;

    }
    printf("The factorial of %d is: %d\n", n, factoria);
    return 0;
    
}