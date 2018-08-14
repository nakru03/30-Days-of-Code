#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>

//Write your code here
class Calculator
{
    public:
    Calculator(){};
    
    int power(int n, int p)
    {
        int res;
        if(n<0||p<0)
            throw out_of_range("n and p should be non-negative");
            
        res = pow(n,p);
        
        return res;
            
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}	