#ifndef TEACHERCLASS_HPP_INCLUDED
#define TEACHERCLASS_HPP_INCLUDED
#include "PersonClass.hpp"
class TEACHER : public PERSON
{
public:
    TEACHER();
    TEACHER(string personal_name,string personal_ID,string personal_family,person_type person,uint16_t salary_base);
    void Get_Salary(void);
    void Show_Information_teacher(void);
private:
    uint16_t salary_base;
};


#endif // TEACHERCLASS_HPP_INCLUDED
