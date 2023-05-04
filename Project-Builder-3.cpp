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
	
	cout<<"________________________________________________________________________"<<endl<<endl;
		
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
