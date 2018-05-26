#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getPalindrome(int number){

    int digit,reverse = 0;
    do{
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number /10;
    } while(number != 0);

    return reverse;
}

bool checkPalindrome(int init,int reverseNumb){

    if (init == reverseNumb){
        //cout << "Its a Palindrome" << endl;
        return true;
    } else {//cout << "Its NOT a Palindrome" << endl;
            return false;}
}


int main()
{

    int init,reverseNumb;

    std::vector<int> myVec;
    std::vector<int>::iterator max;

    for(int i = 100; i <= 999 ;i++)
        for(int j = 100; j <= 999 ;j++){
            init = i * j;
            reverseNumb = getPalindrome(init);
            if(checkPalindrome(init,reverseNumb)){
                 myVec.push_back(init);
            }
        }

    max = max_element(myVec.begin(),myVec.end());
    cout << "Vector size is :" <<myVec.size() <<  endl;
    cout << "Largest Palindrome is :" << *max <<  endl;

    return 0;
}
