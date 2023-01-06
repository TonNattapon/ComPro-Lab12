#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int n;
    string grade[9] = {"A","B+","B","C+","C","D+","D","F","W"},input;
    cout << "Press Enter 3 times to reveal your future.";
    srand(time(0));
    n = rand() % 9;
    getline(cin,input);
    getline(cin,input);
    getline(cin,input);
    cout << "You will get " << grade[n] << " in this 261102.";
}