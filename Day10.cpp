#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> arr;
    int count =0;
    int max =0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=2; n>0;)
    {
        arr.push_back(n%2);
        n=n/2;
        
    }
    reverse(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++)
    {        
       if(arr[i]==1)
       {
           count++;
           if(count>max)
               max = count;
       }
           
        else
            count=0;
    }
    cout<< max;

    return 0;
}