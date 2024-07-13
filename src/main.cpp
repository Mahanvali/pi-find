//  Project for find the Nth digit of pi

#include <iostream>
#include <iomanip>  //  Header providing parametric manipulators used for "setprecision"
using namespace std;
int main(){
    //  First define pi, using double instead of float for larger numbers
    double pi = 3.14159265358979323846264338327950288419716;
    //  The digit we want to find
    int NthDigit;
    cout<<"Input the digit of PI you would like to find (max of 40): ";
    //  Take input
    cin>>NthDigit;
    //  Return output
    cout<<setprecision(NthDigit)<<pi<<endl;
    return 0;
}