#ifndef CONFIGURATION_H 
#define CONFIGURATION_H 

#include <string>
#include <map>

using namespace std;

class Configuration {
	string hello;
	map<std::string, std::string> conf;
public:
	Configuration(string& language);
	string getText(string& message);
};

#endif
