#include <stdio.h>

int main() {
    int d , c=1;
    
    while((d=getchar())!= EOF){
        if(d=='\n'){
        c++;
        }
    }
    printf("\nCounter is %d \n", c);
    
    return c;
}
