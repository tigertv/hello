#include "Configuration.h"
#include <iostream>
#include <fstream>
#include <regex>

using namespace std;

Configuration::Configuration(string& file) {
	ifstream configFile(file);

	if (configFile.is_open())
	{
		string line;

		while ( getline (configFile,line) )
		{
			smatch m;
			regex e ("(.*)=\"(.*)\"");

			while (regex_search (line,m,e)) {
				this->options[ m[1] ] = m[2];
				line = m.suffix().str();
			}
		}
		configFile.close();

		ifstream translation("../i18n/" + this->options["language"] + ".ini");

		if (translation.is_open())
		{
			string line;

			while ( getline (translation,line) )
			{
				smatch m;
				regex e ("(.*)=\"(.*)\"");

				while (regex_search (line,m,e)) {
					this->text[ m[1] ] = m[2];
					line = m.suffix().str();
				}
			}
			translation.close();
		}



	}

	

}

string Configuration::getText(string& text) {
	return this->text[text];
}
