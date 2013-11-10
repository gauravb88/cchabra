#include <iostream> 
#include<conio.h>
using namespace std;


 int main() 
 {   int c;
 
   char FirstName1[15] = "aadar";
char FirstName2[15] = "radar";
      
      strrev(FirstName2);
      cout<<FirstName2;
      
    if(strcmp(FirstName1,FirstName2) == 0)
    {
   cout<<"\nstring matches";
    }
    else
    cout<<"\nNOT";
  
        getch();
        return 0;
}
