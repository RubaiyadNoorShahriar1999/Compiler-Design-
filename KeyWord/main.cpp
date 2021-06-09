#include <iostream>

using namespace std;

int main()
{
    string str1[]= {"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if"
                    ,"int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"
                   };
    string str2;

    cout<< "Enter the text : ";
    cin>> str2;

    for(int i = 0 ; i < 32; i++)
    {
        if (str2.compare(str1[i])== 0)
            cout<< "Is a keyword";
        else
            cout<<"Is not a Keyword";
        break;
    }
    cout<< endl;

    main();
    return 0;
}



