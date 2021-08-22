#include<stdio.h>

int main(){

    int hour,min,tmp;
	
	scanf("%d",&hour);
	scanf("%d",&min);
	
	if(min-45<0){
		if(hour-1<0)hour=24;
		hour--;
		min=60+(min-45);
		printf("%d %d",hour,min);
	}else
		printf("%d %d",hour,min-45);
	
    return 0;
}