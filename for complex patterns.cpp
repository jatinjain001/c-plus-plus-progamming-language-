#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
cout<<"*";
}
for(int space=2*i-2;space<=2*n-2;space++)
{
cout<<" ";
}
for(int j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
for(int i=1;i<=n;i++)
{
	for(int j=n;j>=i;j--)
	{
		cout<<"*";
	}
	for(int space=1;space<=2*i-1;space++)
	{
		cout<<" ";
	}
    for(int j=n;j>=i;j--)
	{
		cout<<"*";
	}
	cout<<endl;
}
		
		 
return 0;
}
