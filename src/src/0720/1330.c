#include<stdio.h>

int main(){

    int a,b,result;
	
	scanf("%d %d",&a,&b);
	result=a-b;
	
	if(result>0)printf(">");
	else if (result==0)printf("==");
	else printf("<");
	
    return 0;
}