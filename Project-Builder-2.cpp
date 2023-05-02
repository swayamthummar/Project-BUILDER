#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public:
		int id;
		char name[100];

class B
{
	public:
		int n1;
		char n2[100];
		void setdata(int id,char name[])
		{
			cout<<"Enter your ID->";
			cin>>id;
			cout<<"Enter your Name->";
			cin>>name;
		}
		void getdata(int id,char name[])
		{
			cout<<"ID   ->"<<id<<endl;
			cout<<"Name ->"<<name<<endl;
	    }
	};
};
main()
{
	A a;
	
	a.setdata();
	cout<<"___________________________________"<<endl;
	a.getdata();
}
