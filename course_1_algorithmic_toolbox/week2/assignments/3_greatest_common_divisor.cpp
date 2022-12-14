#include<iostream>
#include<bits/stdc++.h>

//with a mechanical solution, a becomes b, and b becomes the remainder
//then, gcd(a, b) = gcd(b, a%b) 
//once the remainder is 0, a is the GCD 

int gcd(int a, int b){

    if (b == 0){
        return a;
    }
    
    return gcd(b, a%b); 
}

using namespace std; 

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 0;

    //cout << "Enter a : " ;
    cin >> a; 
    //cout << "Enter b : " ;
    cin >> b; 

    //cout << "GCD is " << gcd(a, b) << endl; 
	cout << gcd(a, b); 

    return 0;
}
