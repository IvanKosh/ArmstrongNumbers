/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 1 Октябрь 2015 г., 20:34
 */

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	string line;
	while (getline(stream, line)) {
		cout << line << endl;
	}
	return 0;
}