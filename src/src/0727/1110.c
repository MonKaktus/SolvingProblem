#include<stdio.h>
#include<stdlib.h>

int main(){

    int input1=0;
	int cycle=0;
	int tmp1=0,tmp2=0;
	int result=0;
	int newNum=0;

	scanf("%d",&input1);
	
		tmp1=input1/10;tmp2=input1%10;
		while(newNum!=input1){
			result=tmp1+tmp2;
			newNum=(tmp2*10)+(result%10);
			tmp1=newNum/10;tmp2=newNum%10;
			cycle++;
		}
		if(cycle==0)cycle++;
		printf("%d",cycle);
		
	
	
    return 0;
}