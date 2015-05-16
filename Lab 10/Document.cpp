/*
 * Document.cpp
 *
 *  Created on: May 8, 2015
 *      Author: Christina
 */
#include <iostream>
#include "Document.hpp"
#include <iostream>
#include <sys/time.h>
#include <string>
#include <stdio.h>
#include<fstream>
using namespace std;

Document::Document(){
	length = 0;
}

void Document::readFile(string fname) {
	filename = fname;
	ifstream file(filename.c_str());
	int ct = 0;
	string x;

	while (!file.eof()) {
		file >> x;
		if (!file.eof()) {
			ct++;
		}
	}
	file.close();
	arr = new string[ct];
	length = ct;
	cout << "Length: " << ct << endl;
	ifstream file2(filename.c_str());
	ct = 0;
	while (!file2.eof()) {
		file2 >>x;
		if (!file2.eof()) {
			arr[ct] = x;
			ct++;
		}//if
	}//while
	file2.close();
	cout << endl;

	selectionSort(arr, ct);
	return;
}//readFile

void Document::readFile1(string fname){
	filename = fname;
		ifstream file(filename.c_str());
		int ct = 0;
		string x;

		while (!file.eof()) {
			file >> x;
			if (!file.eof()) {
				ct++;
			}
		}
		file.close();
		arr = new string[ct];
		length = ct;
		ifstream file2(filename.c_str());
		ct = 0;
		while (!file2.eof()) {
			file2 >>x;
			if (!file2.eof()) {
				arr[ct] = x;
				ct++;
			}//if
		}//while
		file2.close();
		for(int i =0; i < ct; i++){
			cout << arr[i] << endl;
		}
		bubbleSort(arr, ct);
		return;
}//readFile

void Document::readFile2(string fname){
	filename = fname;
			ifstream file(filename.c_str());
			int ct = 0;
			string x;

			while (!file.eof()) {
				file >> x;
				if (!file.eof()) {
					ct++;
				}
			}
			file.close();
			arr = new string[ct];
			length = ct;
			ifstream file2(filename.c_str());
			ct = 0;
			while (!file2.eof()) {
				file2 >>x;
				if (!file2.eof()) {
					arr[ct] = x;
					ct++;
				}//if
			}//while
			file2.close();
			cout << "length " << ct <<endl;
		quickSort(arr, 0, ct);
		return;
}//readFile2

void Document::quickSort(string *arr, int start, int end){
	struct timeval tp;
	gettimeofday(&tp, NULL);
    long int ms4 = tp.tv_sec * 1000 + tp.tv_usec / 1000;

    int i = start;
    int j = end;

    string tmp;
    int pivotVal = (start + end) / 2;
    string pivot = arr[pivotVal];
    cout << pivotVal  <<" " << pivot << endl;

    while (i <= j) {
    	cout << i << " " << j << endl;
    	while (arr[i] < pivot){
    		cout << "Here i = " << i <<" "<< arr[i] <<  endl;
    		i++;
    		cout << "Here i = " << i <<" "<< arr[i] <<  endl;
    	}

    	while (arr[j] > pivot){
            cout << "Here -- " << j << endl;
            j--;
            cout << "Here -- " << j << endl;
        }

        if(i <= j) {
        	tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }//if
    }//while

    if (start < j){
    	quickSort(arr, start, j);
    }//if

    if (i < end){
    	quickSort(arr, i, end);
    }//if

    for(int i = 0; i < end; i ++){
    	cout << arr[i] << endl;
    }

    gettimeofday(&tp, NULL);
    long int ms5 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    cout << "End time: " << ms5 << endl;
    diff2 = getDifference(ms4, ms5);
    int winner = fastest(diff, diff1, diff2);
    cout << winner << " was the fastest" << endl;
}//quickSort
void Document::selectionSort(string *arr, int ct){
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int ms = tp.tv_sec * 1000 + tp.tv_usec / 1000;
	cout << "Start time: " << ms << endl;

	for(int i = 0; i < ct - 1; i++){
	   int minPosition = i;
	   string minValue = arr[i];
	   for(int j = i + 1; j < ct; j++) {
	        if (arr[j] < minValue){
	            minValue = arr[j];
	            minPosition = j;
	        }//if
	    }//for
	    arr[minPosition] = arr[i];
    	arr[i] = minValue;
	}//for

    for(int k = 0; k < ct; k++){
    	cout << arr[k] << endl;
    }//for

    gettimeofday(&tp, NULL);
    long int ms1 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    cout << "End time: " << ms1 << endl;
    diff = getDifference(ms, ms1);
    cout << "Difference =  " << diff << endl;
}//selectionSort()

int Document::getDifference(int t1, int t2){
	int difference = t2 - t1;
	return difference;
}

void Document::bubbleSort(string *a, int n){
	struct timeval tp;
    gettimeofday(&tp, NULL);
    long int ms2 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    cout << "Start time: " << ms2 << endl;

	bool swapped = true;
    int j = 0;
    string tmp;
	while (swapped) {
		swapped = false;
	    j++;
	    for (int i = 0; i < n - j; i++) {
	    	if (arr[i] > arr[i + 1]) {
	    		tmp = arr[i];
	    		arr[i] = arr[i + 1];
	    		arr[i + 1] = tmp;
	    		swapped = true;
	         }//if
	     }//for
	  }//while
    for(int k = 0; k < n; k++){
    	cout << arr[k] << endl;
    }//for

    gettimeofday(&tp, NULL);
    long int ms3 = tp.tv_sec * 1000 + tp.tv_usec / 1000;
    cout << "End time: " << ms3 << endl;
    diff1 = getDifference(ms2, ms3);
    cout << "difference = " << diff1 << endl;
}//bubbleSort()



int Document::fastest(int diff, int diff1, int diff2){
	int fastest;
	if(diff > diff1){
		fastest = diff1;
	}

	if(diff1 < diff2){
		fastest = diff1;
	}

	else{
		fastest = diff2;
	}
	return fastest;
}//fastest
