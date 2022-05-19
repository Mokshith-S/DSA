//Binary Search

#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,a[10],key,low,high,mid;
printf("Enter the limit:");
scanf("%d",&n);
printf("Enter number:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter key item:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid = (low+high)/2;
if(key==a[mid])
{
printf("Item found at %d",mid);
exit(0);
}
else if(key<a[mid])
{
high=mid-1;
}
else
{
low = mid+1;
}
}
printf("Element not found");
}

