//Compare in Strings.. 
#include <stdio.h> 
#include <string.h> 
 
int main() { 
    char ch1[] = "lane";
    printf("ch1 is : %s\n", ch1);
    
	char ch2[] = "Bat"; 
	printf("ch2 is : %s\n\n", ch2);
	
	//Iss Code Mein ch1 || ch2 ka 1st letter ka ASCII code Jata hai..
	
    int result = strcmp(ch1, ch2); 
 
    if (result == 0){
        printf("Strings are equal.\n");
	}else if (result < 0){
        printf("ch1 is smaller.\n"); 
    }else{ 
        printf("ch1 is greater.\n"); 
	}
    return 0; 
} 

