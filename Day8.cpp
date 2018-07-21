#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    string name;
    int phoneNumber;
    map<string, int> phoneBook;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++)
    {
        cin>>name;
        cin>>phoneNumber;
        phoneBook[name] = phoneNumber;
        cin.ignore();
    }
    while(true)
    {
        
        getline(cin, name);
        if(phoneBook.find(name)!=phoneBook.end()){
            cout<<name<<"="<<phoneBook.find(name)->second<<endl;
            name="";
        }
             
        else if(name == "")
            break;
        else{
            cout<<"Not found"<<endl;
            name="";
        }
            
    }
    
    return 0;
}
