#include "Configuration.h"
#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

Configuration::Configuration(string& language) {
	ifstream myfile ("../i18n/"+language+".ini");

	if (myfile.is_open())
	{
		string line;

		while ( getline (myfile,line) )
		{
			smatch m;
			regex e ("(.*)=\"(.*)\"");

			while (regex_search (line,m,e)) {
				this->text[ m[1] ] = m[2];
				line = m.suffix().str();
			}
		}
		myfile.close();
	}

}

string Configuration::getText(string& text) {
	return this->text[text];
}
