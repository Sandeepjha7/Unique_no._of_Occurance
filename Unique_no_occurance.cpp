#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,3,1,1};
    int count1=0, count2=0, count3=0;
    for(int i=0; i<6;i++)
    {
        if (arr[i]==1)
         count1 = count1+1;
        else if(arr[i]==2)
         count2 = count2+1;
        else if(arr[i]==3)
         count3 = count3+1;
    }
    if(count1 == count2 || count2 == count3 || count3 == count1)
      cout<<"FALSE";
    else
      cout<<"TRUE";

    return 0;
}