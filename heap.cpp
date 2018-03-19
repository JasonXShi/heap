#include <cstring>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>

using namespace std;

//sorting the heap
void heapify(int* stor, int input, int count){
   	//create variables
	int index, temp;
    	temp = stor[input];
    	index = 2*input;
	//check to see if theyre in order and sort them
	while(index <= count){
		if (index < count && stor[index+1] > stor[index])
           		 index = index + 1;
	        if (temp > stor[index])
        	    	break;
        	else if (temp <= stor[index])
        	{
			//swap the values
            		stor[index / 2] = stor[index];
           		 index = 2 * index;
        	}
    	}
    	stor[index/2] = temp;
    	return;
}


//takes the entire array from main and heapifies them 1 by one
void build(int* stor, int count){
	int i;
	//does this now instead of later
	for(i=count/2; i>= 1; i--){
		heapify(stor, i, count);
	}
}


int main(){
	//get input 
	char* text = new char[400];
	cout << "Enter input as file or in console? (Type 'FILE' or 'CONSOLE')" << endl;
	cin.getline(text, 50);
	int count = 0;
	int * stor = new int[105];
	if(strcmp(text, "FILE")==0){
		//gets filename
		cout << "Enter the filename: (Ex. 'text.txt')" << endl;
		char* filename = new char[50];
		cin.getline(filename, 50);
		ifstream inFile;
		inFile.open(filename);
		char* input2 = new char[400];
		int a = 0;
		int count2 = 1;
		//puts all into the storage of numbers starting from 1
		while(inFile >> a){
			stor[count2] = a;
			count2++;
			count++;
		}
	}else if(strcmp(text, "CONSOLE")==0){
		//gets input
		cout << "Enter the numbers you want to add to the heap, seperated by commas and spsaces(Ex. 1, 2, 3)";
		char* input2  = new char[400];		
		cin.getline(input2, 400);
		char* token = strtok(input2, ", ");
		int temp2 = 1;
		while(token != NULL){
			//changes it to int and puts it in the array starting from 1
			stor[temp2] = atoi(token);
			//deletes token
			token = strtok(NULL, ", ");
			temp2 ++;
			count ++;
		}
		
	}
	//build the heap
	build(stor, count);
	//print it out using math
	int a = 0;
	int c =0;	
	cout <<	"Printed tree:" << endl;
	for(int i = 0; i < count; i++){
		cout << stor[i+1] << " ";
		int b = pow(2, a);
		
		if(b == i+1-c){
			cout << endl;
			c = c + pow(2, a);
			a++;
			
		}
		
	}		
	//delete array
	delete[] stor;
}
