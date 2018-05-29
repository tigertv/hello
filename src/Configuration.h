#ifndef CONFIGURATION_H 
#define CONFIGURATION_H 

#include <string>
#include <map>

using namespace std;

class Configuration {
	map<string, string> text;
	map<string, string> options;
	void parseIniFile(string& file, map<string, string> &mymap);
public:
	Configuration(string& filepath);
	string getText(string& message);
};

#endif
