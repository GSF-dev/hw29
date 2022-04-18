#include "Functions.h"
#include <fstream>
#include <string>
using namespace std;

bool ovewrite(string path, string str) {
	ifstream in;
	in.open(path, ios::in);
	if (in.is_open()) {
		ofstream out;
		out.open(path, ios::out);
		getline(cin, str);
		out << str << endl;
		out.close();
		return true;
	}
	else
		return false;
	in.close();
}
