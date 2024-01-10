#include <stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;*b=t;
}
int main() {
    // Write C code here
    int a=10;
    int b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
