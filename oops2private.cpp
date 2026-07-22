#include<iostream>
using namespace std;
class student {
	private:
		string name;
		int age;
		int roll;
		string grade;
	public:
		void setname(string s){
			name = s;
		}
		void setage(int a){
			age = a;
		}
		void setroll(int r){
			roll = r;
		}
		void setgrade(string g){
			grade = g;
		}
		void getname(){
			cout<<"name = "<<name<<endl;
		}
			void getage(){
			cout<<"age = "<<age<<endl;
		}
		void getroll(){
			cout<<"roll = "<<roll<<endl;
		}
			void getgrade(){
			cout<<"grade = "<<grade<<endl;
		}
};
int main(){
	student s1;
	s1.setname("satyam");
	s1.setage(23);
	s1.setroll(12);
	s1.setgrade("A+");
	s1. getname();
	s1. getage();
	s1. getroll();
	s1. getgrade();
}
