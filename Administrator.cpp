//---------------------------------------------------------------------------

#pragma hdrstop

#include "Administrator.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

string Administrator::GetJobTitle() {
    return JobTitle;
}

 void Administrator::SaveUser(std::ostream& out) {
     User::SaveUser(out);
     out << "," << GetJobTitle();
 }

 bool Administrator::HasAttributeSubstring(const std::string& searchText) const {
	return User::HasAttributeSubstring(searchText) || (JobTitle.find(searchText) != std::string::npos);
}
