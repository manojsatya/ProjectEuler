#include <iostream>
#include <cstdlib>
#include <vector>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    long long int number = 600851475143,quotient;
    //div_t divresult;
    std::vector<long long int> myvec;
    //divresult = div(38,5);

    while(number % 2 ==0){
        number = number/2;
        cout << "Number of times !" << number << endl;
        //myvec.push_back(number);
    }

    for (int i =3; i <= sqrt(number);i = i+2){

        while (number % i == 0){
            number = number / i ;
            cout << "Inside loop !" << number << endl;
            myvec.push_back(number);
        }

    }




    cout << "Vector Size !" << myvec.size() << endl;
    return 0;
}
