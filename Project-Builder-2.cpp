#include<iostream>
#include<string.h>
using namespace std;
class HOTEL
{
	private:
		int id;
		char name[100];
		char type[50];
		int staffs;
		char rooms[30];
		int establish_year;
		char add[100];
		char rating[10];
		char website[100];
		
	public:
		void datain()
		{
			this->id=id;
			this->name[100]=name[100];
			this->type[50]=type[50];
			this->staffs=staffs;
			this->rooms[30]=rooms[30];
			this->establish_year=establish_year;
			this->add[100]=add[100];
			this->rating[10]=rating[10];
			this->website[100]=website[100];
			
			cout<<"Enter the ID of Hotel->";
			cin>>id;
			cout<<endl;
			cout<<"Enter the Name of Hotel->";
			cin>>name;
			cout<<endl;
			cout<<"Enter the Type of Hotel->";
			cin>>type;
			cout<<endl;
			cout<<"Enter the Staf Size of Hotel->";
			cin>>staffs;
			cout<<endl;
			cout<<"Enter the Room Size of Hotel->";
			cin>>rooms;
			cout<<endl;
			cout<<"Enter the Establish Year of Hotel->";
			cin>>establish_year;
			cout<<endl;
			cout<<"Enter the Address of Hotel->";
			cin>>add;
			cout<<endl;
			cout<<"Enter the Rating of Hotel->";
			cin>>rating;
			cout<<endl;
			cout<<"Enter the Website of Hotel->";
			cin>>website;
			cout<<endl;
			cout<<"--------------------------------------------------"<<endl<<endl;
			dataout();
		}
		void dataout()
		{
			cout<<"ID->"<<id<<endl<<endl;
			cout<<"Name->"<<name<<endl<<endl;
			cout<<"Type->"<<type<<endl<<endl;
			cout<<"Staff Size->"<<staffs<<endl<<endl;
			cout<<"Room Size->"<<rooms<<endl<<endl;
			cout<<"Establish Year->"<<establish_year<<endl<<endl;
			cout<<"Address->"<<add<<endl<<endl;
			cout<<"Rating->"<<rating<<endl<<endl;
			cout<<"Website->"<<website<<endl<<endl;
		}
};
main()
{
	HOTEL H;
	H.datain();
}
