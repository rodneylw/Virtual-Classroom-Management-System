//---------------------------------------------------------------------------

#ifndef CourseH
#define CourseH

#include <iostream>
#include <string>
#include <vector>

#include "Instructor.h"


using std::string;
//---------------------------------------------------------------------------

class Course {
private:
	 string CourseID;
	 string CourseName;
	 string CourseDepartment;
     string CourseSemester;
	 bool CourseEnabled;
	 Instructor* CourseInstructor;
     std::vector<std::unique_ptr<User>> Students;
     //std::vector<Assignment*> Assignments;
     //std::vector<Evaluation*> Evaluations;
     //std::vector<Discussion*> Discussions;
     //Calendar CourseCalendar;
	 string StartDate;
     string EndDate;
public:

};


#endif
