#include<stdexcept>
#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,4,6,8,10},c;
    cout<<"enter the index value(0-4):";
	cin>>c;
	try{
		if(c<0||c>4)
		  throw out_of_range("invalid index");
	
		cout<<"element is:"<<arr[c];
	}
	catch(const out_of_range &obj)
	{
		cout<<"error:"<<obj.what();
	}

		cout<<"element is:"<<arr[(c+5)%5];
		return 0;
}
