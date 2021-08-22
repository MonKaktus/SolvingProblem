#include<stdio.h>
#include<stdlib.h>

int main(){

    int input1,input2;
	int *numPtr;
	
	scanf("%d %d",&input1,&input2);
	numPtr=malloc(sizeof(int)*input1);
	
	for(int i=0;i<input1;i++){
		scanf("%d",numPtr+i);
	}
	
	for(int i=0;i<input1;i++){
		if(numPtr[i]<input2)printf("%d ",numPtr[i]);
	}
	
	
	
    return 0;
}