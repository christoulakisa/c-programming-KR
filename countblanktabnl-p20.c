#include <stdio.h>

int main() {
    int d,bl =0 , tab=0, nl=1;
    
    while((d=getchar())!= EOF){
        if(d=='\n'){
        nl++;
        }
        else if(d=='\t'){
            tab++;
        }
        else if(d==' '){
        bl++;}
        
    }
    printf("\nBlanks are %d, tabs are %d and all the lines are %d \n", bl,tab,nl);
    
}
