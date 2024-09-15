#include <iostream>
#include <string>
using namespace std;

int main(){
	int x;
	int longest = 0;
	cout << "how much names: "<< endl;
	cin >> x;
	cin.ignore(); 

	string *arr = new string[x]; 
	for(int i = 0; i < x; i++){
		getline(cin, arr[i]);
	}
	
	int *num = new int[x];
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < arr[i].length(); j++){
			if(arr[i][j] == ' '){
				//find the longest last name
				if(longest < j){
					longest = j;
				}
				//store the length of every last name
				num[i] = j;
				break;
			}
		}
	}
	
	
	cout << "Aligned by space:" << endl;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < longest - num[i]; j++){ // fill in spaces before the last name appears
			cout << " ";
		}
		cout << arr[i] << endl;
	}
	delete []arr;
	delete []num;
	return 0;
}
