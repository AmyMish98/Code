#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

char s[10], x1[100], x2[100];
int n,t;
void str(int size)
{
for(int i=0;i<size;i++)
x2[i]=x1[i];
}

int counta()
{
int ca=0;
for (int i=0;x2[i]!='\0';i++)
{	
	if (x2[i]=='a')
	ca++;
}
return ca;
}

int main()
{
	int size, na, k, nb, count;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		count =0;
		na=0;
		nb=0;
		k=0;
		cin>>s;
		cin>>n;
		for(int j=0;j<n;j++)
		{
		for (int p=0;s[p]!='\0';p++)
		{
		x1[k]=s[p];
		k++;
		}
		}
		size=k;
		for(k=1;k<=size;k++)
		{
		str(k);
		na = counta();
		nb=k-na;
		if (na>nb)
		count++;
		}
		cout<<count<<endl;
	}
	return 0;
}
