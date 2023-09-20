//Faculty.h
#include "Faculty.cpp"
class Faculty
{
    private:
        string firstName;
        string lastName;
        string officeNumber;
        string status;
        int years;
        bool hasTenure;

    public:
        Faculty();
        string getFirstName();
        string getLastName();
        string getOfficeNumber();
        string getStatus();
        int getYears();
        bool checkTenure();

        void setFirstName(string);
        void setLastName(string);
        void setOfficeNumber(string);
        void setStatus(string);
        void setTenure(bool);
        void printFaculty(Faculty member);
};