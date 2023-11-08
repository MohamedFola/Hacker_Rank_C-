#include <iostream>
#include <algorithm>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
    deque<int>d;
    int i, front;

    for ( i = 0 ; i < k ; i++ )
    {
        d.push_back( arr[i] );
    }
    
    int max = *max_element(d.begin(), d.end());

	for ( int j = k ; j < n ; j++)
    {
        cout << max << " ";

        front = d.front();
        d.pop_front();
        d.push_back( arr[j] );

        if( front == max )
        {
            max = *max_element(d.begin(), d.end());
        }
        else
        {
            max = std::max(max, arr[j]);
        }
    }

    cout << max << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}