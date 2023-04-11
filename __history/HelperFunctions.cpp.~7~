//---------------------------------------------------------------------------

#pragma hdrstop

#include "HelperFunctions.h"
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
    	   obj = false;
   	} else {
    	   obj = true;
   	}
    return result;
}





