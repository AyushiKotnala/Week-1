#include<iostream>
using namespace std;
int main()
{
	int n,num,com=0,f=0;
	int a[10];
	int lb,ub,mid;
	cout<<"input the number to be searched"<<endl;
	cin>>num;
	cout<<"enter number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	lb=0,ub=n-1;
	for(int i=0;i<n;i++)
	{
		mid=(lb+ub)/2;
		com++;
		if(num==a[mid])
		{
			f=1;
			break;
		}
		else if(num>a[mid])
		{
			lb=mid+1;
		}
		else if(num<a[mid])
		{
			ub=mid-1;
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
