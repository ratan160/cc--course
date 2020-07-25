#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if ((age<18)&&(age>0)){
    cout<<"you can not come to my party"<<endl;
    }
    else if (age=18){
        cout<<"you are kid and you will get pass to the party"<<endl;
    }
    else if (age<1){
        cout<<"you are not yet born"<<endl;
    }
    else {
        cout<<"you can come to the party"<<endl;
    }
    return 0;
}
