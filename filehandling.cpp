#include<iostream>
#include<fstream>
using namespace std;
class student{
	int roll;
	char name[20];
	float per;
	public:
		void get()
		{
			cout<<"enter roll,name & per";
			cin>>roll>>name>>per;
			fstream f;
			f.open("student.txt",ios::app);
			f<<roll<<"\t"<<name<<"\t"<<per<<"\n";
			f.close();
		}
		void disp()
		{
			fstream f;
			cout<<"roll\tname\tper\n";
			f.open("student.txt",ios::in);
			while(f)
			{
				f>>roll>>name>>per;
			if(f)	
			cout<<roll<<"\t"<<name<<"\t"<<per<<"\n";
			}
			f.close();
		}
};
int main()
{
	student s;
	s.get();
	s.get();
	s.disp();
	return 0;
}
