//---------------------------------------------------------------------------

#pragma hdrstop

#include "Instructor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

string Instructor::GetDepartment() {
	return Department;
}

 void Instructor::SaveUser(std::ostream& out) {
	 User::SaveUser(out);
     out << "," << GetDepartment();
 }

