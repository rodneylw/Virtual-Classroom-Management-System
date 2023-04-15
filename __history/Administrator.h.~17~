//---------------------------------------------------------------------------

#ifndef AdministratorH
#define AdministratorH
#include "User.h"
//---------------------------------------------------------------------------

#include <iostream>
#include <string>

using std::string;

class Administrator : public User {
private:
     string JobTitle;
public:
	 Administrator(string userID, string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer, bool isBlocked, string jobTitle)
	   : User(userID, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer, isBlocked), JobTitle(jobTitle){
		  AdminCounter++;
	 }

	 Administrator(string email, string password, string firstname, string lastname, string gender, string dob, string phoneNumber, string address, string question, string answer, string jobTitle)
       : User(UserType::Administrator, email, password, firstname, lastname, gender, dob, phoneNumber, address, question, answer), JobTitle(jobTitle){
          UnblockUser();
     }

     string GetJobTitle();

     void SaveUser(std::ostream& out);
};




#endif
