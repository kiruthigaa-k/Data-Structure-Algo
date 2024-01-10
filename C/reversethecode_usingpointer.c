#include <stdio.h>
#include <string.h>
void revstr(char *str){
    int len=strlen(str);
    int left = 0; // set left index at 0  
    int right = len - 1; // set right index len - 1  
    // use for loop to store the reverse string  
    for (int i = left; i <right; i++)  
    {  
        int temp = str[i];  
        str[i] = str[right];  
        str[right] = temp;  
        right--;  
    }  
}

int main() {
    // Write C code here
   char str[50];
   scanf("%s",&str);
   revstr(str);
   printf("%s ",str);
    return 0;
}
