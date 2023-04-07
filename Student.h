//---------------------------------------------------------------------------


#ifndef StudentH
#define StudentH
#include "Course.h"
#include "User.h"

//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>


using std::string;

class Student : public User {
private:
     std::vector<Course*> Courses;
public:

     void SaveUser(std::ostream& out) {
         User::SaveUser(out);
     }
};




#endif


