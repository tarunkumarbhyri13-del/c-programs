
#include <stdio.h>

int main() {
    // Write C code here
    char ch;
    printf("Enter the character \n");
    scanf("%c",&ch);
    int res=(ch>='a')&&(ch<='z');
    printf("%c is a lowercase alphabet i.e is:%d",ch,res);
    return 0;
}