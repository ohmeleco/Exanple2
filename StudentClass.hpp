#ifndef STUDENTCLASS_HPP_INCLUDED
#define STUDENTCLASS_HPP_INCLUDED
#include "PersonClass.hpp"
class STUDENT : public PERSON
{
public:
    STUDENT();
    STUDENT(string personal_name,string personal_ID,string personal_family,person_type person,uint16_t salary_base);
    void Get_Salary(void);
    void Show_Information_Student(void);
private:
    uint16_t salary_base;
};

#endif // STUDENTCLASS_HPP_INCLUDED
