#include<stdio.h>
#include<math.h>
int main(){
    // array multiplication
    int n, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr1[n], arr2[n], resulit[n];
    printf("Enter elements of first array:\n");
    for(i=0; i<n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for(i=0; i<n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &arr2[i]);
    }

    for(i=0; i<n; i++){
        resulit[i] = arr1[i] * arr2[i];
    }
    printf("Resultant array after multiplication:\n");
    for(i=0; i<n; i++){
        printf("%d ", resulit[i]);
    }
    printf("\n");
    return 0;
}