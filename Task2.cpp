//maryam naeem
//2024-csre-010
//Lab-1 task-2
#include <iostream>   // For input/output
using namespace std;

int main() {
	int a = 20; // CREATRE VARIABLE A WITH VALUE 20
	int *p =&a;//POINTER P STORES THE ADDRESS OF A
	cout<<"a Before:"<<a<<endl; //prints 20
	*p=*p+5; //deference p changes a's value to 25
	cout<<"a After:"<<a<<endl; //prints 25
	return 0;
}