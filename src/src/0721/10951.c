#include<stdio.h>
#include<stdlib.h>

int main(){

    int input1=0,input2=0;
	int result;
	int i=0;


	while(scanf("%d %d",&input1,&input2)!=EOF){
		result=0;
		if(input1<0&&input2<0&&input1>10&&input2>10)break;
		result=input1+input2;
		printf("%d\n",result);
	}

	
    return 0;
}