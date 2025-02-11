#include<iostream>
class A
{
	public:
		int a,b;
		void get1()
		{
			std::cout<<"\n enter the value of a:";
			std::cin>>a;
		}
};
class B:public A{
	public:
	void get2()
	{
		std::cout<<"\n enter the value of b:";
		std::cin>>b;
	}
};
class C:public B{
	public:
	void sum()
	{
		std::cout<<"\nsum:"<<a+b;
	}
};
int main()
{
C obj;
obj.get1();
obj.get2();
obj.sum();
return 0;
	
}
