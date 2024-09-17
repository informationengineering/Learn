#include <iostream>
#include <cstring> // for strcpy, strlen
#include <cstdlib> // for malloc and free
using namespace std;

int main(){
	int x, y;
	cout << "how many strings: "<< endl;
	cin >> x ;
	cout << "string length: "<< endl;
	cin >> y;
	cin.ignore(); 
	
	char** arr = (char**)malloc(x * sizeof(char*));
	for (int i = 0; i < x; ++i) {
        arr[i] = (char*)malloc(y * sizeof(char));
    }
	
	for(int i = 0; i < x; i++){
        char temp[100];  // Temporary buffer for input string (adjust size if needed)
        cin.getline(temp, 100);

        // Check if the string length is less than y
        while(strlen(temp) > y){
            cout << "enter another string again: " << endl;
            cin >> temp;
        }

        // Allocate memory for the current string
        arr[i] = (char*)malloc((strlen(temp) + 1) * sizeof(char)); // +1 for null terminator
        strcpy(arr[i], temp); // Copy the string into the allocated memory
    }
	
	//bubble sort
	for(int i = x-1; i >= 0; i--){
		for(int j = 0; j <= i-1; j++ ){
			if((int(arr[j][0])) < (int(arr[j+1][0]))){ //compare the ascii code of the first letter in the string
				char* temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout << "Sorted strings:" << endl;
	for(int i = 0; i < x; i++){
		cout << arr[i] << endl;
		free(arr[i]);
	}
	free(arr);
	return 0;
}
