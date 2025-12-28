//maryam naeem
//2024-csre-010
//Lab-1 task-3
#include <iostream>   // For input/output
using namespace std;

int main() {
	char* names[] = {"Ali","Sara","Azeem","Noor","Hamza"};
	//array of pointers to string literals 
	int n=sizeof (names)/sizeof(names[0]); //find how many names are in the array
	for (int i=0;i<n;i++) //loop to print each name in array
	cout<<"Names:["<< i <<"] -> "<<names[i] <<endl; 
	char* replacement="Fatima"; //change the third element to (Azeeem) to point to fatima
	names[2]=replacement;
	cout<<"After change,name[2] ->" <<names[2]<<endl;
	return 0;
}