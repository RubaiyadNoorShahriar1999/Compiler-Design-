#include <iostream>
#define index 5

using namespace std;

int main()
{
    cout << "!! Array task !!" << endl;
    cout<< endl;

    int arr[index];

    cout<< "Enter the number list : ";
    for(int i = 0 ; i < index ; i++ )
    {
        cin>> arr[i];
    }

    int x = INT_MIN;

         //  for(int i = 0 ; i < index ; i++ )
        //    {
       //      cout<< arr[index];
      //    }

    for(int i = 0 ; i < index ; i++)
    {
        if(x < arr[i])
        {
            x = arr[i];
        }
    }

    cout<< "The largest number :  " << x << endl ;
    return 0;
}
