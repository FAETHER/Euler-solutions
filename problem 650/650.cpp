// Example program
#include <iostream>
#include <string>

int main()
{
     // (n,k) = n!/k!(n-k)!
    
    int k = 5; //-> our arg to the function
    int sum_of_divisors;
    int n = 1;
    int k_minus_n;
    int kn_fact = 1;
    
    int k_fact[k];
    for(int z = 1; z<=k; ++z)
    {
        n = n*z; 
        k_fact[z-1] = n;
    }
   // std::cout<<n<<std::endl;
    
    for(int i = 1; i<=k; i++)
    {
        k_minus_n = k-i;   
        for(int z = 1; z<=k_minus_n; ++z)
        {
            kn_fact = kn_fact*z; 
        }
        std::cout<<kn_fact<<std::endl;
        sum_of_divisors = n/(k_fact[i-1] * kn_fact);
        //std::cout<<sum_of_divisors<<std::endl;
    }

}