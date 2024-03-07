//
// Created by Trung on 3/1/2024.
//
#include "../all.h";
bool isPalindromeIndex(string s)
{
    int stringLength=s.length();
    int left=0;
    int right=stringLength-1;

    while(left<=right)
    {
        if(s[left]!=s[right]) return 0;
        else
        {
            left++;
            right--;
        }
    }
    return 1;

}
// hỏi thầy tại sao s.erase lại bị xoá string có trong s.
int palindromeIndex(string s)
{
    int stringLength=s.length();

    if(isPalindromeIndex(s)==true) return -1;
    else{
        for(int i =0; i< stringLength; i++)
        {
            string strCopy=s;
            string stemp= strCopy.erase(i,1);
            if(isPalindromeIndex(stemp)==1) return i;
        }
    }
    return 0;
}
int main()
{
    string s;
    cin >>s;
    cout<<palindromeIndex(s);


}