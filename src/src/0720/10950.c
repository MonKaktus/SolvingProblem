#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,input1,input2;
	int *numPtr;
	
	scanf("%d",&a);
	
	numPtr=malloc(sizeof(int)*a);
	
	for(int i=0;i<a;i++){
		input1=0;
		input2=0;
		
		scanf("%d %d", &input1, &input2);
		
		numPtr[i]=input1+input2;
	}
	
	for (int i=0;i<a;i++){
		
		printf("%d\n",numPtr[i]);
	}
	
    return 0;
}