#include<iostream>

using namespace std;

int main ()
{
	int n,i,sum;
	sum=0;
	cout<<"Enter a positive integer:";
	cin>>n;
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"Sum = "<<sum;
	cout<<endl;
	return 0;
}

