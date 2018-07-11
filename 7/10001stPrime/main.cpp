#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool isPrime(int numb){

    //if(numb % 2 == 0){cout << "Number is NOT prime " << endl; return false;}
    //else    {
          for(int i = 2; i < numb; i++){
                if(numb % i == 0){
                    //cout << "Number is NOT prime " << endl;
                    return false;}
          }
               return true;

    //}
}



int main()
{
    std::vector<int> primeVec;
    std::vector<int>::const_iterator it;

    int count = 2;

    bool isPrime(int);

    do{
        if(isPrime(count)) {primeVec.push_back(count);}
        ++count  ;

    }while (primeVec.size()!= 10001);

    cout << "Hello World!" << endl;
    cout << "Size of vector:" << primeVec.size() << endl;

    /*for ( it = primeVec.begin(); it != primeVec.end(); ++it)
        std::cout << *it << ' ';*/

    cout << "10001st prime number is :" << primeVec.back() << endl;


    return 0;
}
