//
// Created by Trung on 2/22/2024.
//
#include "all.h"
using namespace std;
int NumberOfNegative = 0;
int NumberOfPositive = 0;
int NumberOfZero = 0;
void inp(int &NumberOfElement ,int  array[])
{
    cin>>NumberOfElement;

    for (int i = 0 ; i < NumberOfElement ;  i++)
    {
        cin>> array[i];

            if (array[i]< 0) {
                NumberOfNegative++;
            }
            if (array[i]>0){
                NumberOfPositive++;
            }
            if(array[i]==0){
                NumberOfZero++;
            }

    }

}
void Plusminus(
    float &DivByNegative,
    float &DivByPositve,
    float &DivByZero,
    int NumberOfElement)
{
    DivByNegative = static_cast<float>(NumberOfNegative) / NumberOfElement;
    DivByPositve=static_cast<float>(NumberOfPositive)/NumberOfElement;
    DivByZero=static_cast<float>(NumberOfZero) / NumberOfElement;
}
void Output(float DivByPositive, float DivByNegative, float DivByZero)
{
cout<<fixed<<setprecision(6)<<DivByPositive;
    cout<<fixed<<setprecision(6)<<DivByNegative;
    cout<<fixed<<setprecision(6)<<DivByZero;
}
int main()
        {
    int const N= 101;
    int array[N];
    int NumberOfElement;
    float DivByNegative;
    float DivByPositve;
    float DivByZero;
            inp(NumberOfElement, array);
            Plusminus(DivByNegative,DivByPositve,DivByZero,NumberOfElement);
            Output(DivByPositve,DivByNegative,DivByZero);



        }