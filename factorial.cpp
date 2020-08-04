#include<iostream>

using namespace std;

int main()
{
	int i,n,p=1;
	cout<<"Enter the number for calculating factorial: ";
	cin>>n;
	for(i=n;i>=1;i--)
	{
		p = p*i;
	}
	cout<<"Factorial: "<<p;
	cout<<endl;
	return 0;
}
