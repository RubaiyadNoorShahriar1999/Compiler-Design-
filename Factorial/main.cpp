#include <iostream>

using namespace std;

int main()
{
    cout << "!! Finding Factorial !!" << endl;
    cout<< endl;

    int number , factorial = 1;
    cout<< "Enter a positive integer number :   ";
    cin>> number;

    if(number > 0)
    {
        for(int i= 1 ; i <= number ; ++i)
        {
            factorial = factorial * i ;

        }
        cout<< factorial;
    }
    else
    {
        cout<< "Error!! Not a positive integer!";
    }
    return 0;
}
