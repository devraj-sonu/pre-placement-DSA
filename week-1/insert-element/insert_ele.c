#include<stdio.h>
int main() {

    int arr[100];
    int n, i, elem;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter %d elements : \n",n);
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the elements to enter the end of the array : ");
    scanf("%d",&elem);

    arr[n] = elem;
    n++;

    printf("Array after the insertation :\n");
    for(i=0; i<n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}