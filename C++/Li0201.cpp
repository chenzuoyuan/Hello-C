#include <iostream.h>  //The use of symbolic constants
#define PI 3.14159
void main( void ){
    float r, c, a, sa ;
    r = 5.0f ;
    c = 2 * PI * r ;
    a = PI * r *r ;
    sa = 4 * PI * r * r ;
    cout << "PI = " << PI << '\n' ;
    cout << "c = " << c << '\n' ;
    cout << "a = " << a << '\n' ;
    cout << "sa =" << sa << '\n' ;
}
