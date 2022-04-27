#include <bits/stdc++.h>
using namespace std;
int coun;
void ins(int arr[],int n){
    int step;
    coun++;
 for (step = 1; step < n; step++) {
        coun++;
 coun+=2;
    int key = arr[step];
    int j = step - 1;
    while (key < arr[j] && j >= 0) {
            coun+=3;
      arr[j + 1] = arr[j];
      --j;
    }
    coun++;
    arr[j + 1] = key;
  }
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
	ins(arr, n);

	cout<<"count: "<<coun;
	return 0;
}

