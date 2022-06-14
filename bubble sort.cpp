#include<bits/stdc++.h>
using namespace std;

void buble_sort(int array[], int array_size){
	for(int i = 0; i < array_size; i++){
		for(int j = 0; j < array_size-i-1; j++){
			if(array[j] > array[j+1]) swap(array[j], array[j+1]);
		}
	}
}

int main(){
	freopen("C:/Users/HP/Desktop/DSA/input.txt","r", stdin);
    freopen("C:/Users/HP/Desktop/DSA/output.txt", "w", stdout);


	int array_size; 
	cin >> array_size;
	int array[array_size];
	for(int i = 0; i < array_size; i++) cin >> array[i];
	buble_sort(array, array_size);
	for(int i = 0; i < array_size; i++) cout << array[i] << " ";
	cout << endl;
}