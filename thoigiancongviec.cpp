#include <bits/stdc++.h>
using namespace std;
struct queue
{
	int *a;
	int rear,font;
};
queue q;
bool empty(queue q)
{
	return q.rear=-1;
}
void init(queue &q)
{
	q.a=NULL;
	q.font=0;
	q.rear=-1;
}
void add(queue &q,int data)
{
	if(empty(q))
	{
		q.a=new int[1];
	}
	else
	{
		q.a=realloc(q.a,(q.rear-q.font+2)*sizeof(int));
	}
	q.rear++;
	q.a[q.rear]=data;
}
int move(queue &q)
{
	int p;
	if(empty(q))
	{
		return 0;
	}
	p=q.a[q.font];
	if(q.font==q.rear)
	{
		q.rear=-1;
		q.font=0;
	}
	else
	{
		q.font++;
	}
	return p;
}
void sort(float a[],float b[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				float tp=a[i];
				a[i]=a[j];
				a[j]=tp;
				
				tp=b[i];
				b[i]=b[j];
				b[j]=tp;
			}
		}
	}
}
void duyet(queue &q,float s[],float f[],int n)
{
	float last_finish=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]>=last_finish)
		{
			add.(q,i+1);
			last_finish=f[i];
		}
	}
}
int main()
{
	init(q);
	int n=5;
	float s[n]={};
	float f[n]={};
	sort(f,s,n);
	duyet(q,s,f,n);
	cout<<"tap cuc dai cac cong viec tuong hop voi nhau la: "<<endl;
	while(!empty(q))
	{
		int i=remove(q);
		cout<<"thoi gian bat dau"<<s[i]<<"thoi gian ket thuc"<<f[i];
		cout<<endl;
	}
}
