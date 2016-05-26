#include <iostream>
#include <string>

int main()
{
	{
		std::string s = "a string";
		{
			std::cout << s << std::endl;
		}
		std::string x = "really, " + s;
		std::cout << x << std::endl;
	}
	return 0;
}
