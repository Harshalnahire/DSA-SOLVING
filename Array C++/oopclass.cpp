#include <iostream>
#include <string>

using namespace std;

class student{
public:	
	string Name;
	string college;
	int age;
	
	void IntroduceYourself(){
		cout<<"Name :"<<Name<<endl;
		cout<<"college :"<<college<<endl;
		cout<<"age :"<<age<<endl;
		
	}
};

int main(){
	student student1;
	student1.Name="Harshal";
	student1.college="RMDSSOE";
	student1.age=21;
	student1.IntroduceYourself();

//    cout<<"Name :"<<student1.Name<<endl;
//    cout<<"college :"<<student1.college<<endl;
//    cout<<"Age :"<<	student1.age<<endl;
    student student2;
    student2.Name="Rina";
	student2.college="RMDSSOE";
	student2.age=21;
	student2.IntroduceYourself();

    
}
