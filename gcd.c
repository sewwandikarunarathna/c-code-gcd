#include <stdio.h>
int main(int argc, char *argv[])
{
	int n1,n2;
	int result;
	printf("enter number1 ");
	scanf("%d",&n1);
	printf("enter number2 ");
	scanf("%d",&n2);
	int min,max;
	if(n1<n2){
		min=n1;
		max=n2;
		}
	if(n1>n2){
		min=n2;
		max=n1;
		}
		for(int i=1;i<min/2;i++)
		{
			if(min%i==0){
			if(max%i==0){
				result=i;
			}	
			}
		}
		if(max%min==0){
			result=min;
		}
		if(result){
			printf("greatest common divisor=%d ",result);
		}
		else{
			printf("no any greatest common  divisor.answer=1\n");	
		}
	
	
	return 0;
}