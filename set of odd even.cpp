#include<stdio.h>
int main(){
	int size,i;
	printf("Enter the size of the array:- ");
	scanf("%d",&size);
	int arr[size];
	printf("enter the values:-\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("the result is the :-\n");
	for(i=0;i<size;i++){
		if(arr[i]%2==0)
			printf("even: %d\n",arr[i]);
		else
			printf("odd: %d\n",arr[i]);
		}
}
