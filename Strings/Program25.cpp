#include<iostream>
using namespace std;

int LengthString(char str[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet=0;

    cout<<"Enter string:"<<endl;
    cin>>Arr;

    iRet=LengthString(Arr);

    cout<<"Numbers of characters in string are:"<<iRet<<endl;

    return 0;
}