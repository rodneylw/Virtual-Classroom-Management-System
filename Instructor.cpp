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

 bool Instructor::HasAttributeSubstring(const std::string& searchText) const {
	return User::HasAttributeSubstring(searchText) || (Department.find(searchText) != std::string::npos);
}


