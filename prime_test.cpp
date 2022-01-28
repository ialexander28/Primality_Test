#include <iostream>

bool isPrime(int num) {

    int countDivs; 
    countDivs = 0; 
    for(int i=1; i <= num; i++){
        if(num % i == 0)
            countDivs++;
    }
    if(countDivs == 2) 
        return true; 
    else
        return false; 
}

int main()
{ 
    int num;   
    std::cout << "Enter a number " << '\n'; 

    std::cin >> num;

    isPrime(num);

    if(isPrime(num) == true)
        std::cout << "The number is Prime! " << '\n';
    else
        std::cout << "The number is NOT Prime! " << '\n';

    std::cout << '\n'; 

    return 0; 
}