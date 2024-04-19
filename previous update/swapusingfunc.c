#include <stdio.h>
void swap (int a, int b)  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
}
int main(){
    int a=10,b=21;
    printf("a is : %d\nb is :%d",a,b);
    swap(a,b);
    printf("\nswapping.....\n");
    printf("a is : %d\nb is :%d",a,b);
}
