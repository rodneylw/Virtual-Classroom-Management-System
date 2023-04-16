//---------------------------------------------------------------------------

#pragma hdrstop

#include "HelperFunctions.h"
#include "VirtualClassroomLogin.h"
#include <System.hpp>
#include <iomanip>

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

float StringToFloat(const std::string& stringValue) {
    float floatValue = 0.0;
    std::stringstream ss(stringValue);

    ss >> floatValue;

    if (ss.fail() || !ss.eof()) {
        throw std::invalid_argument("Invalid float value: " + stringValue);
    }

    floatValue = roundf(floatValue * 100) / 100;

    return floatValue;
}

std::string FloatToString(float floatValue) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << floatValue;
	return ss.str();
}

bool IsOnlyWhitespace(const std::string& str) {
    for (char c : str) {
        if (!std::isspace(static_cast<unsigned char>(c))) {
            return false;
		}
    }
	return true;
}


