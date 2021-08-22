#include<stdio.h>
#include<stdlib.h>

int main(){

    int input1,input2;
	int result;
	int i=0;
	int *numPtr;
	numPtr=malloc(sizeof(int));
		while(1){
		result=0;
		scanf("%d %d",&input1,&input2);
		
		if(input1==0&&input2==0)break;
			
		result=input1+input2;
		
		numPtr[i]=result;
		i++;
	}
	
	int j=0;
	while(j<i){
		printf("%d\n",numPtr[j]);
		j++;
	}
	
    return 0;
}