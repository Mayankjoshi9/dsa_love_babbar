#include <stdio.h>

#include <string.h>
int main(){
    char s[29743];
    gets(s);
    printf("%s",s);
    int size=strlen(s);
    int start=0,end=size-1,p=1;
    while (start<end)
    {
        if (s[start]==s[end]){
           start++;
           end--;
           p=2 ;
        }
        else{
            p=0;
            break;
        }
    }
    if (p==0)
    {
      printf("\nit is not palindrome"); 
    }
    else if(p==2)
    {
        printf("\nit is palindrome");
    }
    
    


    
}