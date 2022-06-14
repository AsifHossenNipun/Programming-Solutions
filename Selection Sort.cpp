#include<bits/stdc++.h>
using namespace std;

void selection_sort(int array[], int array_size){
	for(int i = 0; i < array_size; i++){
		for(int j = i + 1; j < array_size; j++){
			if(array[i] > array[j]) swap(array[i], array[j]);
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
	selection_sort(array, array_size);
	for(int i = 0; i < array_size; i++) cout << array[i] << " ";
	cout << endl;
}