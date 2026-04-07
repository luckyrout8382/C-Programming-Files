//copy in Strings..
#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char ch[] = "Welcome to C"; 
    printf("string is : %s\n", ch);
    char copych[50]; 
 
    strcpy(copych, ch); 
    printf("Copied string in copych: %s\n\n", copych); 
 
    return 0; 
} 
