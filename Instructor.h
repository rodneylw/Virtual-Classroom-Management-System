//---------------------------------------------------------------------------

#ifndef InstructorH
#define InstructorH
#include "User.h"
//---------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <vector>
//#include "Course.h"

using std::string;

class Instructor : public User {
private:
     //vector<Course*> Courses;

public:

     void SaveUser(std::ostream& out) {
         User::SaveUser(out);
     }
};




#endif
