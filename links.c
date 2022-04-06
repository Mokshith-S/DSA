#include<stdio.h>
#include<stdlib.h>
typedef struct Node *lstptr;
struct Node{
	int data;
	lstptr link;
};
lstptr first=NULL;
lstptr getnode()
{
	lstptr node;
	node=(lstptr)malloc(sizeof(struct Node));
	return node;
}
void insertBegin(int ele)
{
	lstptr new;
	new = getnode();
	new->data = ele;
	new->link = NULL;
	if(first!=NULL)
		new->link=first;
	first=new;
}
void insertEnd(int ele)
{
	lstptr temp,new;
	new = getnode();
	new->data = ele;
	new->link = NULL;
	if(first!=NULL)
	{
		temp=first;
		while(temp->link!=NULL)
			temp=temp->link;
		temp->link = new;
	}
	else
	first=new;
}
void deleteBegin()
{
lstptr temp;
if(first==NULL)	
{
	printf("List is empty");
	return;
}
temp=first;
if(first->link == NULL)
	first=NULL;
else
{
	first=first->link;
}
free(temp);	
}
void deleteEnd()
{
lstptr prev,temp;
if(first==NULL)	
{
	printf("List is empty\n");
	return;
}
temp=first;
if(first->link == NULL)
	first=NULL;
else
{
	while(temp->link!=NULL)
	{
		prev=temp;
		temp=temp->link;
	}
	prev->link=NULL;
}
free(temp);	
}
void deleteSpecific(int key)
{
lstptr temp,prev;
if(first==NULL)
{
	printf("List is empty\n");
	return;
}
temp=first;
if(first->data == key)
{
	if(first->link ==NULL)
		first=NULL;
	else
		first=first->link;
}
else
{
	while(temp->data!=key && temp->link!=NULL)
	{	
		prev=temp;
		temp=temp->link;
	}
	if(temp->link==NULL && temp->data!=key)
		printf("Key not found\n");
	else if(temp->link!=NULL)
		prev->link=temp->link;
	else
		prev->link=NULL;
}
free(temp);
}
void display()
{
	lstptr new,temp;
	if(first==NULL)
	{
		printf("List is empty\n");
		return;
	}
	temp=first;
	while(temp->link!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
	printf("%d\n",temp->data);
}
void main()
{
int ch=1,op,ele;
while(ch)
{
	printf("1.Insert Begin\n2.Insert End\n3.Delete Begin\n4.Delete End\n5.Delete Specific\n6.Display\n7.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:printf("Enter the element to insert:\n");
			scanf("%d",&ele);
			insertBegin(ele);
			break;
		case 2:printf("Enter the element to insert:\n");
			scanf("%d",&ele);
			insertEnd(ele);
			break;
		case 3:deleteBegin();
			break;
		case 4:deleteEnd();
			break;
		case 5:printf("Enter the key element:");
			scanf("%d",&ele);
			deleteSpecific(ele);
			break;
		case 6:display();
			break;
		case 7:exit(0);
			break;
		default:printf("Enter valid choice");
	}
	
}
}
