#include <iostream>

bool isPrime(int num) {

    int countDivs; 
    countDivs = 0; 
    for(int i=1; i <= num/2; i++){  //num is divided by 2 to become num/2, which reduces the need to determine the amount of 'countDivs' to 1 unit
        if(num % i == 0)
            countDivs++;
    }
    if(countDivs == 1)              // countDivs id changed from 'countDivs = 2' to 'countDivs = 1' as a result of calculating int i for num/2 above. this becomes a more simplified methodology.
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