//---------------------------------------------------------------------------

#pragma hdrstop

#include <vector>

#include "User.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

std::string User::generateID(UserType userType) {
	static int adminCounter = 0;
     static int instructorCounter = 0;
     static int studentCounter = 0;

     std::string id;

     switch (userType) {
         case UserType::Administrator:
             id = "ADM" + std::to_string(++adminCounter);
             break;
         case UserType::Instructor:
             id = "INS" + std::to_string(++instructorCounter);
             break;
         case UserType::Student:
             id = "STU" + std::to_string(++studentCounter);
             break;
         default:
             id = "UNKNOWN";
     }

     return id;
}

 string User::GetLastName() {
	 return LastName;
 }
 string User::GetFirstName() {
      return FirstName;
 };
 string User::GetUserID() {
      return UserID;
 };
 string User::GetEmail() {
      return Email;
 };
 string User::GetPassword() {
      return Password;
 };
 string User::GetPhoneNumber() {
      return PhoneNumber;
 };
 string User::GetDateOfBirth() {
      return DateOfBirth;
 };
 string User::GetSecurityQuestion() {
      return SecurityQuestion;
 };
 string User::GetSecurityAnswer() {
      return SecurityAnswer;
 };
 string User::GetAddress() {
      return Address;
 };
 bool User::GetIsBlocked() {
      return IsBlocked;
 };
 bool User::GetIsLoggedIn() {
      return IsLoggedIn;
 };

 void User::SaveUser(std::ostream& out) {
      out << GetEmail() << "," << GetPassword() << ","
      << GetFirstName() << "," << GetLastName() << "," << GetDateOfBirth() << ","
      << GetPhoneNumber() << "," << GetAddress() << "," << GetSecurityQuestion() << ","
      << GetSecurityAnswer();
 }

