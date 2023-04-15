#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

long fatorial(int n);//protótipo 
int main(){
    int num = 30;
    while (num<=33)
    {
      
        printf("\nFatorial(%d) = %ld",num,fatorial(num));
        num++;
    }
    getch();
}    
    long fatorial(int n){
        if (n == 0) return (1);
        
        else
        return( fatorial(n-1)*n);
    }