#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int size;
	cin >> size;
	vector<int> vec;
	int maxi = 0;
	for(int i=0;i<size;i++)
	{
	    int value;
	    cin >> value;
	    vec.push_back(value);
	    maxi=max(maxi,value);
	    //freq[value]++;
	}
	vector<int> freq(maxi+1,0);
	for(int i=0;i<size;i++)
	{
	    freq[vec[i]]++;
	}
	int pos=0;
	for(int i=0;i<freq.size();i++)
	{
	    while(freq[i]-- > 0)
	    {
	        vec[pos]=i;
	        pos++;
	    }
	}
	for(int i=0;i<size;i++)
	cout << vec[i] << " ";
	

}
