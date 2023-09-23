//Faculty.cpp
#include <iostream>
#include <string>
using namespace std;
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
        Faculty()
        {
            firstName = "John";
            lastName = "Doe";
            officeNumber = "A100";
            status = "Professor";
            years = 0;
            hasTenure = false;
        }
        Faculty(string fName, string lName)
        {
            firstName = fName;
            lastName = lName;
            officeNumber = "A100";
            status = "Professor";
            years = 0;
            hasTenure = false;
        }
        Faculty(string fName, string lName, int y)
        {
            firstName = fName;
            lastName = lName;
            officeNumber = "A100";
            status = "Professor";
            years = y;
            if(years >= 5)
                hasTenure = true;
            else
                hasTenure = false;
        }
        Faculty(string fName, string lName, string oNumber, int y)
        {
            firstName = fName;
            lastName = lName;
            officeNumber = oNumber;
            status = "Professor";
            years = y;
            if(years >= 5)
                hasTenure = true;
            else
                hasTenure = false;
        }
        Faculty(string fName, string lName, string oNumber, string s, int y)
        {
            firstName = fName;
            lastName = lName;
            officeNumber = oNumber;
            status = s;
            years = y;
            if(years >= 5)
                hasTenure = true;
            else
                hasTenure = false;
        }
        Faculty(string fName, string lName, string oNumber, string s, int y, bool hTenure)
        {
            firstName = fName;
            lastName = lName;
            officeNumber = oNumber;
            status = s;
            years = y;
            hasTenure = hTenure;
        }
        //accessor methods
        string getFirstName(){return firstName;}
        string getLastName(){return lastName;}
        string getOfficeNumber(){return officeNumber;}
        string getStatus(){return status;}
        int getYears(){return years;}
        bool checkTenure(){return hasTenure;}
        //mutator methods
        void setName(string fName, lName){firstName = fName, lastName = lName;}
        void setOfficeNumber(string oNumber){officeNumber = oNumber;}
        void setStatus(string s){status = s;}
        void setYears(int y){years = y;}
        void setTenure(bool hTenure){hasTenure = hTenure;}
        //print method
        void printFaculty(Faculty member)
        {
            cout << "Faculty member " << member.getFirstName() << " " << member.getLastName() << " stats:\n";
            cout << "First name: " << member.getFirstName() << "\n";
            cout << "Last name: " << member.getLastName() << "\n";
            cout << "Office number: " << member.getOfficeNumber() << "\n";
            cout << "Status: " << member.getStatus() << "\n";
            cout << "Years worked: " << member.getYears() << "\n";
            if(member.checkTenure())
                cout << "Has tenure\n";
            else
                cout << "Does not have tenure\n";
        }
};
