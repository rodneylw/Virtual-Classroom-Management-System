//---------------------------------------------------------------------------

#ifndef UserH
#define UserH
#include <iostream>
#include <string>
#include <memory>

using std::string;

//---------------------------------------------------------------------------
class User {
private:
     string LastName;
     string FirstName;
     string UserID;
     string Email;
     string Password;
     string PhoneNumber;
     string DateOfBirth;
     string SecurityQuestion;
     string SecurityAnswer;
     string Address;
     bool IsBlocked;
     bool IsLoggedIn;
     //std::vector<Notification> Notifications;

protected:
    enum class UserType {
            Administrator,
            Instructor,
            Student
         };

     string generateID(UserType userType);

public:
	User(UserType type, string lastname, string firstname, string email, string password, string phoneNumber, string dob, string question, string answer, string address){
          UserID = generateID(type);
          LastName = lastname;
          FirstName = firstname;
          Email = email;
          Password = password;
          PhoneNumber = phoneNumber;
          DateOfBirth = dob;
          SecurityQuestion = question;
          SecurityAnswer = answer;
          Address = address;
          IsBlocked = false;
          IsLoggedIn = false;
	};

     User(string userID, string lastname, string firstname, string email, string password, string phoneNumber, string dob, string question, string answer, string address, bool isBlocked){
          UserID = userID;
          LastName = lastname;
          FirstName = firstname;
          Email = email;
          Password = password;
          PhoneNumber = phoneNumber;
          DateOfBirth = dob;
          SecurityQuestion = question;
          SecurityAnswer = answer;
          Address = address;
          IsBlocked = isBlocked;
          IsLoggedIn = false;
	};

     //User(userID, lastname, firstname, email, password, phoneNumber, dob, question, answer, address, isBlocked)

     string GetLastName();
     string GetFirstName();
     string GetUserID();
     string GetEmail();
     string GetPassword();
     string GetPhoneNumber();
     string GetDateOfBirth();
     string GetSecurityQuestion();
     string GetSecurityAnswer();
     string GetAddress();
     bool GetIsBlocked();
     bool GetIsLoggedIn();
     virtual void SaveUser(std::ostream& out);
};







#endif
