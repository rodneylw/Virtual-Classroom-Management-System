//---------------------------------------------------------------------------


#ifndef StudentH
#define StudentH
#include "Course.h"
#include "User.h"

//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>


using std::string;

class Student : public User {
private:
     std::vector<Course*> Courses;
public:
     Student(string userID, string lastname, string firstname, string email, string password, string phoneNumber, string dob, string question, string answer, string address, bool isBlocked)
       : User(userID, lastname, firstname, email, password, phoneNumber, dob, question, answer, address, isBlocked){
          //Constructor Body
     }

     Student(string lastname, string firstname, string email, string password, string phoneNumber, string dob, string question, string answer, string address)
       : User(UserType::Student, lastname, firstname, email, password, phoneNumber, dob, question, answer, address){
          //Constructor Body
     }

     void SaveUser(std::ostream& out) {
         User::SaveUser(out);
     }
};




#endif


