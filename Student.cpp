//---------------------------------------------------------------------------

#pragma hdrstop

#include "Student.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

 void Student::SaveUser(std::ostream& out) {
	 User::SaveUser(out);
	 out << "," << std::fixed << std::setprecision(2) << GetGPA();
 }

float Student::GetGPA() {
	return GPA;
};

