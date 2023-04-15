//---------------------------------------------------------------------------

#pragma hdrstop

#include "HelperFunctions.h"
#include "VirtualClassroomLogin.h"
#include <System.hpp>

//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> ParseCommaDelimitedString(std::string line) {
    std::vector<std::string> result;
    std::stringstream s_stream(line);

    while(s_stream.good()) {
        std::string substr;
        getline(s_stream,substr,',');
        result.push_back(substr);
    }
    return result;
}

bool StringToBool(std::string obj) {
	bool result;
	if(obj == "0") {
		   result = false;
	}
	if(obj == "1") {
		   result = true;
	}
    return result;
}

void LogoutCloseForms() {

	LoginForm->Show();

	int formCount = Screen->FormCount;

	std::vector<TCommonCustomForm*> formsToClose;

	for (int i = 0; i < formCount; ++i) {
		TCommonCustomForm *form = Screen->Forms[i];
		formsToClose.push_back(form);
	}

	for (TCommonCustomForm *form : formsToClose) {
		if (form->Name == "LoginForm") {
				continue;
		}
		form->Close();
	}
}





