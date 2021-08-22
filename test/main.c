#include<stdio.h>
#include<stdlib.h>

int main(){

    int input[3];
	int numSize;
	int numAry[10]={0,};  //0~9까지의 횟수 카운팅
	int rest;
	int result;
	int numLength=0;

	int i=0;
	for(i=0;i<3;i++){
		scanf("%d",&input[i]);
		if(i==0){
			result=input[i];
		}
		else {
			result*=input[i];
		}
	}
	
	printf("result : %d\n",result);
	
	int index=0;
	int divResult;
	int tmp;
	divResult=result;
	tmp=divResult%10;
	for(int i=0;divResult>10;i++){
		if(i>0){
			divResult=divResult/10;
			tmp=divResult%10;
		}
		numAry[tmp]++;
		numLength++;
	}
	
	for(int i=0;i<numLength;i++){
		printf("%d\n",numAry[i]);
	}
	
	
	/*
	int j=0;
	for(j=0;j<3;j++){
		printf("%d",input[j]);
	}
	*/
	
    return 0;
}