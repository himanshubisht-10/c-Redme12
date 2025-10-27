#include<stdio.h>
int main(){
    // palindrome number 1 to 100
    int num, reversedNum, remainder, originalNum;
    printf("Palindrome numbers between 1 and 100 are:\n");
    for(num = 1; num <= 100; num++){
        originalNum = num;
        reversedNum = 0;
        while(originalNum != 0){
            remainder = originalNum % 10;
            reversedNum = reversedNum * 10 + remainder;
            originalNum /= 10;
        }
        if(reversedNum == num){
            printf("%d\n", num);
        }
    }
    return 0;
    

}