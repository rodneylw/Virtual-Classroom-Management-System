//---------------------------------------------------------------------------

#ifndef SchoolH
#define SchoolH

#include <vector>
#include <memory>
#include "User.h"
//#include "Course.h"

using std::string;
//---------------------------------------------------------------------------
class School {
private:
     string SchoolName;
     std::vector<std::unique_ptr<User>> Administrators;
     std::vector<User*> Instructors;
     std::vector<User*> Students;
     //std::vector<Course*> Courses;
     static School* instance;

     School(string name) {
          SchoolName = name;
     };
public:
     static School& getInstance();
     void addAdministrator(std::unique_ptr<User> admin);

	School(const School&) = delete;
     School& operator=(const School&) = delete;
};


#endif
