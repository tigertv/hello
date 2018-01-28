#include "Configuration.h"
#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

Configuration::Configuration(string& language) {
	// TODO: form string to the configfile
	// get value of 'hello'
	//map<std::string, std::string> x = {{"en", "Hello, World"}, {"de", "Hallo, Welt"}, {"es", "Hola, Mundo"}, {"ru", "Привет, Мир"}};
	//this->hello = x[language];

	string line;
	ifstream myfile ("../i18n/"+language+".ini");
	if (myfile.is_open())
	{
		while ( getline (myfile,line) )
		{
			string s = line;
			smatch m;
			regex e ("(.*)=\"(.*)\"");   // matches words beginning by "sub"

			while (regex_search (s,m,e)) {
				//this->hello = m[1];
				this->conf[ m[1] ] = m[2];
				s = m.suffix().str();
			}
		}
		myfile.close();
	}
	

}

string Configuration::getText(string& message) {
	return this->conf[message];
}
