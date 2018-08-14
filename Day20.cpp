#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int& n, int& m)
{
    int tmp;
    tmp = m;
    m = n;
    n = tmp;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int> arr;
    int n,m;
    int numberOfSwap=0;
    
    cin>> n;
    for(int i=0; i<n; ++i)
    {
        cin>>m;
        arr.push_back(m);
    }
    
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n-1; ++j)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                numberOfSwap++;                
            }
        }
        if(numberOfSwap==0)
            break;
    }
    
    cout<<"Array is sorted in "<<numberOfSwap<<" swaps."<<endl;
    cout<<"First Element: "<<arr[0]<<endl;
    cout<<"Last Element: "<<arr[n-1]<<endl;
    
    return 0;
}
