#include<stdio.h>
int main(){
    // fibonacci series
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: %d, %d, ", t1, t2);

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
    

}