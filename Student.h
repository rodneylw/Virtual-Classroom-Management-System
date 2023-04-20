//---------------------------------------------------------------------------


#ifndef StudentH
#define StudentH
#include "Course.h"
#include "User.h"

//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


using std::string;

class Student : public User {
private:
	 float GPA;
	 //std::vector<shared_ptr<Course>> Courses;
public:
	 Student(string userID, string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer, bool isBlocked, float gpa)
	   : User(userID, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer, isBlocked), GPA(gpa) {
		  StudentCounter++;
     }

     Student(string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer)
       : User(UserType::Student, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer){
		  GPA = 0.0;
	 }

	 void SaveUser(std::ostream& out);
	 float GetGPA();
};




#endif


