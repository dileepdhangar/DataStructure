// #include<iostream>
// using namespace std ;
// int main(){

//     int arr[] = {1,3,5,7,9} ;
//     //printing all value
//     for ( int i=0;i<5;i++){
//         cout<< arr[i] << " " ;
//     }
//     return 0 ;
// }

/*
#include <iostream>
using namespace std;

int main()
{
    cout<<"enter the input value " << endl;
    //static array
    int arr[10] ;
    for ( int i=0; i<10; i++){
        cin>> arr[i] ;
    }
  cout << "priniting the array " << endl ;

  for( int i=0; i<10; i++){
    cout <<arr[i] <<" " ;
  }
return 0;
}
*/

/*

#include <iostream>
using namespace std;

int main()
{
  cout << " entr the value of n " << endl ;
int n  ;
cin>> n;

// dynamic array thsi is bad practice
// bad practice
int arr[n] ;

cout<<"enter the input value " << endl;
for ( int i=0;i<n;i++){
    cin>> arr[i] ;
}

 cout << "priniting the array " << endl ;

  for( int i=0; i<10; i++){
    cout <<arr[i] <<" " ;
  }
return 0;
}


*/

// Question take 5 element in i/p in array and print their double

/*
#include <iostream>
using namespace std;

int main()
{

int arr[4] ;

cout<<"enter the input value " << endl;
for ( int i=0;i<4;i++){
    cin>> arr[i] ;
}



 cout << "priniting the array " << endl ;

  for( int i=0; i<5; i++){
    cout <<arr[i]*2 <<" " ;
  }

return 0;
}
*/

// update the array value
/*

#include <iostream>
using namespace std;

int main()
{
int arr[4]  = {1,2,3,4} ;
cout << "updating the array " << endl ;

  for( int i=0; i<4; i++){
    arr[i] = 1;
  }
cout << "printing the array " << endl ;
   for( int i=0; i<4; i++){
     cout << arr[i] << " " ;
  }

return 0;
}

*/

// memset funcion krta kya hhai  ??
/*

#include <iostream>
#include <cstring>
using namespace std;

int main()
{

int arr[10]  ;
memset(arr ,2 , sizeof(arr)) ;

cout << "using memset functionn set all valu to 0" << endl ;
cout <<" printing the array " << endl ;
for ( int i =0;i<10;i++){
    cout << arr[i] << " " ;
}

return 0;
}

*/

// array and function

/*

#include <iostream>
using namespace std;

void inc(int a){ // pass by value copy create hoti hai !!
   a++ ;
   cout << a;
}

int main()

{

int a =16 ;
inc(a) ;
cout << endl ;
cout << a ;
return 0;
}
*/
// ab baat krte hai array ke under

// pass by value

/*
#include <iostream>
using namespace std;

void print(int arr[]){
    for ( int i=0;i<2;i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

void  inc(int arr[]){
    arr[0] = arr[0]+10 ;
    arr[1] = 99;
    cout << "print the array after incriment "<< endl  ;
    print(arr) ;

}

int main()
{

int arr[] = {5,6} ;
inc(arr) ;
cout << "printing the array in main function " << endl ;
print(arr) ;
return 0;

}
*/
/*
#include <iostream>
using namespace std;

int main()
{
int brr[2000] = { 2,3,4,5} ;
int b = sizeof(brr) ;
cout << b;

return 0;
}

*/
/*
#include <iostream>
using namespace std;

bool PresentOrNot(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 6, 8, 9, 16, 19};
    int size = 7;
    cout << "entr the key that you want to find " << endl;
    int key;
    cin >> key;

    if (PresentOrNot(arr, key, size))
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found " << endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 4, 6, 8, 9, 16, 19};
    int size = 7;
    cout << "entr the key that you want to find " << endl;
    int key;
    cin >> key;
    bool flag = 0 ;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
          flag = 1;
        }
    }

  if ( flag ){
    cout << "found " << endl ;
  }
  else {
    cout << "not found " << endl ;
  }

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
int arr[] = {0,1,1,1,1,0,1,0,1,1,1,0,1,0,0,1,0,0,0,0,0};
int size = 21;

int numZero =0;
int numOne =0;
for(int i=0;i<size;i++){
    if(arr[i] ==0){
        numZero++ ;
    }
    if(arr[i]==1){
        numOne++ ;
    }
}
cout << "no of one : " << numOne << endl ;
cout << "no of zero : " << numZero << endl ;

return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{

int arr[] = {-1,-6,0,-9,-4,-2,-4};
int size= 7;
int maxi = INT_MIN ;
int mini = INT_MAX ;

for ( int i=0;i<size;i++){
    if(arr[i]>maxi){
        maxi= arr[i];
    }
     if(arr[i]<mini){
        mini= arr[i];
    }
}
cout << "maximum element is : "<< maxi << endl ;
cout << "minimum element is : "<< mini << endl ;
return 0;
}
*/

// two ponter concept :
/*
#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = 9;

  int i = 0;
  int j = size - 1;
  while (i <= j)
  {
    if (i < j)
    {
      cout << arr[i] << " " << arr[j] << " ";
    }
    else
    {
      cout << arr[i] << " ";
    }
    i++;
    j--;
  }

  return 0;
}
*/

// reverse an array 

#include <iostream>
using namespace std;

void print(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = 10;

  int i = 0;
  int j = size - 1;
  while (i <= j)
  {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }

  print(arr, size);

  return 0;
}
