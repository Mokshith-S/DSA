//Linear Search

#include<stdio.h>
int main(){
int n,a[10],key,i;
printf("Enter a limit:");
scanf("%d",&n);
printf("Enter number:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter key item:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
printf("Item found at location %d",i);
return 0;
}
}
printf("Element not found");
}

