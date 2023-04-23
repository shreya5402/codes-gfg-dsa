//Given a number and its reverse. Find that number raised to the power of its own reverse. EXAMPLE:- Input:
//N = 2
//Output: 4
//Explanation: The reverse of 2 is 2
//and after raising power of 2 by 2 
//we get 4 which gives remainder as 
//4 by dividing 1000000007.

class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
       //Your code here
       if(R==0) return 1;
       if(R==1) return N;
       if(R%2 == 0)
       {
           long long ans = power(N, R/2)%mod;
           return ((ans * ans)%mod);
       }
       else return (N*power(N,R-1)%mod)%mod;
    }

};
