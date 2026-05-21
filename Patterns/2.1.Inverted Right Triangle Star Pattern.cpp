/*
Problem Statement
Print an inverted right triangle star pattern with leading spaces.

Example:- n=4
****
 ***
  **
   *
*/

//Code:
#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int i = 1;
    while(i <= n) {
        int spaces=1;
        while(spaces<= i-1){
            cout<<" ";
            spaces+=1;
        }
            int j =1;
        
         while(j<=n-i+1){
            cout<<"*";
            j+=1;
            }
        i+=1;
        cout<<endl;
    
    }}

/*
Approach:-

1.Take input n from the user for the number of rows.
2.Initialize row variable i = 1.
3.Run outer while loop until i <= n.
4.Initialize variable spaces = 1.
5.Run first inner loop until spaces <= i - 1 to print leading spaces.
6.Increment spaces after printing each space.
7.Initialize star variable j = 1.
8.Run second inner loop until j <= n - i + 1.
9.Print "*" in each iteration.
10.Increment j after printing each star.
11.After printing stars move to next line using cout << endl.
12.Increment i to move to next row.
13.Repeat the process until all rows are printed.
*/
//Time Complexity:- O(N²)
//Space Complexity:-O(1)
            
        
