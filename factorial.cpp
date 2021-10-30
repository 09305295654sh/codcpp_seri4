#include<conio.h>
#include<iostream>
using namespace std;
int main()
{   int n,sum=1;
	cout<<"enter adad:";
	cin>>n;
	for(int i=1;sum<=n;i++)
	{
		sum=sum*i;
		if(sum==n || n==1)
		break;

		else if(sum!=n && sum>n)
		cout<<"no";
	
	}
	cout<<sum;
	if(sum==n)
	cout<<"yes";

	
}
