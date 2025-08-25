// print the second largest element in array 

#include<stdio.h>

int main() {

    int n,i,max,second;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elemets for the array : ");
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    max = second = -21345678;

    for(int i=0; i<n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        }

        else if(arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    (second == -21345678) ?
        printf("Second largest element not found ") :
        printf("second largest element is : %d", second);
    

    return 0;
}