//---------------------------------------------------------------------------

#pragma hdrstop

#include "Course.h"
#include "School.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

/*string Course::GenerateCourseID() {
	std::string ID = GenerateRandomID(6);
	std::vector<std::string> ExistingCourseIDs;

	for(auto Course : School::GetInstance().GetCourses()) {
		ExistingCourseIDs.push_back(Course->GetCourseID());
	}

	for(auto CourseID : ExistingCourseIDs) {
		while(ID == CourseID) {
			ID = GenerateRandomID(6);
		}
	}

	return ID;
} */

std::shared_ptr<Instructor> Course::GetInstructor(std::string FullName) {
	for(auto instructor : School::GetInstance().GetInstructors()) {
		 if(FullName == instructor->GetFullName()) {
			 return  std::dynamic_pointer_cast<Instructor>(instructor);
		 }
	}
    return nullptr;
}

std::string Course::GetCourseID() {
    return CourseID;
}

string Course::GetCourseName() {
	return CourseName;
}

string Course::GetCourseDepartment() {
	return CourseDepartment;
}

string Course::GetCourseSemester() {
	return CourseSemester;
}

bool Course::GetIsCourseDisabled() {
	return CourseDisabled;
}

string Course::GetCourseInstructorString() {
	std::string CourseInstructorFullName = CourseInstructor->GetFullName();
	return CourseInstructorFullName;
}

string Course::GetCourseStartDate() {
	return StartDate;
}

string Course::GetCourseEndDate() {
    return EndDate;
}

void Course::SaveCourse(std::ostream& out) {
  out << GetCourseID() << "," << GetCourseName() << "," << GetCourseDepartment() << "," << GetCourseInstructorString() << "," << GetCourseSemester() << "," << GetCourseStartDate() << "," << GetCourseEndDate() << "," << GetIsCourseDisabled();
}
