// To check wheather a string is palindrome or not.

#include<stdio.h>
#include<string.h>

int main() {

    char str[100];

    int i,j,Flag = 1;


    printf("Enter a string : ");
    scanf("%s",str);

    int len = strlen(str);

    for(i = 0,j = len - 1; i<j; i++,j--) {
        if(str[i] != str[j]) {
            Flag = 0;
            break;
        }
    }

    if(Flag == 1) {
        printf("The string is a palindrome.");
    }
    else {
        printf("The string is not a palindrome.");
    }

    return 0;
}