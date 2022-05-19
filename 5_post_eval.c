#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>

int stack[50];
char postfix[30],symbol;
int top=-1;
void push(int);
int pop();
int postfix_eval()
{
int i;
int op1,op2,sum;
while((symbol=postfix[i++])!='\0')
{
if(isalnum(symbol))
push(symbol-'0');
else
{
op2 = pop();
op1 = pop();
switch(symbol)
{
case '+':push(op1+op2);
	break;
case '-':push(op1-op2);
	break;
case '*':push(op1*op2);
	break;
case '/':if(op2!=0)
	{
	push(op1/op2);
	}
	else
	{
	printf("Divided by zero error");
	exit(0);
	}
	break;
case '^':sum=pow(op1,op2);
	push(sum);
	break;
}
}
}
return(pop());
}
void push(int item)
{
stack[++top] = item;
}
int pop()
{
return stack[top--];
}
void main()
{
int result;
printf("Enter postfix expression:");
scanf("%s",postfix);
result = postfix_eval();
printf("Postfix result is: %d",result);
}

