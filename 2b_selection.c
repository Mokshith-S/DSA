//Selection sort

#include<stdio.h>
int n=0;
void selectFun(int[]);

int main(){
int array[30];
printf("Enter the no.of element:\t");
scanf("%d",&n);
printf("Enter the array elements:\t");
for(int i=0;i<n;i++) {
scanf("%d",&array[i]);
}
selectFun(array);
return 0;
}

void selectFun(int array[]){

for(int r=0;r<n-1;r++){
for(int t=r+1;t<n;t++){
if(array[r] < array[t]){
int temp = array[r];
array[r] = array[t];
array[t] = temp;
}
}
}
printf("The sorted array is :");
for(int l=0;l<n;l++){
printf("%d",array[l]);
}
}

