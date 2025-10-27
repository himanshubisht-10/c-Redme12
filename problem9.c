#include<stdio.h>
int main(){
    // factorial of a number 1 to n
    int n, i;
    unsigned long long factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for(i = 1; i <= n; ++i){
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }
    return 0;
}