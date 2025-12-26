#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int size;
	cin >> size;
	vector<int> vec;
	for(int i=0;i<size;i++)
	{
	    int val;
	    cin >> val;
	    vec.push_back(val);
	}
	for(int i=0;i<size-1;i++)
	{
	    for(int j=0;j<size-1;j++)
	    {
	        if(vec[j] > vec[j+1])
	        {
	            swap(vec[j],vec[j+1]);
	        }
	    }
	}
	for(int i=0;i<size;i++)
	{
	    cout << vec[i] << " " ;
	}
}
