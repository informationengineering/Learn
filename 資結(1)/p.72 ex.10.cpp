#include <iostream>
#include <ctime>
#include <cstdlib> //random lib
using namespace std;

void Binarysearch(){
	
}

int main(){
	int n;
	cin >> n;
	
	int **arr = new int*[100];
	int **origin = new int*[100];
	
	// make random numbers different
	srand(time(NULL));

	for(int i = 0; i < 100; i++){
		int check = 0;
		
		//check if any num is repeated
		int temp = rand()%(100-0+1);
		if(i == 0){
			arr[i] = temp;
			origin[i] = temp;
		}else{
			origin[i] = temp;
			for(int i = 0; i < sizeof(origin)/sizeof(int); i++){
				if(temp == origin[i]){
					check = 1;
					break;
				}
			}
		}
		
	}

	clock_t start,end;
	start = clock();
	Binarysearch();
	end = clock();
	
	




	//rand()%(R-L+1)+L
	//ex. rand()%41 => (產生0到40之間的數字) 41 = 100-60+1 = 60到100的個數
	

	for (int i = 0; i < 100; ++i) {
    	delete arr[i];
  	}
  	delete[] arr;
	return 0;
}
