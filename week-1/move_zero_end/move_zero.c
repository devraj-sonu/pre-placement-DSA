#include<stdio.h>

int main() {

    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);

    int arr[n],result[n];

    printf("Enter the %d number of elements : ",n);
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    int j = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] != 0) {
            result[j++] = arr[i];
        }
    }

    while(j<n) {
        result[j++] = 0;
    }

    printf("Updated array is : [");
    for(int i=0; i<n; i++) {
        printf("%d", result[i]);
        if(i != n-1) {
            printf(", ");
        }
    }

    printf("]\n");

    return 0;
}