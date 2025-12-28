//maryam naeem
//2024-csre-010
//Lab-1 task-4
#include <iostream>   // For input/output
using namespace std;

int main() {
	int n;
	cout<<"How many scores?"<<endl; // ask usre for number of scores 
	cin>>n; //input n from keyboard
	int*scores=new int [n]; //create an array of integers at runtime using new
	cout<<"Enter "<<n<<"scores"<<endl; // Input the scores
	for(int i=0;i<n;i++) {
		cin>>scores[i]; //store each score in the array
	}
    double sum =0;
	for (int i=0;i<n;i++)
	{
		sum+=scores[i];
	}
	//free the memory 
	cout<<"Average="<<sum/n<<endl;
	delete [] scores;//free array
	scores=nullptr;//set pointer to null for safety
	return 0;
}
	