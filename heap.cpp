#include <cstring>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void heapify(int* stor, int input, int count){
    int index, temp;
    

}

int main(){
    int *stor = new int[105];
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
    }

}
