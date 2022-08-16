#ifndef PERSONCLASS_HPP_INCLUDED
#define PERSONCLASS_HPP_INCLUDED
#include <string>
using std::string;
typedef enum person_type
{
    person_type_Unknown,
    Person_type_Manager,
    Person_type_Employee,
    Person_type_Student,
    Person_type_Teacher,
};

class PERSON
{
public:
    PERSON(void);
    PERSON(string person_name,string personal_ID,string personal_family,person_type person);
    void Get_New_Person(void);
    void Show_Information(void);
private:
    string Name;
    string Family;
    string ID;
    person_type Person;
};


#endif // PERSONCLASS_HPP_INCLUDED
