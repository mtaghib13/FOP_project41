
#include<iostream>
using namespace std;
void hanoi(int n,string s,string komak,string m) {
    if (n==1) {
        cout<<"move disk 1 from "<<s<<" to " <<m<<endl;
        return;
    }
    hanoi(n-1,s,m,komak);
    cout<<"move disk "<<n<<" from "<<s<<" to " <<m<<endl;
    hanoi(n-1,komak,s,m);
}
int main() {
    int n;
    string s,komak,m;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    getline(cin,komak);
    getline(cin,m);
    hanoi(n,s,komak,m);
    return 0;
    // hello bakhtiarvand
}



























































































































