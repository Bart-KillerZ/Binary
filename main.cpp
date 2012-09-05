#include<iostream>

int main()
{
    std::cout << "Exercise 1.2" << std::endl
              << "Enter decimal system to convert to binary representation:" << std::endl;
              
    double a = 1.0; //a = input
    double b = 1.0; //b = 2^x
    double c = 1.0; //c = number holding check value
    bool start = false;
    
    std::cin >> a;
    
    
    for (int num = 32; num >= 0; --num)
    {
        b = 1.0;
        for (int pow  = 0; pow < num; ++pow)
        {
                b *= 2;
        }

           c = a - b;
           if (c >= 0)
           {
               std::cout << "1";
               a = c;
               start = true;
              
           }
           else
           {
               if (start == true)
               std::cout << "0";
           }
    }
    
    
    if (a != 0)
    {
        std::cout << ".";
        for (int num = 1; num <= 32; ++num)
        {
        b = 1.0;
        for (int pow  = 0; pow < num; ++pow)
        {
                b *= 2;
        }

           c = a - 1/b;
           if (c >= 0)
           {
               std::cout << "1";
               a = c;
              
           }
           else
           {
               std::cout << "0";
             
           }
           if (a == 0)
               break;
    }
        
        
        
    }
    std::cout << std::endl << "Value remaining = " << a << std::endl;
    return 0;
}

