#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int roll;
	int age;
	string grade;
};
int main(){
	student s1;
	s1.name = "golu";
	s1.roll = 23;
	s1.age = 45;
	s1.grade = "A+";
	cout << "Name  : " << s1.name << endl;
    cout << "Roll  : " << s1.roll << endl;
    cout << "Age   : " << s1.age << endl;
    cout << "Grade : " << s1.grade << endl;
    student s2;
	s2.name = "satyam";
	s2.roll = 45;
	s2.age = 78;
	s2.grade = "A+";
	cout << "Name  : " << s2.name << endl;
    cout << "Roll  : " << s2.roll << endl;
    cout << "Age   : " << s2.age << endl;
    cout << "Grade : " << s2.grade << endl;
}
