#include<stdio.h>
int main(){
	int a = 0,b = 1,num,i;
	printf("Enter the number:-");
	scanf("%d",&num);
	printf("\n");
	printf("The fibbnocci series are:-\n");
	for(i=0;i<num;i++){
		printf("%d\n",a);
		int c = a+b;
		a = b;
		b = c;
	}
}

