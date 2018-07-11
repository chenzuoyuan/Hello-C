#include <iostream.h>  //Two function
int sum(int x , int y){
    int z ; 
    z = x + y ;
    return z ;
}
void main( void ){
    int a, b, c ;
    a = 3 ; b = 5 ;
    c = sum(a, b) ;
    cout << c << '\n' ;
}
