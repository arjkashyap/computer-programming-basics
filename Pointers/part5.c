// Simple program to show pointer to char

#include<stdio.h>

void Display(char* C){
    while(*C != '\0'){
        printf("%c\n", *C);
        C++;
    }
}

int main(){
    char c[10] = "FSociety";
    Display(c);
    return 0;
}
