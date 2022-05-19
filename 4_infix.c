#include<stdio.h>

char infix[30];
char postfix[30];
char stack[30];
int top=-1;
void inToPost(char[]);
int precedence(char);
void main(){
printf("Enter infix expression:");
scanf("%s",infix);
inToPost(infix);
printf("The postfix exp is:");
printf("%s",postfix);
}
void push(char element){
stack[++top] =element;
}
char pop(){
return stack[top--];
}
int precedence(char ele){
switch(ele){
case '(':
case ')':return 0;
case '+':
case '-':return 1;
case '*':
case '/':
case '%':return 2;
case '^':return 3;
}
}
void inToPost(char infix[]){
char symbol;
int i=0;
int r=0;
while((symbol = infix[i++])!='\0'){
if(symbol=='('){
push('(');
}
else if(symbol==')'){
while(stack[top]!='('){
postfix[r++] = pop();
}
if(stack[top]=='('){
pop();
}
}
else if(symbol == '+' || symbol == '-' || symbol == '*' || symbol=='/' || symbol == '^' || symbol == '%'){
while(precedence(stack[top])>=precedence(symbol)){
postfix[r++]=pop();
}
push(symbol);
}
else{
postfix[r++]=symbol;
}
}
while(top!=-1){
if(stack[top] == '(' || stack[top] == ')'){
top--;
}
else{
postfix[r++]=pop();
}
}
}
