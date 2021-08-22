#include<stdio.h>

int main(){

    int a,b,c;
    int tmp3,tmp4,tmp5;
	int result;
	
    scanf("%d %d",&a,&b);
	
	tmp3=a*(b%10);
	tmp4=a*((b/10)%10);
    tmp5=a*(b/100);
    
	result=tmp3+tmp4*10+tmp5*100;
	
	printf("%d\n%d\n%d\n%d\n",tmp3,tmp4,tmp5,result);

    return 0;
}