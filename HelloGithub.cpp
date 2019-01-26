// CPP program 
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{ 
    string line, response;
	cout << "Hello Github!" << endl;
    ifstream file_squestns;
    file_squestns.open("StudentQuestions.txt");
    ofstream file_sanswers;
    file_sanswers.open("StudentAnswers.txt");
    while (getline(file_squestns, line))
    { 
        cout << line << " ";
        cin >> response;
		file_sanswers << response << endl;
    }
    cout << "Goodbye Github!" <<endl;
    return 0; 
} 
