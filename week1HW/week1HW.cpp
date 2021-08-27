// week1HW.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
   cout << "Bit: A single bianary value, the base of all computing information and storage."<<endl;
   cout << "Byte: stores 8 bits, 2^8=256 possible values per bit; used to store number and letter values, as well as basic functions." << endl;
   cout << "ex. '3' is stored as '00110011.'" << endl;
   cout << "1 Kilobyte= 2^10 bytes" << endl;
   cout << "1 Megabyte= 2^20 bytes= 2^10 KB" << endl;
   cout << "1 Gigabyte= 2^30 bytes= 2^10 MB" << endl;
   cout << "1 Terabyte= 2^40 bytes= 2^10 GB" << endl;  
}

/*
convert hex to base 10 algorithmically______________
1).Begin from the right digit
2).Rase 16 to the nth power
3).Multiply by the base 10 corrosponding value for the digit.
4).Add value to total base 10 value
5).Increase n and repeat 1-4 until completed for left most digit.


convert binary to base 10 algorithmically______________
1).int n= 0;
2).Begin from the right digit
3).2^n * the (n+1)th digit (where the 1st is the rightmost digit)
4).Add value to total base 10 value
5).Increase n and repeat 3&4 until completed for left most digit.

convert base 10 to binary algorithmically______________
1). int n=0;
2). int value= the base 10 number
3). while( 2^n < value){n++}
4). while(n>=0){
5).    n-=1;
5).    if(2^n<value){
6).       add a "1" digit to the right side of the binary value
7).       value-=2^n; }
8).    else{  add a "0" digit to the right side of the binary value }
    }
9). output binary value

convert base 10 to hex algorithmically______________
1). int n=0;
2). int value= the base 10 number
3). while( 16^n < value){n++}
4). while(n>=0){
5).    n-=1;
6).
7).
8).
    }
9). output binary value
*/