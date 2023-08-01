#include<stdio.h>
void matrix(int [],int , int);
int main(){
int row1,col1,i,j,k;
int row2,col2;
printf("Enter the no.of.rows of matrix1:- ");
scanf("%d",&row1);
printf("Enter the no.of.cols of matrix1:- ");
scanf("%d",&col1);
printf("Enter the no.of.rows of matrix2:- ");
scanf("%d",&row2);
printf("Enter the no.of.cols of matrix2:- ");
scanf("%d",&col2);
if(row1!=col2){
printf("sorry we can't to multiplication\n");
}
int arr1[row1][col1],arr2[row2][col2];
printf("Enter the values of the matrix1:- \n");
for(i=0;i<row1;i++){
for(j=0;j<col1;j++){
scanf("%d",&arr1[i][j]);
}
}
printf("Enter the values of the matrix2:- \n");
for(i=0;i<row2;i++){
for(j=0;j<col2;j++){
scanf("%d",&arr2[i][j]);
}
}
int sum = 0,res[row1][col2];
for(i=0;i<row1;i++){
for(j=0;j<col2;j++){
for(k=0;k<col2;k++){
sum += arr1[i][k]*arr2[j][k];
}
res[i][j] = sum;
sum = 0;
}
}
printf("The resulantant matrix is :\n");
for(i=0;i<row1;i++){
for(j=0;j<col2;j++){
printf("%d ",res[i][j]);
}
printf("\n");
}
}

