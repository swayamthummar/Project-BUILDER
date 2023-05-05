#include<iostream>
#include<string.h>
using namespace std;

class State
{
	public:
		static char state_name[100];
		char state_capital[100];
		char state_population[100];
		char state_language[100];
		
		void datain()
		{
			cout<<"Enter State Capital->";
			cin>>state_capital;
			cout<<"Enter State Population->";
			cin>>state_population;
			cout<<"Enter State Language->";
			cin>>state_language;
		}
		void dataout()
		{
			cout<<"Capitals->"<<state_capital<<endl;
			cout<<"Population->"<<state_population<<endl;
			cout<<"Language->"<<state_language<<endl;
		}
		
		static void State_name()
		{
			cout<<state_name<<endl;
		}
};
char State::state_name[100]="[Gujarat]";

main()
{
	State s1;
	cout<<endl;
	s1.datain();
	
	cout<<"----------------------------------------------------"<<endl<<endl;
	
	s1.State_name();
	s1.dataout();
}
