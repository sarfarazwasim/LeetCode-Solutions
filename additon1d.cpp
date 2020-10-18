#include<iostream>
using namespace std;

int main()
{
	int i,s,sum=0;
	cout<<"Enter size of array";
	cin>>s;
    int a[s];
	for(i=0;i<s;i++)
	{
		cout<<"Enter value";
		cin>>a[i];
    sum+=a[i];
	}
	cout<<"\nSum is :\t"<<sum;
	cout<<"\n";
	return 0;
}

