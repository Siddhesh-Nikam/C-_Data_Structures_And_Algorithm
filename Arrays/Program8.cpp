//Count of odd numbers

#include<iostream>
using namespace std;

int CountOdd(int*Brr,int iSize)
{
    int iSum = 0 , iCounter = 0 ;
    
    for(int iCnt = 0 ;iCnt<iSize ;iCnt++)
    {
        if((Brr[iCnt]%2)!=0)
        {
            iCounter++;
        }   
    }
    return iCounter;
}

int main()
{
    int*Arr=NULL;
    int iLength = 0 ,iCnt = 0 , iRet = 0;

    cout<<"Enter the number of elements"<<endl;
    cin>>iLength;

    Arr = new int;

    cout<<"Enter numbers:"<<endl;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        cin>>Arr[iCnt];
    }

    iRet = CountOdd(Arr,iLength);

    cout<<"Count of odd digits is:"<<iRet<<endl;

    return 0;
}