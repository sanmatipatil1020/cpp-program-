#include<stdexcept>
#include<iostream>
int main()
{
	int a,b,c;
	std::cout<<"enter the value of a and b for division";
	std::cin>>a>>b;
	try{
		if(b==0)
		  throw "divide by zero error";
		c=a/b;
		std::cout<<"answer:"<<c;
	}
	catch(const char*ptr)
	{
		std::cout<<"error:"<<ptr;
	}
	return 0;
}
