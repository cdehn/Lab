/*
 * Document.hpp
 *
 *  Created on: May 8, 2015
 *      Author: Christina
 */
#ifndef DOCUMENT_HPP_
#define DOCUMENT_HPP_

#include <string>
using namespace std;
#include <iostream>

class Document{

	friend class Sort;
public:
	Document();
	string filename; //name of document
	int length; //number of words in document
	string* arr; //words in the document
	int diff;
	int diff1;
	int diff2;
	void readFile(string doc);
	void readFile1(string doc);
	void readFile2(string doc);
	void selectionSort(string *arr, int ct);
	void bubbleSort(string *a, int n);
	int getDifference(int t1, int t2);
	void quickSort(string *arr, int start, int end);
	int fastest(int diff1, int diff2, int diff3);
};




#endif /* DOCUMENT_HPP_ */
