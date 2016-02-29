#include <stdio.h>

int main(){

int d;


while((d=getchar())!=EOF){

	if(d==' ' || d== '\t' || d=='\n'){
		printf("\n");}
	else
		{putchar(d);
		}

	}
return 0;
}
