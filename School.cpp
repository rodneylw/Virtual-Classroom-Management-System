//---------------------------------------------------------------------------

#pragma hdrstop

#include <fstream>
#include <string>
#include "School.h"
#include "User.h"
#include "Administrator.h"
#include "HelperFunctions.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

School* School::Instance = nullptr; // Initialize the instance pointer

School& School::GetInstance() {
    if(Instance == nullptr) {
        Instance = new School("Horizon Middle School");
    }
    return *Instance;
}

void School::AddAdministrator(std::unique_ptr<User> admin) {
    Administrators.push_back(std::move(admin));
}

std::vector<std::unique_ptr<User>>& School::GetAdministrators() {
        return Administrators;
    }

void School::SaveUsers() {
    fstream AdminInfoFile;
    AdminInfoFile.open("AdminInfo.txt", ios::app);
    if(AdminInfoFile.is_open()) {

        for(auto& admin : Administrators) {
            admin->SaveUser(AdminInfoFile);
            AdminInfoFile << std::endl;
        }

        AdminInfoFile.close();
    }

    fstream InstructorInfoFile;
    InstructorInfoFile.open("InstructorInfo.txt", ios::app);
    if(InstructorInfoFile.is_open()) {

        for(auto& instructor : Instructors) {
            instructor->SaveUser(InstructorInfoFile);
            InstructorInfoFile << std::endl;
        }

        InstructorInfoFile.close();
    }

    fstream StudentInfoFile;
    StudentInfoFile.open("StudentInfo.txt", ios::app);
    if(StudentInfoFile.is_open()) {

        for(auto& student : Students) {
            student->SaveUser(StudentInfoFile);
            StudentInfoFile << std::endl;
        }

        StudentInfoFile.close();
    }
}

void School::LoadUsers() {
    fstream AdminInfoFile;
    AdminInfoFile.open("AdminInfo.txt", ios::in);
    if(AdminInfoFile.is_open()) {
    		std::string line;

    		while(getline(AdminInfoFile, line)) {
               std::vector<std::string> ParsedLine = ParseCommaDelimitedString(line);

               std::string Email = ParsedLine[0];
               std::string Password = ParsedLine[1];
               std::string FirstName = ParsedLine[2];
               std::string LastName = ParsedLine[3];
               std::string DateOfBirth = ParsedLine[4];
               std::string PhoneNumber = ParsedLine[5];
               std::string Address = ParsedLine[6];
               std::string SecurityQuestion = ParsedLine[7];
               std::string SecurityAnswer = ParsedLine[8];
               std::string JobTitle = ParsedLine[9];

               std::unique_ptr<User> obj = std::make_unique<Administrator>(LastName,
     		FirstName, Email, Password, PhoneNumber, DateOfBirth, SecurityQuestion,
               SecurityAnswer, Address, JobTitle);

               Administrators.push_back(std::move(obj));
          }

          AdminInfoFile.close();
    }
}

