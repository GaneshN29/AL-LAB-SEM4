
#include <bits/stdc++.h>
using namespace std;
int coun;
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
	coun+=3;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	coun+=2;
	for (i = 0; i < n-1; i++){
	coun++;
	for (j = 0; j < n-i-1; j++){
	coun++;
	coun++;
		if (arr[j] > arr[j+1]){
			swap(&arr[j], &arr[j+1]);}
}}
	int k;
	coun++;
	for (k = 0; k < n; k++){
	coun++;
		cout << arr[k] << " ";}
	cout << endl;
}

int main()
{
coun=0;
int n;
cin>>n;
	int arr[n];
	for(int i=0; i<n;i++)
        cin>>arr[i];
	cout<<"Sorted array: \n";
	bubbleSort(arr, n);

	cout<<"count: "<<coun;
	return 0;
}

