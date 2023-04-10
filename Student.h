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
     Student(string userID, string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer, bool isBlocked)
       : User(userID, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer, isBlocked){
          //Constructor Body
     }

     Student(string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer)
       : User(UserType::Student, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer){
          //Constructor Body
     }

     void SaveUser(std::ostream& out) {
         User::SaveUser(out);
     }
};




#endif


