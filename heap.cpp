#include <cstring>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
void print(){

}

void heapify(int* stor, int input, int count){
   	 int index, temp;
    	temp = stor[input];
    	index = 2*input;
	while(index <= count){
		if (index < count && stor[index+1] > stor[index])
           		 index = index + 1;
	        if (temp > stor[index])
        	    	break;
        	else if (temp <= stor[index])
        	{
            		stor[index / 2] = stor[index];
           		 index = 2 * index;
        	}
    	}
    	stor[index/2] = temp;
    	return;
}



void build(int* stor, int count){
	int i;
	for(i=count/2; i>= 1; i--){
		heapify(stor, i, count);
	}
}


int main(){
    /*int *stor = new int[105];
    int count = 0;
    ifstream file;
    char* inputFile = new char*;
    file.open(inputFile);
    while(1){

        cout << "Enter the number you want to insert" << endl;
        int input = 0;
        cin >> input;
        a[count] = input;
        heapify(stor, input, count);
        count ++;

    }*/
	char* text = new char[400];
	cout << "Enter input as file or in console? (Type 'FILE' or 'CONSOLE')" << endl;
	cin.getline(text, 50);
	if(strcmp(text, "FILE")==0){

	}else if(strcmp(text, "CONSOLE")==0){
		
	}



	int count;
	int * stor = new int[105];
	build(stor, count);

}
