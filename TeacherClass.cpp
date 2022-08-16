#include "TeacherClass.hpp"
#include <iostream>
#include <cstring>
using std::string;
using std::cout;
using std::cin;
using std::endl;
TEACHER::TEACHER(void):PERSON()
{
    this->salary_base=1;
}
TEACHER::TEACHER(string personal_name,string personal_ID,string personal_family,person_type person,uint16_t salary_base):PERSON(personal_name,personal_ID,personal_family,person)
{
    this->salary_base;
}
void TEACHER::Get_Salary(void)
{
    cout<<"Please input the Salary:"<<endl;
    cin>>salary_base;
}

void TEACHER::Show_Information_teacher(void)
{
    Show_Information();
    cout<<"\t Salary:"<<this->salary_base<<endl;
}
