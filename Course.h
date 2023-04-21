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
	 bool CourseDisabled;
	 std::shared_ptr<Instructor> CourseInstructor;
	 std::vector<std::unique_ptr<User>> Students;
     //std::vector<Assignment*> Assignments;
     //std::vector<Evaluation*> Evaluations;
	 //std::vector<Discussion*> Discussions;
     //Calendar CourseCalendar;
	 string StartDate;
     string EndDate;
public:
	 Course(string courseID, string courseName, string courseDepartment, string courseInstructor, string courseSemester, string startDate, string endDate, bool disabled)
	  : CourseID(courseID), CourseName(courseName), CourseDepartment(courseDepartment), CourseSemester(courseSemester), StartDate(startDate), EndDate(endDate) {
		 CourseInstructor = GetInstructor(courseInstructor);
         CourseDisabled = disabled;
	 }

	 string GetCourseID();
	 string GetCourseName();
	 string GetCourseDepartment();
	 string GetCourseSemester();
	 bool GetIsCourseDisabled();
	 string GetCourseInstructorString();
	 string GetCourseStartDate();
	 string GetCourseEndDate();

	 void SaveCourse(std::ostream& out);

	 //string GenerateCourseID();
	 std::shared_ptr<Instructor> GetInstructor(std::string FullName);
};


#endif
