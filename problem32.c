#include<stdio.h>
int main(){
    // sort array in ascending order
    int n,i, j, temp;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++){
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
}
    // sorting using bubble sort
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                // swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}