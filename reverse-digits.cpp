
#include <bits/stdc++.h> 
using namespace std; 

void reversDigits(int num) 
{ 
    int r = 0; 
    while(num > 0) 
    { 
        r = num%10;
        num = num/10; 
        cout<<r;
    }  
} 

int main() 
{ 
    int num = 12345; 
    reversDigits(num); 
    
    return 0; 
} 
