#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int array[], int array_size){
	for(int i = 0; i < array_size; i++){
		int x = array[i];
		int j = i - 1;
		while(j >= 0 and array[j] > x){
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = x;

	}
}

int main(){
	freopen("C:/Users/HP/Desktop/DSA/input.txt","r", stdin);
    freopen("C:/Users/HP/Desktop/DSA/output.txt", "w", stdout);


	int array_size; 
	cin >> array_size;
	int array[array_size];
	for(int i = 0; i < array_size; i++) cin >> array[i];
	insertion_sort(array, array_size);
	for(int i = 0; i < array_size; i++) cout << array[i] << " ";
	cout << endl;
}