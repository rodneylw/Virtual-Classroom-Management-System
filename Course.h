//---------------------------------------------------------------------------

#ifndef CourseH
#define CourseH

#include <iostream>
#include <string>
#include <vector>

#include "Instructor.h"
#include "HelperFunctions.h"


using std::string;
//---------------------------------------------------------------------------

class Course {
private:
	 string CourseID;
	 string CourseName;
	 string CourseDepartment;
     string CourseSemester;
	 bool CourseEnabled;
	 std::shared_ptr<Instructor> CourseInstructor;
	 std::vector<std::unique_ptr<User>> Students;
     //std::vector<Assignment*> Assignments;
     //std::vector<Evaluation*> Evaluations;
	 //std::vector<Discussion*> Discussions;
     //Calendar CourseCalendar;
	 string StartDate;
     string EndDate;
public:
	 Course(string courseID, string courseName, string courseDepartment, string courseInstructor, string courseSemester, string startDate, string endDate, string enabled)
	  : CourseID(courseID), CourseName(courseName), CourseDepartment(courseDepartment), CourseSemester(courseSemester), StartDate(startDate), EndDate(endDate) {
		 //Loading From File Constructor
		 CourseInstructor = GetInstructor(courseInstructor);

		 if(enabled == "1") {
			 CourseEnabled = true;
		 } else {
             CourseEnabled = false;
         }
	 }
	 Course(string courseName, string courseDepartment, string courseInstructor, string courseSemester, string startDate, string endDate, bool enabled) {
		 //Newly Created Constructor
		 CourseID = GenerateCourseID();
		 CourseInstructor = GetInstructor(courseInstructor);
	 }

     string GetCourseID();

	 string GenerateCourseID();
	 std::shared_ptr<Instructor> GetInstructor(std::string FullName);
};


#endif
