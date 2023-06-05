#pragma once
#using<system.dll>
#include <string>
#include <vector>
using namespace System;
using namespace System::IO;

namespace Utilities {
	std::string ConvertToString(System::String^ s); // конвертируем System::string ^ в std::string
	String^ ConvertToString(std::string& os);		// конвертируем std::string в System::string ^ 
	std::vector<std::string> SplitString(std::string str, char separator);
}
