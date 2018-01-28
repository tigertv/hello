#ifndef CONFIGURATION_H 
#define CONFIGURATION_H 

#include <string>

using namespace std;

class Configuration {
	string hello;
public:
	Configuration(string& language);
	string getText(string& message);
};

#endif
