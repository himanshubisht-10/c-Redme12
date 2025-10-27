#include<stdio.h>
#include<math.h>
int main(){
    // compound interest calculation

    float principal, rate, time, CI;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: "); 
    scanf("%f", &rate); 

    printf("Enter time in years: "); 
    scanf("%f", &time);     

    CI = principal * (pow((1 + rate / 100), time)) - principal;
    printf("Compound Interest = %.2f\n", CI);
    return 0;
}