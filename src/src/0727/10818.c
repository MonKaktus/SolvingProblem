#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *numPtr=NULL;
	int count=0;
	int min=0,max=0;
	
	scanf("%d",&count);
	
	numPtr=malloc(sizeof(int)*count);
	
	for(int i=0;i<count;i++){
		scanf("%d",&numPtr[i]);
		if(numPtr[i]<numPtr[min])min=i;
		if(numPtr[i]>numPtr[max])max=i;
	}
	
	
	printf("%d %d",numPtr[min],numPtr[max]);
	
    return 0;
}