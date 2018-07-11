#include <iostream>

using namespace std;

bool isPrime(long long numb){

    //if(numb % 2 == 0){cout << "Number is NOT prime " << endl; return false;}
    //else    {
          for(long long  i = 2; i < numb; i++){
                if(numb % i == 0){
                    //cout << "Number is NOT prime " << endl;
                    return false;}
          }
               return true;

    //}
}


int main()
{

    long long total = 0, maxCount = 2000000,i = 2;



    bool isPrime(long long);

    /*for(int i = 1; i < maxCount; i+2){
         if(isPrime(i)){
            total = total + i;
         }

    }*/

    do{
            if(isPrime(i)) {total = total + i;}
            ++i  ;

        }while (i < maxCount);


    cout << "Hello World!" << endl;
    cout << "Total is : " << total << endl;
    //1179908154
    return 0;
}
