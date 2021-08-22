#include<stdio.h>
#include<stdlib.h>

int main(){

    int a,input1,input2;
	int *numPtr;
	int *inputPtr1;
	int *inputPtr2;
	
	scanf("%d",&a);
	
	numPtr=malloc(sizeof(int)*a);
	inputPtr1=malloc(sizeof(int)*a);
	inputPtr2=malloc(sizeof(int)*a);
	
	for(int i=0;i<a;i++){
		input1=0;
		input2=0;
		
		scanf("%d %d", &input1, &input2);
		inputPtr1[i]=input1;
		inputPtr2[i]=input2;
		
		numPtr[i]=input1+input2;
	}
	
	for (int i=0;i<a;i++){
		
		printf("Case #%d: %d + %d = %d\n",i+1,inputPtr1[i],inputPtr2[i],numPtr[i]);
	}
	
    return 0;
}