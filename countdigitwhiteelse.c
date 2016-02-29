#include <stdio.h>

int main(){

int nwhite,nother,i,d;
int ndigit[10];

for(i=0;i<=9;i++){
	ndigit[i]=0;}

while((d=getchar())!=EOF){
	if(d >= '0' && d <='9'){
		ndigit[d-'0']++;
		}
	else if(d==' ' || d== '\t' || d=='\n'){
		nwhite++;}
	else{
		nother++;}	
	}
	
printf("Numbers: \t");
for(i=0;i<=9;i++){
	printf("%d - %d \t",i,ndigit[i]);
	}

printf("\n White chars: \t %d, Other chars: \t%d\n", nwhite,nother);
return 0;
