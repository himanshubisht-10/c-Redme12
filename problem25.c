#include<stdio.h>
#include<math.h>
int main(){
    // Check Prime Number
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        flag = 1; // Numbers less than or equal to 1 are not prime
    } else {
        for(i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                flag = 1; // n is divisible by i, hence not prime
                break;
            }
        }
    }
    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    return 0;
}