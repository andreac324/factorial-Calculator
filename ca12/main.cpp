//
//  main.cpp
//  ca12
//
//  Created by Andrea d Cazares on 9/17/24.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int factorial;
    cout<< "enter a positive number to recieve its factorial"<<endl;
    cin>>n;

    for (int i = 1; i<=n; i++){
        factorial *=i;
    }
    cout<< "factorial of number is "<<factorial<<endl;

    return 0;
}
