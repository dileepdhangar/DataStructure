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



//array and function 





