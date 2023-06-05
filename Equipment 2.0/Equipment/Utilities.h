#pragma once
#using<system.dll>
#include <string>
#include <vector>
using namespace System;
using namespace System::IO;

namespace Utilities {
	std::string ConvertToString(System::String^ s); // ������������ System::string ^ � std::string
	String^ ConvertToString(std::string& os);		// ������������ std::string � System::string ^ 
	std::vector<std::string> SplitString(std::string str, char separator);
}
