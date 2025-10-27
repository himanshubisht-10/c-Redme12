#include<stdio.h>
int main(){
    //Armstrong Number
    int n , originalN, remainder, result = 0, digits = 0;
    printf("Enter an integer:");
    scanf("%d", &n);
    originalN = n;
    // count digits
    while(originalN !=0){
        originalN /=10;
        digits++;

    }
    originalN = n;
    // calculate Armstrong number
    while(originalN !=0){
        remainder = originalN %10;
        int power =1;
        for(int i=0; i<digits; i++){
            power *= remainder;
        }
        result += power;
        originalN /=10;
    }

    if(result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);
    return 0;
}