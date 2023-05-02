#include<iostream>
#include<string.h>
using namespace std;
class school
{ 
public:
	int student_id;
	char student_name;
	int student_roll;
	int student_standard;
	int student_age;
	int student_contact[12];
  static char student_school_name[100];
	char student_address;
	
void school_students_in()
{
   
   	cout<<"Enter School Student ID->";
   	cin>>student_id;
   	cout<<"Enter School Student Name->";
   	cin>>student_name;
   	cout<<"Enter School Student Roll Number->";
   	cin>>student_roll;
   	cout<<"Enter School Student Standard->";
   	cin>>student_standard;
   	cout<<"Enter School Student AGE->";
   	cin>>student_age;
   	cout<<"Enter School Student Contact->";
   	cin>>student_contact;
   	cout<<"Enter School Student Address->";
   	cin>>student_address;
   	cout<<endl;
   	school_students_out();
}

void school_students_out()
{
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
    private:
	int student_id;
	char student_name;
	int student_roll;
	int student_standard;
	int student_age;
	int student_contact[12];
static char student_collage_name[100];
	char student_address;
	
void collage_student_in()
{
	public:
   	cout<<"Enter Collage Student ID->";
   	cin>>student_id;
   	cout<<"Enter Collage Student Name->";
   	cin>>student_name;
   	cout<<"Enter Collage Student Roll Number->";
   	cin>>student_roll;
   	cout<<"Enter Collage Student Standard->";
   	cin>>student_standard;
   	cout<<"Enter Collage Student AGE->";
   	cin>>student_age;
   	cout<<"Enter Collage Student Contact->";
   	cin>>student_contact;
   	cout<<"Enter Collage Student Address->";
   	cin>>student_address;
   	cout<<endl;
   	collage_students_out();
}
void collage_student_out()
{
    cout<<"ID->"<<student_id<<endl;
	cout<<"Name->"<<student_name<<endl;
	cout<<"Roll Number->"<<student_roll<<endl;
	cout<<"Standard->"<<student_standard<<endl;
	cout<<"AGE->"<<student_age<<endl;
	cout<<"Contact Details->"<<student_contact<<endl;
	cout<<"Address->"<<student_address<<endl;	
}		
};
char school::student_school_name[]="RED & WHITE";
char collage::stuent_collage_name[]="Red & White Multimedia Institute";
main()
{
	school s;
	collage c;
	
	s.student_school_in();
}
