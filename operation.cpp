#include<iostream>
#include<iomanip>
#include<limits>
#include<cmath>

using namespace std;

int main() {
    
    // Arithmetic Operators
/*    int number1{10};
    int number2{20};
    int sum{number1 + number2};
    int difference{number1 - number2};
    int product{number1 * number2};
    int quotient{number1 / number2};
    int remainder{number1 % number2};
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
*/
    //precidence and associativity
/*    int a {10};
    int b {20};
    int c {30};
    int d {33};
    int e {2};
    int f {3};
    int g{35};
    int result = a+b*c-d/f%e+g; // 10 + 20*30 - 33/3 % 2 + 35
    cout << "Result: " << result << endl;
    result = a+(c+a)*b+(e*f)-d%f+g; // 10 + (30+10)*20 + (2*3) - 33%3 + 35
    cout << "Result: " << result << endl;
 */ 

    //prefix and postfix increment and decrement operators
/*    int number{10};
    cout << "number: " << number << endl;
    cout << "number++: " << number++ << endl; // post increment
    cout << "number: " << number << endl;

    cout << "++number: " << ++number << endl; // pre increment
    cout << "number: " << number << endl;   
        cout << "number--: " << number-- << endl; // post decrement
    cout << "number: " << number << endl;
    cout << "--number: " << --number << endl; // pre decrement
    cout << "number: " << number << endl;
*/
 //compound operation assignment operators
/*    int value{45};
    cout<<"the value is:"<<value<<endl;
    value += 5; // value = value + 5
    cout<<"the value is:"<<value<<endl;
    value -=5; // value = value - 5
    cout<<"the value is: "<<value<<endl;
    value *=2; // value = value * 2
    cout<<"the value is: "<<value<<endl;
    value/=5; // value = value / 5
    cout<<"the value is: "<<value<<endl;
    value%=32;  // value = value % 32
    cout<<"the value is: "<<value<<endl;
*/
    //relational operations

/*    int number1{60};
    int number2(60);
    cout<<"number1:" <<number1<<endl<<"number2:"<<number2<<endl;
    cout<<endl;
    cout<<"comparing variables using relational operators:"<<endl;
    cout<<"number1 < number2:" <<(number1<number2)<<endl;
    cout<<"number1 > number2:" <<(number1>number2)<<endl;
    cout<<"number1 <= number2:" <<(number1<=number2)<<endl;
    cout<<"number1 >= number2:" <<(number1>=number2)<<endl;
    cout<<"number1 == number2:" <<(number1==number2)<<endl;
    cout<<"number1 != number2:" <<(number1!=number2)<<endl;
    cout<<endl;
    cout<<"store comarison result and use it later:"<<endl;
    bool result (number1==number2);
    cout<<number1<<"=="<<number2<<":"<<result<<endl;
*/
    //logical operators
/*    bool a{true};
    bool b{false};
    bool c {true};
    cout <<boolalpha;
    cout<<"a :"<<a<<endl;
    cout<<"b :"<<b<<endl;
    cout<<"c :"<<c<<endl;
    cout<<endl;
    cout<<"BASIC and operatiop:"<<endl;
    cout<<"a && b: "<<(a&&b)<<endl;
    cout<<"a && c: "<<(a&&c)<<endl;
    cout<<"a&&b&&c:"<<(a&&b&&c)<<endl;
    cout<<endl;
    cout<<"BASIC or operation:"<<endl;
    cout<<"a||b:"<<(a||b)<<endl;
    cout<<"a||c:"<<(a||c)<<endl;
    cout<<"a||b||c:"<<(a||b||c)<<endl;
    cout <<endl;
    cout<<"BASIC NOT operation:"<<endl;
    cout<<"!a: "<<(!a)<<endl;
    cout<<"!b:"<<(!b)<<endl;
    cout<<"!c:"<<(!c)<<endl;
    //combine logical operations 

    cout<<"!(a && b)||c:"<<(!(a&&b)||c)<<endl;
    
    // logical and relational combined in expression 
    int d{45};
    int e{55};
    int f{34};
    cout<<endl;
    cout<<"logical and relational combined in expression:"<<endl;
    cout<<"\nd: "<<d<<"\n e: "<<e<<"\n f:"<<f<<endl;
    cout<<"(d>e)&&(d>f):"<<((d>e)&&(d>f))<<endl;
    cout<<"(d==e)||(e<=f):"<<((d==e)||(e<=f))<<endl;
    cout<<"d<e || d>f:" <<((d<e) || (d>f))<<endl;
    cout<<"d>e && d<=f:" <<((d>e) && (d<=f))<<endl;
    cout<<"(!a)&&(d==e):"<<((!a)&&(d==e))<<endl;
*/   
    //output formatting
    //std::endl;
/*    cout<<"Hello";
    cout<<"World!"<<endl;
    cout<<"hello\nworld!"<<endl;
    //std::flush;
    cout<<"THis is a nice message....."<<endl <<flush;
    //std::stdw() : Adjust the field with for the item abut to be printed
    cout<<"Unformatted table:"<<endl;
    cout<<"Name"<<"Age"<<"City"<<endl;
    cout<<"John"<<"25"<<"New York"<<endl;
    cout<<"daniel"<<"30"<<"Los Angeles"<<endl;
    cout<<endl;

    cout<<"Formatted table:"<<endl;
    cout<<setw(10)<<"Name"<<setw(10)<<"Age"<<setw(15)<<"City"<<endl;
    cout<<setw(10)<<"John"<<setw(10)<<"25"<<setw(15)<<"New York"<<endl;
    cout<<setw(10)<<"daniel"<<setw(10)<<"30"<<setw(15)<<"Los Angeles"<<endl;

    cout<<endl;
    cout<<"Formatted table with variables:"<<endl;
    int col_width{14};
    cout<<setw(col_width)<<"Name"<<setw(col_width)<<"Age"<<setw(col_width)<<"City"<<endl;
    cout<<setw(col_width)<<"John"<<setw(col_width)<<"25"<<setw(col_width)<<"New York"<<endl;
    cout<<setw(col_width)<<"daniel"<<setw(col_width)<<"30"<<setw(col_width)<<"Los Angeles"<<endl;
    cout<<endl;
    //right justified (default)
    cout<<"Right justified table:"<<endl;
    cout<<std::right;
    col_width =20;
    cout<<setw(col_width)<<"Name"<<setw(col_width)<<"Age"<<setw(col_width)<<"City"<<endl;
    cout<<setw(col_width)<<"John"<<setw(col_width)<<"25"<<setw(col_width)<<"New York"<<endl;
    cout<<setw(col_width)<<"daniel"<<setw(col_width)<<"30"<<setw(col_width)<<"Los Angeles"<<endl;
    cout<<endl;

    cout<<std::left;
    col_width =15;
    cout<<setw(col_width)<<"Name"<<setw(col_width)<<"Age"<<setw(col_width)<<"City"<<endl;
    cout<<setw(col_width)<<"John"<<setw(col_width)<<"25"<<setw(col_width)<<"New York"<<endl;
    cout<<setw(col_width)<<"daniel"<<setw(col_width)<<"30"<<setw(col_width)<<"Los Angeles"<<endl;
    cout<<endl;

    cout<<std::internal; // sign is quoted to the left and the rest is right justified
    col_width =15;
    cout<<setw(col_width)<<"Name"<<setw(col_width)<<"Age"<<setw(col_width)<<"City"<<endl;
    cout<<setw(col_width)<<"John"<<setw(col_width)<<"25"<<setw(col_width)<<"New York"<<endl;
    cout<<setw(col_width)<<"daniel"<<setw(col_width)<<"30"<<setw(col_width)<<"Los Angeles"<<endl;
    cout<<endl; 

    cout<<std::left;
    cout<<std::setfill('-'); // fill the empty space with '-'
    col_width =15;
    cout<<setw(col_width)<<"Name"<<setw(col_width)<<"Age"<<setw(col_width)<<"City"<<endl;
    cout<<setw(col_width)<<"John"<<setw(col_width)<<"25"<<setw(col_width)<<"New York"<<endl;
    cout<<setw(col_width)<<"daniel"<<setw(col_width)<<"30"<<setw(col_width)<<"Los Angeles"<<endl;
    cout<<endl;
     
    //boolalpha and noboolalpha
    bool condition1{true};
    bool condition2{false};
    cout<<"condition1:"<<condition1<<endl;
    cout<<"condition2:"<<condition2<<endl;
    cout<<std::boolalpha;
    cout<<"condition1:"<<condition1<<endl;
    cout<<"condition2:"<<condition2<<endl;
    cout<<std::noboolalpha;
    cout<<"condition1:"<<condition1<<endl;
    cout<<"condition2:"<<condition2<<endl;

    //std::showpos and std::noshowpos
    int pos_num{123};
    int neg_num {-231};
    cout<<"pos_num:"<<pos_num<<endl;
    cout<<"neg_num:"<<neg_num<<endl;
    cout<<endl;

    cout<<std::showpos; // show the positive sign for positive numbers
    cout<<"pos_num:"<<pos_num<<endl;
    cout<<"neg_num:"<<neg_num<<endl;
    cout<<endl;

    cout<<std::noshowpos; // do not show the positive sign for positive numbers
    cout<<"pos_num:"<<pos_num<<endl;    
    cout<<"neg_num:"<<neg_num<<endl;
    cout<<endl;
    
    //different number systems : std::dec, std::hex, std::oct;
    int pos_int {43};
    int neg_int {-32};
    double double_var{343.74};

    cout<<std::endl;
    cout<<"default base format"<<endl;
    cout<<"pos_int:"<<pos_int<<endl;
    cout<<"neg_int:"<<neg_int<<endl;
    cout<<"double_var:"<<double_var<<endl;

    cout<<"pos_int in diff bases:"<<endl;
    cout<<"pos_int (dec):"<<std::dec<< pos_int<<endl;
    cout<<"pos_int (hex):"<<std::hex<< pos_int<<endl;
    cout<<"pos_int (oct):"<<std::oct<< pos_int<<endl;  

    cout<<"neg_int in diff bases:"<<endl;
    cout<<"neg_int (dec):"<<std::dec<< neg_int<<endl;
    cout<<"neg_int (hex):"<<std::hex<< neg_int<<endl;
    cout<<"neg_int (oct):"<<std::oct<< neg_int<<endl;   
    
    cout<<"double_var in diff bases:"<<endl;
    cout<<"double_var (dec):"<<std::dec<< double_var<<endl;
    cout<<"double_var (hex):"<<std::hex<< double_var<<endl;
    cout<<"double_var (oct):"<<std::oct<< double_var<<endl;  
 
    pos_int =354343;

    cout<<"pos_int (nouppercases (default)):"<<endl;
    cout<<"pos_int (dec):"<<std::dec<< pos_int<<endl;
    cout<<"pos_int (hex):"<<std::hex<< pos_int<<endl;
    cout<<"pos_int (oct):"<<std::oct<< pos_int<<endl; 
    
    cout<<"pos_int (uppercases (default)):"<<endl;
    cout<<std::uppercase;
    cout<<"pos_int (dec):"<<std::dec<< pos_int<<endl;
    cout<<"pos_int (hex):"<<std::hex<< pos_int<<endl;
    cout<<"pos_int (oct):"<<std::oct<< pos_int<<endl;  

    // fixed and scientific : for floating point values 

    double a{3.546435621416544547865546545};
    double b{345.76};
    double c{1.34e-10};

    cout<<"double values (default : use scientific where necessary)"<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;
    cout<<endl;

    cout<<"double values (fixed):" <<endl;
    cout<<std::fixed;
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;
    cout<<endl;

    cout<<"double values(back to defaults):"<<endl;
    cout.unsetf(std::ios::scientific | std::ios::fixed); //hack
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;    
    

    //set precision () : the no of digits printed out for a floating point , default 
    a = 3.545646456343235345635365465353535354635556;
    cout<<endl;
    cout<<"a(default precision(6)):" <<a<<endl;
    cout<<std::setprecision(10);
    cout<<"a(default precision(10)):" <<a<<endl;
    cout<<std::setprecision(20);
    cout<<"a(default precision(20)):" <<a<<endl;
    // if the precision i s bigger than  supported by the type, you'll just print garbage 
    cout<<endl;
    //showpoint and noshowpoint : show trailing zeros if necessary
    double d {34.14};
    double e{10600.101};
    double f {12.0};
    double g {52};

    cout <<endl;
    cout<<"noshowpoint(default)"<<endl;
    cout<<"d:"<<d<<endl;
    cout<<"e:"<<e<<endl;
    cout<<"f:"<<f<<endl;
    cout<<"g:"<<g<<endl;
    cout <<endl;
    cout<<"showpoint:"<<endl;
    cout<<std::showpoint;
    cout<<"d:"<<d<<endl;
    cout<<"e:"<<e<<endl;
    cout<<"f:"<<f<<endl;
    cout<<"g:"<<g<<endl;
*/ 
    //numeric limits min ,max ,lowest
/*    cout<<"the range for short is form" << std::numeric_limits<short>::min()<< "to"<<std::numeric_limits<short>::max()<<endl;
    cout<<"the range for unsigned short is form" << std::numeric_limits<unsigned short>::min()<< "to"<<std::numeric_limits<unsigned short>::max()<<endl;
    cout<<"the range for int is form" << std::numeric_limits<int>::min()<< "to"<<std::numeric_limits<int>::max()<<endl;
    cout<<"the range for unsigned int is form" << std::numeric_limits<unsigned int>::min()<< "to"<<std::numeric_limits<unsigned int>::max()<<endl;
    cout<<"the range for long is form" << std::numeric_limits<long>::min()<< "to"<<std::numeric_limits<long>::max()<<endl;
    cout<<"the range for float is form" << std::numeric_limits<float>::min()<< "to"<<std::numeric_limits<float>::max()<<endl;
    cout<<"the range(with lowest) for float is form" << std::numeric_limits<float>::lowest()<< "to"<<std::numeric_limits<float>::max()<<endl;
    cout<<"the range(with lowest) for double is form" << std::numeric_limits<double>::lowest()<< "to"<<std::numeric_limits<double>::max()<<endl;
    cout<<"the range(with lowerst) for long double is form" << std::numeric_limits<long double>::lowest()<< "to"<<std::numeric_limits<long double>::max()<<endl;
    

    // other facilities
    cout<<"int is signed:" <<std::numeric_limits<int>::is_signed<<std::endl;
    cout<<"int digits:" <<std::numeric_limits<int>::digits<<endl;
*/
    //math
 /*   //ceil & floor
    double weight {7.7};
    cout<<"Weight rounded to floor is:" <<floor(weight)<<endl;
    cout<<"Weight rounded to ceil is:" <<ceil(weight)<<endl;
    //absolute
    double savings{-7654};
    weight= 7.7;
    cout<<"abs of weight is :" <<abs(weight)<<endl;
    cout<<"abs of savings is :" <<abs(savings)<<endl;
    //exponential f(x) = e^x, where e = 2.71828;
    double exponential = std::exp(10);
    cout<<"the exponential of 10 is :"<<exponential<<endl;
    //power 
    cout<<"3^4 is :" <<std::pow(3,4)<<endl;
    // log 
    cout<<"Log to get 54.59 , you would evaluate e to the power of :"<<std::log(54.59)<<endl;
    cout<<"Log to get 10000 , you would evaluate 10 to the power of :"<<std::log10(10000)<<endl;
    //sqrt
    cout<<"the square root of 81 vis :"<<std::sqrt(81)<<endl;
    //round
    cout<<"3.743 rounded to :"<<std::round(3.743)<<endl;
    cout<<"4.3 rounded to :"<<std::round(4.3)<<endl;
*/
    short int var1{10};
    short int var2{20};
    char var3{40};
    char var4{50};
    cout<<"size of var1:"<<sizeof(var1)<<endl;
    cout<<"size of var2:"<<sizeof(var2)<<endl;
    cout<<"size of var3:"<<sizeof(var3)<<endl;
    cout<<"size of var4:"<<sizeof(var4)<<endl;
    auto result1 = var1 +var2;
    auto result2= var3 +var4;
    cout<<"size of result1:"<<sizeof(result1)<<endl;
    cout<<"size of result2:"<<sizeof(result2)<<endl;
    
    

    return 0;
}   