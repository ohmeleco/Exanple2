#include "PersonClass.hpp"
#include <iostream>
#include <cstring>
using std::string;
using std::cout;
using std::cin;
using std::endl;
PERSON::PERSON(void)
{
    ID="Blank";
    Name="Blank";
    Family="Blank";
    Person=person_type_Unknown;
}

PERSON::PERSON(string personal_name,string personal_ID,string personal_family,person_type person)
{
    this->ID=personal_ID;
    this->Name=personal_name;
    this->Family=personal_family;
    this->Person=person;
}
void PERSON::Get_New_Person(void)
{
    char *s ,p;
    string input1,input2,input3,input4;
    cout<<"Hello and Welcome to CPP institute\r\nPlease Select a group:"<<endl;
    cout<<"M: Manager\t E: Employee\t T: Teacher\t S: Student"<<endl;
    while(1)
    {
        cin>>input1;
        s=new char(input1.length());
        strcpy(s,input1.c_str());
        // validating Input
        if((s[0]=='M'||s[0]=='m'|| s[0]=='T'|| s[0]=='t'|| s[0]=='E'|| s[0]=='e'|| s[0]=='S'|| s[0]=='s') && input1.length()==1)
        {
          p=s[0];
          break;
        }
        cout<<"Please input correct latter"<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Please Select a group:"<<endl;
        cout<<"M: Manager\t E: Employee\t T: Teacher\t S: Student"<<endl;

    }
    cout<<"--------------------------"<<endl;
    cout<<"Please input Name:"<<endl;
    cin>>Name;
    cout<<"--------------------------"<<endl;
    cout<<"Please input Family:"<<endl;
    cin>>Family;
    cout<<"--------------------------"<<endl;
    cout<<"Please input ID_Number:"<<endl;
    cin>>ID;
    if(p=='M'||p=='m')
        Person=Person_type_Manager;
    if(p=='T'||p=='t')
        Person=Person_type_Teacher;
    if(p=='S'||p=='s')
        Person=Person_type_Student;
    if(p=='E'||p=='e')
       Person=Person_type_Employee;

}

void PERSON::Show_Information(void)
{
    cout<<"Input Information is:"<<endl;
    cout<<"Name:"<<Name<<"\t Family:"<<Family<<endl;
    cout<<"ID  :"<<ID;
}
