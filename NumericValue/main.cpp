#include <iostream>

using namespace std;

bool isNumber(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] - '0' > 9 || str[i] - '0' < 0)
            return false;

    return true;
}
int main()
{
    cout << "!! Numeric Value !!" << endl;

    char str[255];

    cout<< "Enter the value : ";
    cin >> str;

    if (isNumber(str))
        cout<<"A Numeric value";
    else
        cout<<"Not a Numeric value";

    return 0;
}
