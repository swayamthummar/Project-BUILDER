#include<iostream>
#include<string.h>
using namespace std;

 class employee
 {
 	private:
 	int id;
 	char name[100];
 	char role[100];
 	char salary[20];
 	int exp;
 	char address[100];
 	char email[90];
 	char contact[12];
 
    public:
    	
   	void setdata()
    {
 	cout<<"Enter your ID->";
 	cin>>id;
 	cout<<"Enter your Name->";
 	cin>>name;
 	cout<<"Enter your Role->";
 	cin>>role;
 	cout<<"Enter your Salary->";
 	cin>>salary;
 	cout<<"Enter your Experience->";
 	cin>>exp; 
 	cout<<"Enter your Address->";
 	cin>>address;
 	cout<<"Enter your Email->";
 	cin>>email;
 	cout<<"Enter your Contact Details->";
 	cin>>contact;
   }
   void getdata()
   {
 	cout<<"ID              ->"<<id<<endl;
 	cout<<"Name            ->"<<name<<endl;
 	cout<<"Role            ->"<<role<<endl;
 	cout<<"Salary          ->"<<salary<<endl;
 	cout<<"Experience      ->"<<exp<<endl;
 	cout<<"Address         ->"<<address<<endl;
 	cout<<"Email           ->"<<email<<endl;
 	cout<<"Contact Details ->"<<contact<<endl;
   }
 };
 main()
 {
 	employee e1,e2,e3,e4,e5;
 	
 	e1.setdata();
 	cout<<endl;
 	e2.setdata();
 	cout<<endl;
 	e3.setdata();
 	cout<<endl;
 	e4.setdata();
 	cout<<endl;
 	e5.setdata();
 	
 	cout<<"_______________________________________________________________"<<endl;
 	
 	e1.getdata();
 	 	cout<<endl;
    e2.getdata();
     	cout<<endl;
 	e3.getdata();
 	 	cout<<endl;
 	e4.getdata();
 	 	cout<<endl;
 	e5.getdata();
 	 	cout<<endl;
 }
