

// * * * * *
//  * * * *
//   * * *
//    * *
//     *


#include<iostream>
using namespace std;

void Display(int iNo)
{
    for(int i=iNo;i>0;i--)
    {
        for(int j=1;j<=iNo-i;j++)
        {
            cout<<" ";
        }

        for(int k=1;k<=i;k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number:"<<endl;
    cin>>iValue;

    Display(iValue);

    return 0;
}