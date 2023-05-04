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
	
//void school_students_in()
//{
//   	cout<<"Enter School Student ID->";
//   	cin>>student_id;
//   	cout<<"Enter School Student Name->";
//   	cin>>student_name;
//   	cout<<"Enter School Student Roll Number->";
//   	cin>>student_roll;
//   	cout<<"Enter School Student Standard->";
//   	cin>>student_standard;
//   	cout<<"Enter School Student AGE->";
//   	cin>>student_age;
//   	cout<<"Enter School Student Contact->";
//   	cin>>student_contact;
//   	cout<<"Enter School Student Address->";
//   	cin>>student_address;
//   	cout<<endl;
//   	school_students_out();
//}
//
//void school_students_out()
//{
//	cout<<"ID->"<<student_id<<endl;
//	cout<<"Name->"<<student_name<<endl;
//	cout<<"Roll Number->"<<student_roll<<endl;
//	cout<<"Standard->"<<student_standard<<endl;
//	cout<<"AGE->"<<student_age<<endl;
//	cout<<"Contact Details->"<<student_contact<<endl;
//	cout<<"Address->"<<student_address<<endl;
//}
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
	
//void collage_student_in()
//{
//   	cout<<"Enter Collage Student ID->";
//   	cin>>student_id;
//   	cout<<"Enter Collage Student Name->";
//   	cin>>student_name;
//   	cout<<"Enter Collage Student Roll Number->";
//   	cin>>student_roll;
//   	cout<<"Enter Collage Student Standard->";
//   	cin>>student_standard;
//   	cout<<"Enter Collage Student AGE->";
//   	cin>>student_age;
//   	cout<<"Enter Collage Student Contact->";
//   	cin>>student_contact;
//   	cout<<"Enter Collage Student Address->";
//   	cin>>student_address;
//   	cout<<endl;
//   	collage_students_out();
//}
//void collage_student_out()
//{
//    cout<<"ID->"<<student_id<<endl;
//	cout<<"Name->"<<student_name<<endl;
//	cout<<"Roll Number->"<<student_roll<<endl;
//	cout<<"Standard->"<<student_standard<<endl;
//	cout<<"AGE->"<<student_age<<endl;
//	cout<<"Contact Details->"<<student_contact<<endl;
//	cout<<"Address->"<<student_address<<endl;	
//}		
};
char school::student_school_name[]="RED & WHITE";
char collage::student_collage_name[]="Red & White Multimedia Institute";

main()
{
  school s1;
  collage c1;
  
  s1.student_id=12301;
  strcpy(s1.student_name,"Swayam Thummar");
  s1.student_roll=1;
  s1.student_standard=9;
  s1.student_age=14;
  strcpy(s1.student_contact,"1234567890");
  strcpy(s1.student_address,"Sarthana Jakatnaka"); 
  
    cout<<school::student_school_name<<endl;
    cout<<"ID->"<<s1.student_id<<endl;
	cout<<"Name->"<<s1.student_name<<endl;
	cout<<"Roll Number->"<<s1.student_roll<<endl;
	cout<<"Standard->"<<s1.student_standard<<endl;
	cout<<"AGE->"<<s1.student_age<<endl;
	cout<<"Contact Details->"<<s1.student_contact<<endl;
	cout<<"Address->"<<s1.student_address<<endl;
	
	cout<<"________________________________________________________________________"<<endl;
		
		c1.student_id=32101;
		strcpy(c1.student_name,"Swayam Thummar");
		c1.student_roll=1;
		strcpy(c1.student_standard,"3rd year");
		c1.student_age=21;
		strcpy(c1.student_contact,"0987654321");
		strcpy(c1.student_address,"Sarthana Jakatnaka");
		
		cout<<collage::student_collage_name<<endl;
	    cout<<"ID->"<<c1.student_id<<endl;
    	cout<<"Name->"<<c1.student_name<<endl;
     	cout<<"Roll Number->"<<c1.student_roll<<endl;
	    cout<<"Standard->"<<c1.student_standard<<endl;
	    cout<<"AGE->"<<c1.student_age<<endl;
	    cout<<"Contact Details->"<<c1.student_contact<<endl;
	    cout<<"Address->"<<c1.student_address<<endl;

}
