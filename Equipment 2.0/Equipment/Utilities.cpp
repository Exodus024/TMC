#include "Utilities.h"

std::string Utilities::ConvertToString(System::String^ s)
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	std::string	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

String^ Utilities::ConvertToString(std::string& os)
{
	System::String^ s = gcnew System::String(os.c_str());
	return s;
}

std::vector<std::string> Utilities::SplitString(std::string str, char separator)
{
	std::vector<std::string> res;
	std::string s;

	int i = 0;
	while (str[i] != '\0') {
		if (str[i] != separator) {
			s += str[i];
		}
		else {
			res.push_back(s);
			s.clear();
		}

		i++;
	}

	res.push_back(s);
	return res;
}
