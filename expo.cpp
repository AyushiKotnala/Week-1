#include<iostream>
using namespace std;
int linear(int a[],int j,int min,int key)
{
	for(int i=j;i<=min;i++)
	{
		if(a[i]==key)
		{
			return 0;
			break;
		}
	}
	return -1;
}
int expo_search(int a[],int key,int n)
{
	int i=1;
	if(a[0]==key)
	{
		return 0;
	}
	while(i<n&&a[i]<=key)
	{
		i=i*2;
	}
	return linear(a,i/2,min(i,n-1),key);
}
int main()
{
	int n,key;
	int a[10];
	cout<<"input the number to be searched"<<endl;
	cin>>key;
	cout<<"enter number of elements"<<endl;
	cin>>n;
	cout<<"enter the elements in the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int res=expo_search(a,key,n);
	if(res==0)
	{
		cout<<key<<"is present"<<endl;
	}
	else
	{
		cout<<key<<"is not present"<<endl;
	}
	return 0;
}
		
