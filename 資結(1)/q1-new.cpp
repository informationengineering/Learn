#include <iostream>
#include <string>
using namespace std;

int main(){ 
	int x, y;
	cout << "how many strings: "<< endl;
	cin >> x ;
	cout << "string length: "<< endl;
	cin >> y;

	string *arr = new string[x]; 
	for(int i = 0; i < x; i++){
		string temp;
		cin >> temp;
		//check if the string length is less than y
		while(temp.length() > y){
			cout << "enter another string again:" << endl;
			cin >> temp;
		}
		arr[i] = temp;
		//test if the string is correctly being stored
		//cout << arr[i] << endl;
	}
	
	//bubble sort
	for(int i = x-1; i >= 0; i--){
		for(int j = 0; j <= i-1; j++ ){
			if((int(arr[j][0])) < (int(arr[j+1][0]))){ //compare the ascii code of the first letter in the string
				string temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	//output the result after bubble sort
	cout << "Sorted strings:" << endl;
	for(int i = 0; i < x; i++){
		cout << arr[i] << endl;
	}
	delete []arr;
	return 0;		
}


