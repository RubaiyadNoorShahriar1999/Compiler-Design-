#include <iostream>

using namespace std;

int main()
{

    string equation;

    cout<< "Enter the Equation:  ";
    cin >> equation;

    for (int i = 0; i <= (equation.size()-1); i++)
    {
        while(equation[i] != NULL)
        {
            if(equation[i]== '+' || equation[i]== '-'|| equation[i]== '*' || equation[i]== '/')
                {
                    cout<< "The Operator in index "<< i <<" is :" << equation[i]<< endl;
                }
                break;
        }

    }

    return 0;
}
