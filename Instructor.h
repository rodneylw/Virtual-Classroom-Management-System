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
     //vector<Course*> Courses;

public:
	Instructor(string userID, string lastname, string firstname, string email, string password, string phoneNumber, string dob, string question, string answer, string address, bool isBlocked)
       : User(userID, lastname, firstname, email, password, phoneNumber, dob, question, answer, address, isBlocked){
          //Constructor Body
     }

     Instructor(string lastname, string firstname, string email, string password, string phoneNumber, string dob, string question, string answer, string address)
       : User(UserType::Instructor, lastname, firstname, email, password, phoneNumber, dob, question, answer, address){
          //Constructor Body
     }

     void SaveUser(std::ostream& out) {
         User::SaveUser(out);
     }
};




#endif
