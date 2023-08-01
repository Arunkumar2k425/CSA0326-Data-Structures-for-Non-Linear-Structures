#include<stdio.h>
#define MAX 10
void insertBig(int [],int );
void insertmid(int [],int );
void insertEnd(int [],int );
int main(){
	int arr[MAX],i;
	int size;
	printf("enter the no.of.elements:-");
	scanf("%d",&size);
	printf("enter the elements in the array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	insertBig(arr,size);
	printf("\n");
	insertmid(arr,size);
	printf("\n");
	insertEnd(arr,size);
 }

void insertBig(int arr[],int size){
	int i;
	if(size < MAX){
		int ele;
		printf("enter the element to insert at beg:");
		scanf("%d",&ele);
		for(i=size-1;i>=0;i--){
			arr[i+1] = arr[i];
		}
		arr[0] = ele;
	}
	else
		printf("sry overflow\n");
	printf("the modified array is the\n");
	for(i=0;i<size+1;i++){
		printf("%d ",arr[i]);
	}
 }

void insertmid(int arr[],int size ){
	int i,ele,pos;
	printf("enter the element to insert middle:-");
	scanf("%d",&ele);
	printf("enter the position:-");
	scanf("%d",&pos);
	if(size<MAX){
		for(i=size;i>=pos-1;i--){
			arr[i+1] = arr[i];	
		}
		arr[pos-1] = ele;
		printf("the modified array is the:-\n");
		for(i=0;i<size+2;i++){
			printf("%d ",arr[i]);
		}
	}
	else
		printf("sorry over flow can't insert\n");
 }
 void insertEnd(int arr[] ,int size){
	 size += 2;
	 int ele;
	 printf("enter the element to insert End:-");
	 scanf("%d",&ele);
	 if(size<MAX){
		 arr[size] = ele;
		 printf("the modified array is the:-\n");
		 for(int i=0;i<size+1;i++){
			 printf("%d ",arr[i]);
		 }
	 }
	 else{
		 printf("sorry overflow can't insert\n");
	 } 
 }

