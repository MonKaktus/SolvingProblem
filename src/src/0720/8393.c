#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,result=0;
	int a=0;
	
	scanf("%d",&a);
	
	for(i=1;i<=a;i++){
		result+=i;
	}
	
	printf("%d\n",result);
	
    return 0;
}