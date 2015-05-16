/*
 * Main.cpp
 *
 *  Created on: May 8, 2015
 *      Author: Christina
 */

#include "Document.hpp"
#include <iostream>
#include <sys/time.h>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	cout << "Sorting article 1"  << endl;
	Document d1;
	//d1.readFile("Article1.txt");
	//d1.readFile1("Article1.txt");
	d1.readFile2("Article1.txt");
	cout << endl;

	/*
	cout << "Sorting article 2, Start time: "  << endl;
	gettimeofday(&tp, NULL);
	long int ms2 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms2 << endl;
	Document d2;
	d2.readFile("Article2.txt");
	cout << "End time: " << endl;
	gettimeofday(&tp, NULL);
	long int ms3 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms3 << endl;
	int diff2 = ms3 - ms2;
	cout << "Time difference: " << diff2 << endl;

	cout << endl;


	cout << "Sorting article 3, Start time: "  << endl;
	gettimeofday(&tp, NULL);
	long int ms4 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms4 << endl;
	Document d3;
	d3.readFile("Article3.txt");
	cout << "End time: " << endl;
	gettimeofday(&tp, NULL);
	long int ms5 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms5 << endl;
	int diff3 = ms5 - ms4;
	cout << "Time difference: " << diff3 << endl;



	cout << "Sorting article 4, Start time: "  << endl;
	gettimeofday(&tp, NULL);
	long int ms6 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms6 << endl;
	Document d4;
	d4.readFile("Article4.txt");
	cout << "End time: " << endl;
	gettimeofday(&tp, NULL);
	long int ms7 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms7 << endl;
	int diff4 = ms7 - ms6;
	cout << "Time difference: " << diff4 << endl;



	cout << "Sorting article 5, Start time: "  << endl;
	gettimeofday(&tp, NULL);
	long int ms8 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms8 << endl;
	Document d5;
	d3.readFile("Article5.txt");
	cout << "End time: " << endl;
	gettimeofday(&tp, NULL);
	long int ms9 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << ms9 << endl;
	int diff5 = ms9 - ms8;
	cout << "Time difference: " << diff5 << endl;
	cout << endl;

*/
	return 0;
}//main()
