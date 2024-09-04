#include<bits/stdc++.h>
using namespace std;

class student{
    private:
    string name;
    int roll_no;
    int mobile_number;
    string branch;
    public:
    void setname(string s){
        name=s;
    }
     void setroll(int a){
        roll_no=a;
    }
     void setmobile(int b){
        mobile_number=b;
    }

};
int main(){
    student s1;
    s1.name="ayush";
    s1.roll_no="2115409";
    s1.mobile_number="9919898087";
    cout<<s1.name;
}