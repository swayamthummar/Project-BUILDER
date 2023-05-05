#include<iostream>
#include<string.h>
using namespace std;

class school
{ 
public:
	int student_id;
	char student_name[100];
	int student_roll;
	int student_standard;
	int student_age;
	char student_contact[12];
  static char student_school_name[100];
	char student_address[100];
	
void school_students_in()
{
   	cout<<"Enter Student ID->";
   	cin>>student_id;
   	cout<<"Enter Student Name->";
   	cin>>student_name;
   	cout<<"Enter Student Roll Number->";
   	cin>>student_roll;
   	cout<<"Enter Student Standard->";
   	cin>>student_standard;
   	cout<<"Enter Student AGE->";
   	cin>>student_age;
   	cout<<"Enter Student Contact->";
   	cin>>student_contact;
   	cout<<"Enter Student Address->";
   	cin>>student_address;
   	cout<<endl;
}

void school_students_out()
{
	cout<<school::student_school_name<<endl;
	cout<<"ID->"<<student_id<<endl;
	cout<<"Name->"<<student_name<<endl;
	cout<<"Roll Number->"<<student_roll<<endl;
	cout<<"Standard->"<<student_standard<<endl;
	cout<<"AGE->"<<student_age<<endl;
	cout<<"Contact Details->"<<student_contact<<endl;
	cout<<"Address->"<<student_address<<endl;
}
};
class collage
{
    public:
	int student_id;
	char student_name[100];
	int student_roll;
	char student_standard[10];
	int student_age;
	char student_contact[12];
static char student_collage_name[100];
	char student_address[100];
	
void collage_student_in()
{
   	cout<<"Enter Student ID->";
   	cin>>student_id;
   	cout<<"Enter Student Name->";
   	cin>>student_name;
   	cout<<"Enter  Student Roll Number->";
   	cin>>student_roll;
   	cout<<"Enter Student Current Year->";
   	cin>>student_standard;
   	cout<<"Enter Student AGE->";
   	cin>>student_age;
   	cout<<"Enter Student Contact->";
   	cin>>student_contact;
   	cout<<"Enter Student Address->";
   	cin>>student_address;
   	cout<<endl;
}
void collage_student_out()
{
	cout<<collage::student_collage_name<<endl;
    cout<<"ID->"<<student_id<<endl;
	cout<<"Name->"<<student_name<<endl;
	cout<<"Roll Number->"<<student_roll<<endl;
	cout<<"Standard->"<<student_standard<<endl;
	cout<<"AGE->"<<student_age<<endl;
	cout<<"Contact Details->"<<student_contact<<endl;
	cout<<"Address->"<<student_address<<endl;	
}		
};
char school::student_school_name[]="[RED & WHITE]";
char collage::student_collage_name[]="[RED & WHITE MULTIMEDIA INSTITUTE]";

main()
{
  school s1;
  collage c1;
  
  s1.school_students_in();
  cout<<endl;
  s1.school_students_out();
  cout<<"________________________________________________________________________"<<endl<<endl;
  c1.collage_student_in();
  cout<<endl;
  c1.collage_student_out();		
}
