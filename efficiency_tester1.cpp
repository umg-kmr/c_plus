#include<iostream>
# include <ctime>
using namespace std;

int if_prime(unsigned long long int x);

int main()
{
	clock_t start = clock();
	int p=0;	
	unsigned long long int a=1;
	for(a=1; a<=5000 ; a++)
	{
		p+=1;
		p = if_prime(a);
		if (p <= 2 && p != 0)
		{
			cout<<a<<endl;
		}
	}
	
	clock_t end=clock();
	printf("Simulation took %g seconds\n",(end-start)/(double)CLOCKS_PER_SEC);
	
	return 0;
}

int if_prime(unsigned long long int x)
{
  unsigned long long int i;
  int c=0;
  for(i=1; i<=x; i++)
  {
  	if (x%i == 0)
	{
		c+=1;	
	}
	else
	{
		continue;
	}
  }
 return c;
} 