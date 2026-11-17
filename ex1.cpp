#include<iostream>

using namespace std;
int main()
{
 int age = 20;
float height = 6.2;
double salary = 250000;
char grade = 'A';
bool isStudent = true;
string name = "Amaan";
const float PI = 3.14159;
cout <<"Enter your age:";
cin>>age;
cout<<"Enter your name:";
cin>>name;
cout<<"/n---student details---"<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Height:"<<height<<endl;
cout<<"Grade:"<<grade<<endl;
cout<<"student:"<<boolalpha<<isStudent<<endl;
cout<<"PI:"<<PI<<endl;
return 0;
}