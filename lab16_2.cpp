#include<iostream>
using namespace std;

//Write the definition of myString() here
void myString(char * &z, int N) {   // pointer p get copy to pointer z
	
	z = new char[N+1];	//   allocate space pointed by pointer z
	for (int i=0; i<N; i++) {
		z[i] = char('A'+i);										
	} 		
	z[N] = '\0';
	
	return;
}


/// Don't change the code below
int main(){
	char *p;	 // declare pointer p
	int N;	
	cout << "N = ";
	cin >> N;	 
	myString(p,N); // pass pointer p
	cout << p;	
	delete [] p;
	return 0;
}
