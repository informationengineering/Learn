#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main(){
	int n = 0;
	cin >> n;
	int sum = 0;
	double time1, time2;
	clock_t start,end;
	start = clock();
	sum = (n*n)*log(n);
	end = clock();
	time1 = double(start-end)/CLOCKS_PER_SEC;
	cout << "(n*n)*log(n):" << endl;
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
