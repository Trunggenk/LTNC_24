//
// Created by trung on 4/8/2024.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct  Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
  //  Student(int age_ ; string first_name_ ; string last_name_ ; int standard_)
    //    {
    //        age = age_;
    //        first_name = first_name_;
    //        last_name = last_name_;
    //        standard = standard_;
    //    }
};

int main() {

    Student student;
    cin>>student.age>>student.first_name>>student.last_name>>student.standard;
    cout<<student.age<<" "<<student.first_name<<" "<<student.last_name<<" "<<student.standard;
    return 0;
}
