#include <iostream>

using namespace std;

int sumOfsquares(int maxNumber){
        int total = 0;
        for(int i = 1; i<=maxNumber;i++){
            total = total + (i *i);
            }
        return total;
        }

int squareOfsum(int maxNumber){
        int total = 0;
        for(int i = 1; i<=maxNumber;i++){
            total = total + i;
            }
        total = total * total;
        return total;

}

int difference(int squareOfsum_ , int sumOfsquares_){

    return squareOfsum_ - sumOfsquares_;
}

int main(int argc, char *argv[])
{
    int maxNumber = 100;

    int sumOfsquares_ = sumOfsquares(maxNumber);
    int squareOfsum_ = squareOfsum(maxNumber);
    int difference_ = difference(squareOfsum_ , sumOfsquares_);



    cout << "Sum of squares :"<< sumOfsquares_ << endl;
    cout << "Square of sum :"<< squareOfsum_ << endl;
    cout << "Difference is :"<< difference_ << endl;

    return 0;
}
