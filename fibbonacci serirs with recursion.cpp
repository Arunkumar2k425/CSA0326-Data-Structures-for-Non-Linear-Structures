#include<stdio.h>
int fact(int );
int main(){
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("The factorial of %d is %d\n",num,fact(num));
}
int fact(int num){
	if(num==0)
		return 1;
	else if(num==1)
		return 1;
	else
		return num*fact(num-1);
	}

