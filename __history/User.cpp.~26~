//---------------------------------------------------------------------------

#pragma hdrstop

#include <vector>

#include "User.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

int User::AdminCounter = 1000;
int User::InstructorCounter = 1000;
int User::StudentCounter = 1000;

std::string User::generateID(UserType userType) {
	 std::string id;

     switch (userType) {
         case UserType::Administrator:
			 id = "ADM" + std::to_string(++AdminCounter);
             break;
         case UserType::Instructor:
			 id = "INS" + std::to_string(++InstructorCounter);
             break;
         case UserType::Student:
             id = "STU" + std::to_string(++StudentCounter);
             break;
         default:
             id = "UNKNOWN";
     }

     return id;
}

 string User::GetLastName() {
 	return LastName;
 };
 string User::GetFirstName() {
	return FirstName;
 };
 string User::GetFullName() {
	return FirstName + " " + LastName;
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
 string User::GetGender() {
	return Gender;
 }
 bool User::GetIsBlocked() {
	return IsBlocked;
 };
 void User::UnblockUser() {
	IsBlocked = false;
 };
 bool User::GetIsLoggedIn() {
	return IsLoggedIn;
 };

 void User::SaveUser(std::ostream& out) {
      out << GetUserID() << "," << GetEmail() << "," << GetPassword() << ","
      << GetFirstName() << "," << GetLastName() << "," << GetGender() << "," << GetDateOfBirth() << ","
	  << GetPhoneNumber() << "," << GetAddress() << "," << GetSecurityQuestion() << ","
	  << GetSecurityAnswer() << "," << (GetIsBlocked() ? "1" : "0");
 }

 void User::Logout() {
     IsLoggedIn = false;
 }


