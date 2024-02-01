#include<iostream>
using namespace std;
int main()
{
	int n,num,com=0,f=0;
	int a[10];
	cout<<"input the number to be searched"<<endl;
	cin>>num;
	cout<<"enter number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		com++;
		if(a[i]==num)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		cout<<num<<"is present"<<endl;
	}
	else
	{
		cout<<num<<"is not present"<<endl;
	}
	cout<<"number of comparisons"<<com<<endl;
	return 0;
}
