#include<stdio.h>
#include<math.h>
int main(){
    // star pattern printing in pyramid form
    int n, i, j, space;
    printf("Enter the number of rows:");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(space=1; space<=n-i; space++){
            printf("");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");

        }
        printf("\n");

    }
    return 0;
    
}