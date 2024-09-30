#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int sum = 0;
	double time1, time2;
	clock_t start,end;
	start = clock();
	sum = 5*(n*n)-(6*n);
	end = clock();
	time1 = double(start-end)/CLOCKS_PER_SEC;
	cout << "5*(n*n)-(6*n):" << endl;
	cout << start << " (ms) / " << end << " (ms)"<< endl;
	
	sum = 0;
	start = clock();
	sum = n*n;
	end = clock();
	time2 = double(start-end)/CLOCKS_PER_SEC;
	cout << "n*n:" << endl;
	cout << start << " (ms) / " << end << " (ms)"<< endl;
	
	cout << "time1 : " << time1 << " ; time2 : " << time2 << endl;
	
	return 0;
}
