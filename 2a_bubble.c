//Bubble sort

#include<stdio.h>
int n=0;
int array[30];
void bubblesort(int[],int);

int main()
{
int array[10],n,i,j,temp;
printf("Enter the no.of elements:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
bubblesort(array,n);
return 0;
}


void bubblesort(int array[],int n)
{
for(int r=0;r<n-1;r++){
for(int k=0;k<n-r-1;k++){
if(array[k] > array[k+1]){
int temp = array[k];
array[k] = array[k+1];
array[k+1] = temp;
}
}
}
printf("The array sorted in ascending order");
for(int kt=0;kt<n;kt++){
printf("%d ",array[kt]);
}
}
