// Check if array is sorted

#include<stdio.h>
int main() {

    int n,flag = 1;

    printf("Enter number of elements : ");
    scanf("%d",&n);

    int arr[n];


    printf("Enter %d elements : \n",n);
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            flag = 0;
            break;
        }
    }


    if(flag == 1) {
        printf("Array is sorted in ascending order. ");
    }
    else{
        printf("Array is not sorted in ascending order. ");
    }

    
    return 0;
}