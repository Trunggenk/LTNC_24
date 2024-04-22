//
// Created by trung on 4/16/2024.
//

#include <iostream>
#include <math.h>
using namespace std;

int powerSum(int X, int N)
{
int temp= pow(X, (float)1/(float)N)+1;
int sum=0;
int dem = 0 ;
for(int i1 =1; i1 <=temp ; i1++)
{
    sum+=pow(i1,N);
    if(sum==N) dem++;
    {
        for (int i2 = i1 + 1; i2 <= temp; i2++) {
            sum += pow(i2, N);
            if (sum == N) dem++;
            if(sum<X)
                for (int i3 = i2 + 1; i3 <= temp; i3++) {
                sum += pow(i3, N);
                if (sum == N) dem++;
                    if(sum<X)

                        for (int i4 = i3 + 1; i4 <= temp; i4++) {
                    sum += pow(i4, N);
                    if (sum == N) dem++;
                            if(sum<X)

                                for (int i5 = i4 + 1; i5 <= temp; i5++) {
                        sum += pow(i5, N);
                        if (sum == N) dem++;
                                    if(sum<X)

                                        for (int i6 = i5 + 1; i6 <= temp; i6++) {
                            sum += pow(i6, N);
                            if (sum == N) dem++;
                                            if(sum<X)

                                                for (int i7 = i6 + 1; i7 <= temp; i7++) {
                                sum += pow(i7, N);
                                if (sum == N) dem++;
                                                    if(sum<X)

                                                        for (int i8 = i7 + 1; i8 <= temp; i8++) {
                                    sum += pow(i8, N);
                                    if (sum == N) dem++;
                                                            if(sum<X)

                                                                for (int i9 = i8 + 1; i9 <= temp; i9++) {
                                        sum += pow(i9, N);
                                        if (sum == N) dem++;
                                    }
                                }
                            }
                        }
                    }
                }

            }
        }
    }

}
}




int main()
{
cout<< powerSum(100,2);
}