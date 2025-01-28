#include<stdio.h>
#include<conio.h>
#include<iostream>
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else{
		return(num*fact(num-1));
	}
}
int main()
{
	int num;
	std::cout<<"enter number";
	std::cin>>num;
	int factorial=fact(num);
	std::cout<<" factorial of "<<num<<" is "<<factorial;
}
