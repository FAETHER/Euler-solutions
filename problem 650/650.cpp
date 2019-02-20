// Example program
#include <iostream>
#include <string>

//Problem #650 
//Divisors of Binomial Product

int main()
{
    // (n,k) = n!/k!(n-k)!
    
    int k = 5; //-> our arg to the function
    int sum_of_divisors;
    int n = 1;
    int k_fact;
    int k_minus_n;
    int kn_fact = 1;
    
    for(int i = 0; i<k; i++)
    {
        //factorial calc;
        // 4n = 1*2*3*4
        for(int z = 1; z<=k; ++z)
        {
            n = n*z; 
        }
        for(int z = 1; z<=k; ++z)
        {
            if(i == 0)
            {
              k_fact = 1;
              break;
            }
            k_fact = i*z; 
            std::cout<<k_fact<<std::endl;
        }        
        k_minus_n = k-i;   
        break;
        for(int z = 1; z<=k_minus_n; ++z)
        {
            kn_fact = kn_fact*z; 
        }        
        sum_of_divisors = n/(k_fact * kn_fact);
    }
    
    std::cout<<sum_of_divisors<<std::endl;
    
}