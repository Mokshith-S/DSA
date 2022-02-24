//Selection sort

#include<stdio.h>
int n=0;
void selectFun(int[]);

void main(){
int array[30];
printf("Enter the no.of element:\t");
scanf("%d",&n);
printf("Enter the array elements:\t");
for(int i=0;i<n;i++)
scanf("%d",&array[i]);
}
selectFun(array);
}

void select(int a[]){

for(r=0;r<n-1;r++){
for(int t=r+1;t<n;it++){
if(a[r] < a[t]){
int temp = a[r];
a[r] = a[t];
a[t] = temp;
}
}
}
printf("The sorted array is :");
for(int l=0;l<n;l++){
printf("%d",a[t]);
}
}

