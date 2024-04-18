#include<bits/stdc++.h>
using namespace std;
 struct x{
    int num;
    char a;
    char b;
    char c;
};
struct stack
{
	int top;
	x*e;
}stack;
void init( stack &s)
{
	s.top=-1;
	s.e=NULL;
}
int empty( stack s)
{
	return s.top==-1;
}
void push(stack &s,x call_in)
{
	if(empty(s))
	{
		s.e=new x[1];
	}
	else
	{
		s.e=(x*)realloc(s.e,(s.top+2)*sizeof(x));
	}
	s.top++;
	s.e[s.top]=call_in;
}
void pop(stack &s,x &call_out)
{
	if(empty(s))
	{
		return;
	}
	call_out=s.e[s.top];
	if(s.top==0)
	{
		delete[]s.e;
		init(s);
	}
	else
	{
		s.e=(x*)realloc(s.e,s.top*sizeof(x));
		s.top--;
	}
}
void thaphanoi(x first)
{
	x call_in,call_out;
	stack s;
	init(s);
	call_in=first;
	push(s,call_in);
	while(!empty(s))
	{
		pop(s,call_out);
		if(call_out.num==1)
		{
			cout<<"chuyen 1 dia tu"<<call_out.a<<"sang"<<call_out.c;
		}
		else
		{
			call_in.num=call.out.num-1;
			call_in.a=call.out.b;
			call_in.b=call.out.a;
			call_in.c=call.out.c;
			push(s,call_in);
			
			call_in=call_out;
			call_in.num=1;
			push(s,call_in);
			
			call_in.num=call.out.num-1;
			call_in.a=call.out.a;
			call_in.b=call.out.c;
			call_in.c=call.out.b;
		}
int main()
{
	x first(3,'A','B','C');
	thaphanoi(first);
}
	
