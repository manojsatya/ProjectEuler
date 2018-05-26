#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int countNew = 1,countOld=0,count= 0,sum=0;

    for(int i=1;i<=40;i++){


        count = countNew + countOld;
        countOld = countNew;
        countNew = count;

        if(count < 4000000 && count % 2 == 0){
            sum = sum + count;
        }
        //cout << "Fibonacci Sequence!"<< count  << endl;
    }
    cout << "SUM is!"<< sum  << endl;
    //cout << "Hello World!" << endl;
    return 0;
}
