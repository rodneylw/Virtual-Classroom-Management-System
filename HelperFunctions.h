//---------------------------------------------------------------------------

#ifndef HelperFunctionsH
#define HelperFunctionsH
//---------------------------------------------------------------------------
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <ctime>
#include <chrono>
#include <random>

std::vector<std::string> ParseCommaDelimitedString(std::string line);
bool StringToBool(std::string obj);

void LogoutCloseForms();
float StringToFloat(const std::string& stringValue);
std::string FloatToString(float floatValue);

bool IsOnlyWhitespace(const std::string& str);

std::string GenerateRandomID(int length);

#endif
