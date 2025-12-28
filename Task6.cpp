//maryam naeem
//2024-csre-010
//Lab-1 task-6
#include <iostream>   // For input/output
using namespace std;


	void leaky() {
		int *data=new int[100]; //allocate memory
		//forgot to free memory -> leak
	}
	void fixed() {
		int *data=new int [100];//allocate memory
		delete[] data;
		//free memory
	}
	int main () {
		
	for (int i=0;i<10000;i++)
	{
		leaky();
	}
	cout<<"Leaky loop done (memory wasted)"<<endl;
	// call fixed function manytimes -> memory properly freed
		for (int i=0;i<10000;i++)
	{
		fixed();
	}
	cout<<"Fixed loop done (no leaks)"<<endl;
	return 0;
}