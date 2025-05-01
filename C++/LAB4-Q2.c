//Write a C program to print the frequency of the digits in given alphanumeric string. https://www.hackerrank.com/challenges/frequency-of-digits-1/problem
#include <stdio.h>
#include <string.h>
int main() {
//Write your code here.
    char str[1000];
    scanf("%s", str);
    int freq[10] = {0};
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;}
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);}
//EndS
    return 0;
}
