#include<iostream> 
using namespace std; 
  
void printRectangle(int h, int w) 
{ 
    for (int i=0; i<h; i++) 
    { 
        cout << "\n"; 
        for (int j=0; j<w; j++) 
        { 
            if (i == 0 || i == h-1 ||  j== 0 || j == w-1) 
               cout << "@"; 
            else
               cout << " "; 
        } 
    } 
} 

int main() 
{   
    int h,w;
    cin>>h>>w;
    printRectangle(h, w);  
    return 0; 
} 