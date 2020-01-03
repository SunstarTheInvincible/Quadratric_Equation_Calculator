/*Hello peeps this is a Quadratic Equation Calculator made by me i.e. SUNSTAR . Feel free to do any changes.
steps to use it:
1.) First You'll be asked the coefficient of x².Enter the the desired value.
2.) Secondly you'll be asked the coefficient of x. Enter the desired value.
3.) Third you'll be asked the constant. Enter the desired value.*/

#include <iostream>
#include <cmath>

using namespace std;

 int main()
{
    cout<<"---        |\\    |  ---  -------   /\\      -------"<<endl;
    cout<<"|    |  |  | \\   |  |       |     /  \\     |     |"<<endl;
    cout<<"---  |  |  |  \\  |  ---     |    /----\\    |------"<<endl;
    cout<<"  |  |  |  |   \\ |    |     |   /      \\   |  \\"<<endl;
    cout<<"---  ----  |    \\|  ---     |  /        \\  |   \\"<<endl;
    double a;
    double b;
    double c;
cout<<"Please Enter the Coefficient of x²!\n"; cin>>a;
cout<<"Coefficint of x² is "<<a<<".\n";
cout<<"Please Enter the Coefficient of x!\n";
cin>>b;
cout<<"Coefficient of x is "<<b<<".\n";
cout<<"Please enter Constant(c)!\n";
cin>>c;
cout<<"Constant is "<<c<<".\n";
  
  double x1=(-b+(sqrt((b*b)-(4*a*c))))/(2*a);
    double x2=(-b-(sqrt((b*b)-(4*a*c))))/(2*a);
    
    cout<<x1<<"\n";
    cout<<x2;
    return 0;
}
