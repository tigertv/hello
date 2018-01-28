#include "Configuration.h"
#include <iostream>
#include <map>

using namespace std;

Configuration::Configuration(string& language) {
	// TODO: form string to the configfile
	// get value of 'hello'
	map<std::string, std::string> x = {{"en", "Hello, World"}, {"de", "Hallo, Welt"}, {"es", "Hola, Mundo"}, {"ru", "Привет, Мир"}};
	this->hello = x[language];
}

string Configuration::getText(string& message) {
	return this->hello;
}
