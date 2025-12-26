#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int size;
	cin >> size;
	vector<int> vec;
	int min_idx=0;
	for(int i=0;i<size;i++)
	{
	    int val;
	    cin >> val;
	    vec.push_back(val);
	}
	for(int i=0;i<size-1;i++)
	{
	    min_idx=i;
	    for(int j=i+1;j<size;j++)
	    {
	        if(vec[j]<vec[min_idx])
	        min_idx = j;
	    }
	    swap(vec[i],vec[min_idx]);
	}
	for(int i=0;i<size;i++)
	cout << vec[i] << " ";

}
