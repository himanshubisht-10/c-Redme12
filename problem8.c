#include<stdio.h>
int main(){
    //  2 to 100 prime number
    int n, i, j, flag;
    printf("Prime numbers between 2 and 100 are:\n");
    for(n = 2; n <= 100; n++){
        flag = 0;
        for(i = 2; i <= n / 2; ++i){
            if(n % i == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d\n", n);
    }
    return 0;
}