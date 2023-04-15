//---------------------------------------------------------------------------

#ifndef SchoolH
#define SchoolH

#include <vector>
#include <memory>
#include "User.h"
#include "Administrator.h"
//#include "Course.h"

using std::string;
//---------------------------------------------------------------------------
class School {
private:
	 string LoggedInUserID;
	 string LoggedInUserName;
     string SchoolName;
	 std::vector<std::unique_ptr<User>> Administrators;
	 std::vector<std::unique_ptr<User>> Instructors;
     std::vector<std::unique_ptr<User>> Students;
     //std::vector<std::unique_ptr<Course>> Courses;
     static School* Instance;

	 School(string name) {
          SchoolName = name;
     };
public:
	 static School& GetInstance();

     void AddAdministrator(std::unique_ptr<User> admin);
	 std::vector<std::unique_ptr<User>>& GetAdministrators();

	 void AddInstructor(std::unique_ptr<User> instructor);
	 std::vector<std::unique_ptr<User>>& GetInstructors();

	 void AddStudent(std::unique_ptr<User> student);
	 std::vector<std::unique_ptr<User>>& GetStudents();

     void SaveUsers();
     void LoadUsers();

	School(const School&) = delete;
	 School& operator=(const School&) = delete;

	 string GetLoggedInUserID();
     string GetLoggedInUserName();
	 void LoginUser(string userID, string userName);
	 void LogoutUser();


};


#endif
