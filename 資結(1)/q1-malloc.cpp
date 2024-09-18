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
        char temp[100];
        cin.getline(temp, 100); //100: the maximum num of characters to read 

        // check if string length < y
        while(strlen(temp) > y){
            cout << "enter another string again: " << endl;
            cin >> temp;
        }

        // reallocate memory
        arr[i] = (char*)malloc((strlen(temp) + 1) * sizeof(char)); // +1 for null terminator
        strcpy(arr[i], temp); 
    }
	
	//bubble sort
	for(int i = x-1; i >= 0; i--){
		for(int j = 0; j <= i-1; j++ ){
			if((int(arr[j][0])) < (int(arr[j+1][0]))){ 
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
