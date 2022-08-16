#ifndef MANAGERCLASS_HPP_INCLUDED
#define MANAGERCLASS_HPP_INCLUDED
#include "PersonClass.hpp"
class MANAGER : public PERSON
{
public:
    MANAGER();
    MANAGER(string personal_name,string personal_ID,string personal_family,person_type person,uint16_t salary_base);
    void Get_Salary(void);
    void Show_Information_Manager(void);
private:
    uint16_t salary_base;
};


#endif // MANAGERCLASS_HPP_INCLUDED
