/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 1 Октябрь 2015 г., 20:34
 */

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	ifstream stream(argv[1]);
	int n, k, sum;
	short count;
	while (stream >> n) {
		k = n;
		count = 0;
		do {
			count++;
			k /= 10;
		} while (k);
		
		k = n;
		
		sum = 0;
		while (n) {
			sum += pow(n%10, count);
			n /= 10;
		}
		
		if (sum == k) {
			cout << "True" << endl;
		}
		else {
			cout << "False" << endl;
		}
	}
	return 0;
}