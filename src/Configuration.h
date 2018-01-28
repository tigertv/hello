#ifndef CONFIGURATION_H 
#define CONFIGURATION_H 

#include <string>
#include <map>

using namespace std;

class Configuration {
	map<std::string, std::string> text;
public:
	Configuration(string& language);
	string getText(string& message);
};

#endif
