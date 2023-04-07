#include <iostream>
#include <vector>
 
int main()
{
	std::vector<std::string> strings = { "stuff", "things", "misc" };
	// auto s;
	for(const auto& s; s < strings.size()) {
		std::cout << s << std::endl;
	}
}