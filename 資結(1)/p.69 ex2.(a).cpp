#include <iostream>
using namespace std;

int main(){
	int n = 0;
	int sum = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	
	int cal = n*(n+1)/2;
	
	if(cal == sum){
		cout << "n*(n+1)/2 = " << cal << endl; 
		cout << "sum = " << sum << endl;
		cout << "True" << endl;
	}else{
		cout << "False" << endl;
	}
		
	return 0;
}
