#include <iostream>
#include "PersonClass.hpp"
#include "TeacherClass.hpp"
using namespace std;


void Display_Welcome_MSG(void)
{
    cout<<"Hello and Welcome to CPP institute\r\nPlease Select a group:"<<endl;
    cout<<"M: Manager\t E: Employee\t T: Teacher\t S: Student"<<endl;
}

int main()
{
    TEACHER t;
    t.Get_New_Person();
    t.Get_Salary();
    t.Show_Information_teacher();
    return 0;
}
