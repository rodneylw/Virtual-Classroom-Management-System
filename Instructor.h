//---------------------------------------------------------------------------

#ifndef InstructorH
#define InstructorH
#include "User.h"
//---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <vector>

//#include "Course.h"

using std::string;

class Instructor : public User {
private:
	string Department;
	//vector<Course*> Courses;

public:
	Instructor(string userID, string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer, bool isBlocked, string department)
	   : User(userID, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer, isBlocked), Department(department){
		  InstructorCounter++;
	 }

     Instructor(string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer, string department)
	   : User(UserType::Instructor, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer), Department(department){

	 }

	 void SaveUser(std::ostream& out);

	 string GetDepartment();
     bool HasAttributeSubstring(const std::string& searchText) const override;
};

#endif
