#include <cstring>
#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    while(1){
        cout << "Enter the number you want to insert" << endl;
        int input = 0;
        cin >> input;
        heapify(input);
    }

}
