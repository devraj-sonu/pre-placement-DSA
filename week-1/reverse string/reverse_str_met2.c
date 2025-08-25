#include<stdio.h>
#include<string.h>

int main() {

    int i,j;

    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);

    char temp;
    int len  = strlen(str);


    for(i=0, j = len - 1; i<j; i++,j-- ) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string is : %s\n",str);

    return 0;
}