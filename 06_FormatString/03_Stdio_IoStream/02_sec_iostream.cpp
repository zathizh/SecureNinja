#include <iostream>
#include <fstream> 
#include <cstdlib>

using namespace std; 

int main(void) { 
	string filename; 
	ifstream ifs; 
	cin >> filename; 
	ifs.open(filename.c_str()); 
	if (ifs.fail()) { 
		cerr << "Error opening " << filename << endl; 
		exit(-1); 
	} 
	ifs.close(); 
}
