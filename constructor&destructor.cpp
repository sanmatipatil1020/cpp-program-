#include<iostream>
class circle
{
	public:
		   int r;
		   float Area;
		circle()
		{
			std::cout<<"Enter radius:";
			std::cin>>r;
			Area=3.142*r*r;
			std::cout<<"\nArea:"<<Area;
		}
		circle(int r1)
		{
			r=r1;
			Area=3.142*r*r;
			std::cout<<"\nArea2:"<<Area;
		}
		circle(circle &obj)
		{
			r=obj.r;
			Area=3.142*r*r;
			std::cout<<"\nArea2:"<<Area;
		}
		~circle();
};
int main()
{
	circle obj1;//default constructor called
	circle obj2(5);//parameterized constructor called
	circle obj3(obj2);//copy constructor called
	
}
circle::~circle()
{
	std::cout<<"\ndestructor called";
}
