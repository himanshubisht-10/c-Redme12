#include <stdio.h>
int main(){
    // sum of digits of a number
    int num, sum=0, digit;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0){
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}
