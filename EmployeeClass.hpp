#ifndef EMPLOYEECLASS_HPP_INCLUDED
#define EMPLOYEECLASS_HPP_INCLUDED

#include "PersonClass.hpp"
class EMPLOYEE : public PERSON
{
public:
    EMPLOYEE();
    EMPLOYEE(string personal_name,string personal_ID,string personal_family,person_type person,uint16_t salary_base);
    void Get_Salary(void);
    void Show_Information_Employee(void);
private:
    uint16_t salary_base;
};

#endif // EMPLOYEECLASS_HPP_INCLUDED
