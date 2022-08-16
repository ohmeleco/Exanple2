#ifndef STUDENTCLASS_H_INCLUDED
#define STUDENTCLASS_H_INCLUDED
class STUDENT : public PERSON
{
public:
    STUDENT();
    STUDENT(string person_name,string personal_ID,string personal_family,person_type person,uint16_t salary_base);
private:
    uint16_t salary_base;
};

#endif // STUDENTCLASS_H_INCLUDED
