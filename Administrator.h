//---------------------------------------------------------------------------

#ifndef AdministratorH
#define AdministratorH
#include "user.h"
//---------------------------------------------------------------------------

#include <iostream>
#include <string>

using std::string;

class Administrator : public User {
private:
     string JobTitle;
public:
     Administrator(string lastname, string firstname, string email, string password, string phoneNumber, string dob, string question, string answer, string address, string jobTitle)
       : User(UserType::Administrator, lastname, firstname, email, password, phoneNumber, dob, question, answer, address), JobTitle(jobTitle){
          //Constructor Body
     }

     string GetJobTitle();
     void SaveUser(std::ostream& out) {
         User::SaveUser(out);
         out << "," << GetJobTitle();
     }
};




#endif
