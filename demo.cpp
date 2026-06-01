#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

/*    int addNumbers (int a, int b){  
        return a+b;
    };
*/

int main() {
/*  int n;
    cin>>n;
    cout<<"hey "<<n<<endl;
    return 0;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/

/*  cout<<"hii"<<endl;
    std::cout<<"Number 1" <<std::endl;
    std::cout<<"Number 2" <<std::endl;
    std::cout<<"Number 3" <<std::endl;
    int i,n; 
*/
   
    // loops
   
/*  for(i=1;i<=10;i++){
        cout<<"NAME : VAIDIK"<<endl;
    }
*/
    

    // STATEMENTS AND FUNCTIONS 
   
/*    int first_number {3};
    int second_number {7};
    cout<<"First number:" << first_number<<endl;
    cout<<"Second number:"<<second_number<<endl;
    int value = first_number + second_number;
    cout<<"sum of the numbers is :"<< value<<endl;
*/


/*  int sum = addNumbers(5,63);
    cout<<"SUM:" << sum << endl;
    sum = addNumbers(45,75);
    cout<<"SUM:" << sum << endl;
    cout<<"SUM:" <<addNumbers(23,9)<<endl;
*/
     
/*  int age;
    string name;
    cin>>name>>age;
    cout<<"name:" <<name <<endl << "age:"<<age<<endl;
    
    int age2;
    string full_name;
    cout<<"Please type your full name and age"<<endl;
    cin.ignore();
    getline(cin,full_name);
    cin>>age2;
    cout<<"name:" <<full_name <<endl << "age:"<<age2<<endl;   
*/


    // NUMBER SYSTEM
/*
    int number1 =15; //Decimal
    int number2 = 017;  // Octal
    int number3 = 0x0F; //Hexadecimal
    int number4 = 0b1111;  //Binary

    cout<<"number1 :" <<number1 <<endl;
    cout<<"number2 :" <<number2 <<endl; 
    cout<<"number3 :" <<number3 <<endl;
    cout<<"number4 :" <<number4 <<endl;
*/
    
    //Braced Initializers
/*
    int elephant_count;  
    int lion_count{};  // Initializes with 0
    int dog_count{10}; // initializes with 10
    int cat_count{15}; // initializes with 15 
    int domesticated_animals {dog_count + cat_count};

    //int narrowing_conversion {2.9}; //gives error 
   
    cout<<"Elephant count " << elephant_count <<endl;
    cout<<"Lion count " << lion_count <<endl; 
    cout<<"Dog count " << dog_count <<endl;
    cout<<"Cat count " << cat_count <<endl;
    cout<<"Domesticated animal count " << domesticated_animals <<endl;
*/
    //Functional initialization 
/*    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);
    int narrowing_conversion (2.9);
    cout<<"Apple count"<<apple_count <<endl;
    cout<<"Orange count:" <<orange_count <<endl;
    cout<<"Fruit count:" <<fruit_count <<endl;
    cout<<"narrowing conversion:" <<narrowing_conversion <<endl;
*/   
    //ASSignment notation / initialization
/*    int bike_count = 2;
    int truck_count =7;
    int vehicle_count= bike_count + truck_count;
    int narrowing_conversion2 = 2.9;
    cout<<"bike_count:"<<bike_count <<endl;
    cout<<"truck_count:"<<truck_count <<endl;
    cout<<"vehicle_count:"<<vehicle_count <<endl;
    cout<<"narrowing conversion2:"<<narrowing_conversion2 <<endl;

    cout<<"size of int :" <<sizeof(int)<<endl;
    cout<<"size of truck_count" <<sizeof(truck_count)<<endl;
*/
    

    // int modifiers
/*    short short_var {-32767};
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short unsigned_short {456};
    
    int int_var {55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned unsigned_int {77};

    long long_var {88};
    long int long_int {33};
    signed long signed_long {33}; 
    signed long int signed_long_int {44};
    unsigned long unsigned_long {44};

    long long long_long {888};
    long long int long_long_int {999};
    signed long long signed_long_long {444}; 
    signed long long int signed_long_long_int {-1234};
    unsigned long long unsigned_long_long {1234};
   
    cout <<"short_var:" <<short_var << "size:" <<sizeof(short_var) <<endl;
    cout <<"short_int:" <<short_int << "size:" <<sizeof(short_int) <<endl;
    cout <<"signed_short:" <<signed_short << "size:" <<sizeof(signed_short) <<endl;
    cout <<"signed_short_int:" <<signed_short_int << "size:" <<sizeof(signed_short_int) <<endl;
    cout <<"unsigned_short:" <<unsigned_short << "size:" <<sizeof(unsigned_short) <<endl;

    cout <<"int_var:" <<int_var << "size:" <<sizeof(int_var) <<endl;
    cout <<"signed_var:" <<signed_var << "size:" <<sizeof(signed_var) <<endl;
    cout <<"signed_int:" <<signed_int << "size:" <<sizeof(signed_int) <<endl;
    cout <<"unsigned_int:" <<unsigned_int << "size:" <<sizeof(unsigned_int) <<endl;

    cout <<"long_var:" <<long_var << "size:" <<sizeof(long_var) <<endl;   
    cout <<"long_int:" <<long_int << "size:" <<sizeof(long_int) <<endl;
    cout <<"signed_long:" <<signed_long << "size:" <<sizeof(signed_long) <<endl;
    cout <<"signed_long_int:" <<signed_long_int << "size:" <<sizeof(signed_long_int) <<endl;
    cout <<"unsigned_long:" <<unsigned_long << "size:" <<sizeof(unsigned_long) <<endl;

    cout <<"long_long:" <<long_long << "size:" <<sizeof(long_long) <<endl;
    cout <<"long_long_int:" <<long_long_int << "size:" <<sizeof(long_long_int) <<endl;
    cout <<"signed_long_long:" <<signed_long_long << "size:" <<sizeof(signed_long_long) <<endl;
    cout <<"signed_long_long_int:" <<signed_long_long_int << "size:" <<sizeof(signed_long_long_int) <<endl;
    cout <<"unsigned_long_long:" <<unsigned_long_long << "size:" <<sizeof(unsigned_long_long) <<endl;

    int value1 {3456};
    int value2 {6};
    cout <<"value1:" <<value1 <<endl;
    cout <<"value2:" <<value2 <<endl;
    cout <<sizeof(value1) <<endl;
    cout <<sizeof(value2) <<endl;
*/

    //fractional numbers
     
/*    double number10{5.6}; 
    double number11{};
    double number12{};
    float number13{30.34232445345430f};
    long double number14{23.5765466453450L} ;

    cout<<sizeof(number10)<<endl;
    cout<<sizeof(number13)<<endl;
    cout<<sizeof(number14)<<endl;
   //precision 
   cout<<setprecision(20);
    cout<<"number10" <<number10<<endl; // precision 7
    cout<<"number13"<<number13<<endl;  // precision 15
    cout<<"number14"<<number14<<endl;  //precision  19

    float number15 {132852566.0f};  // ERROR  : narrowing conversion // even if we change datatype from starting even than it behave as float because of "0f" at the end
    cout<<"number15"<<number15<<endl;
    
    
    double number16 {132852566}; 
    double number17 {1.32852566e8};
    double number18 {1.328e8};
    
    double number19{0.00000000000003498};
    double number20{3.498e-14};

    cout<<"number 16 is :"<<number16<<endl;
    cout<<"number 17 is :"<<number17<<endl; 
    cout<<"number 18 is :"<<number18<<endl;
    cout<<"number 19 is :"<<number19<<endl;
    cout<<"number 20 is :"<<number20<<endl;

    double number21 {5.6};
    double number22 {};    
    double number23 {};
    double result {number21 / number22};
    // gives infinity because of division by zero
    cout << number21 <<"/" <<number22 <<"=" <<result <<endl;
    cout <<result <<"+"<<number21 <<"=" <<result + number21 <<endl; // gives infinity because of addition with infinity
*/    
    
    //Boolean 
/*     bool red_light{true};
     bool green_light{false};
     
     if (red_light == true) {
        cout<<"STOP!" <<endl;
     }
     else {
        cout<<"GO!" <<endl;
     }
    if (green_light) {
        cout<<"Light is green" <<endl;
     }
     else {
        cout<<"the light is not green" <<endl;
     }
    
    cout << "size of (bool):" <<sizeof(bool)<<endl;
    // printing boolean values
    //1 = true and 0 = false
    cout <<endl;
        cout<<"red_light:" <<red_light <<endl;
        cout<<"green_light:" <<green_light <<endl;
    cout <<boolalpha; // to print boolean values as true and false instead of 1 and 0
    cout<<"red_light:" <<red_light <<endl;
    cout<<"green_light:" <<green_light <<endl;
*/  
    // character
/*    char character1 {'A'};
    char character2 {'B'}; 
    char character3 {'C'};
    char character4 {'D'};
    char character5 {'E'};
    cout<<"character1:" <<character1 <<endl;
    cout<<"character2:" <<character2 <<endl;
    cout<<"character3:" <<character3 <<endl;
    cout<<"character4:" <<character4 <<endl;
    cout<<"character5:" <<character5 <<endl;
 
    char value = 69; // ASCII value of 'E'
    cout<<"value:" <<value <<endl;
    cout<<"size of char:" <<sizeof(char)<<endl;
*/
    // auto
/*    auto var1 = 42; // type is deduced as int
    auto var2 = 3.14; // type is deduced as double
    auto var3 = 'A'; // type is deduced as char
    auto var4 {10.50l}; // type is deduced as long double
    auto var5 {12.40f}; // type is deduced as float

    auto var6 {123u}; // type is deduced as signed int
    auto var7 {123UL}; // type is deduced as unsigned long
    auto var8 {123LL}; // type is deduced as long long

    cout <<"var1 occupies:" <<sizeof(var1) << "bytes and value is :" <<var1 <<endl;
    cout <<"var2 occupies:" <<sizeof(var2) << "bytes and value is :" <<var2 <<endl;
    cout <<"var3 occupies:" <<sizeof(var3) << "bytes and value is :" <<var3 <<endl;
    cout <<"var4 occupies:" <<sizeof(var4) << "bytes and value is :" <<var4 <<endl;
    cout <<"var5 occupies:" <<sizeof(var5) << "bytes and value is :" <<var5 <<endl;
    cout <<"var6 occupies:" <<sizeof(var6) << "bytes and value is :" <<var6 <<endl;
    cout <<"var7 occupies:" <<sizeof(var7) << "bytes and value is :" <<var7 <<endl;
    cout <<"var8 occupies:" <<sizeof(var8) << "bytes and value is :" <<var8 <<endl;
*/  
    // assignment
/*   int varr1{123};
    cout<<"varr1:" <<varr1 <<endl;
    varr1 = 456; // reassigning a new value to varr1
    cout<<"varr1 after reassignment:" <<varr1 <<endl;
    cout<<"---------------------------------" <<endl;
    auto varr2{343.64};
    cout<<"varr2:" <<varr2 <<endl;
    varr2 = 567.89; // reassigning a new value to var  
    cout<<"varr2 after reassignment:" <<varr2 <<endl;
    cout<<endl;

    bool state{false};
    cout<<boolalpha; // to print boolean values as true and false instead of 1 and 0
    cout<<"state:" <<state <<endl;
    state = true; // reassigning a new value to state
    cout<<"state after reassignment:" <<state <<endl;
     
    // auto type deduction with assignment
    auto varr3{123u}; // varr3 is deduced as unsigned int
    cout<<"varr3:" <<varr3 <<endl;
    varr3 = -45; // reassigning negative number . DANGER : this will give garbage value because varr3 is unsigned int and cannot hold negative values
    cout<<"varr3 after reassignment:" <<varr3 <<endl; 
*/ 
    










return 0;
  
  

}

 