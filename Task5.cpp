//maryam naeem
//2024-csre-010
//Lab-1 task-5
#include <iostream>   // For input/output
using namespace std;

int main() {
	int *p=new int(50); //dynamically allocated memory for one int set value = 50
	cout<<"*p before delete:"<<*p<<endl; //print 50
	delete p; //free the memory 
	p =nullptr; //important set pointer to null so its not dangling
	cout<<"pointer safely set to nullptr After delete"<<endl;
	return 0;
}