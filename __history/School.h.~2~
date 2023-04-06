//---------------------------------------------------------------------------

#ifndef SchoolH
#define SchoolH

#include <vector>
#include "User.h"
//#include "Course.h"

using std::string;
//---------------------------------------------------------------------------
class School {
private:
     string SchoolName;
     std::vector<User*> Administrators;
     std::vector<User*> Instructors;
     std::vector<User*> Students;
     //std::vector<Course*> Courses;
public:
     School(string name) {
          SchoolName = name;
     };
     void addAdministrator(User* admin);
};


#endif
