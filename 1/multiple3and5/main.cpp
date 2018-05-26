#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sum =0;

    for(int i=1;i<1000;++i){
        //cout << "The number is :" << i << endl;
        if (i % 3 == 0 || i % 5 == 0 ) {
            sum = sum + i;
        }
       }
    //cout << "Hello World!" << endl;
    cout << "The sum is :" << sum << endl;
    return 0;
}
