#include<iostream>
#include<conio.h>
int main()
{
	int ar[10],n,large,small;
	std::cout<<"enter size of array";
	std::cin>>n;
	std::cout<<"enter array elements";
	for(int i=0;i<n;i++)
	{
		std::cin>>ar[i] ;
	}
	large=small=ar[0];
	for(int j=0;j<n;j++)
	{
		if(ar[j]>large)
		{
			large=ar[j];
		}
	}
	for(int j=0;j<n;j++)
	{
		if(ar[j]<small)
		{
			small=ar[j];
		}
	}
	std::cout<<"largest element :"<< large;
	std::cout<<"smallest element :"<<small;
}
