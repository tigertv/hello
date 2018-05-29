#include "Configuration.h"
#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

Configuration::Configuration(string& filepath) {
	this->parseIniFile(filepath, this->options);
	string languageIni = "../i18n/" + this->options["language"] + ".ini";
	this->parseIniFile(languageIni, this->text);
}

string Configuration::getText(string& text) {
	return this->text[text];
}

void Configuration::parseIniFile(string& filepath, map<string, string>& mymap) {
	ifstream myfile(filepath);

	if (myfile.is_open())
	{
		string line;

		while ( getline (myfile,line) )
		{
			smatch m;
			regex e ("(.*)=\"(.*)\"");

			while (regex_search (line,m,e)) {
				mymap[ m[1] ] = m[2];
				line = m.suffix().str();
			}
		}
		myfile.close();
	}

}
