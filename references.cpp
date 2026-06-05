#include<iostream>
using namespace std;

int main() {

    
    int int_value {654};
    double double_value{54};
    //declaring and using referenves.25

/*    int & reference_to_int_value1{int_value};
    int & reference_to_int_value2 =int_value;
    double &reference_to_double_value_1 {double_value};


    cout<<"int value:"<<int_value<<endl;
    cout<<"double value:"<<double_value<<endl;
    cout<<"reference to int value1:"<<reference_to_int_value1<<endl;
    cout<<"reference to int value2:"<<reference_to_int_value2<<endl;
    cout<<"reference to double value1:"<<reference_to_double_value_1<<endl;
    cout<<"&int value:"<<&int_value<<endl;
    cout<<"&double value:"<<&double_value<<endl;
    cout<<"&reference to int value1:"<<&reference_to_int_value1<<endl;
    cout<<"&reference to int value2:"<<&reference_to_int_value2<<endl;
    cout<<"&reference to double value1:"<<&reference_to_double_value_1<<endl; 
    cout<<"sizeof(int):"<<sizeof(int)<<endl;
    cout<<"sizeof(int&):"<<sizeof(int&)<<endl;
    cout<<"sizeof(reference_to_int_value_1):"<<sizeof(reference_to_int_value1)<<endl;

    cout <<endl;
    cout<<"Modifynig data through refrences:"<<endl;
    reference_to_int_value1 = 43;
    
    //print out after modification of int _value
    cout<<"int value:"<<int_value<<endl;
    cout<<"double value:"<<double_value<<endl;
    cout<<"reference to int value1:"<<reference_to_int_value1<<endl;
    cout<<"reference to int value2:"<<reference_to_int_value2<<endl;
    cout<<"reference to double value1:"<<reference_to_double_value_1<<endl;
    cout<<"&int value:"<<&int_value<<endl;
    cout<<"&double value:"<<&double_value<<endl;
    cout<<"&reference to int value1:"<<&reference_to_int_value1<<endl;
    cout<<"&reference to int value2:"<<&reference_to_int_value2<<endl;
    cout<<"&reference to double value1:"<<&reference_to_double_value_1<<endl; 
    cout<<"sizeof(int):"<<sizeof(int)<<endl;
    cout<<"sizeof(int&):"<<sizeof(int&)<<endl;
    cout<<"sizeof(reference_to_int_value_1):"<<sizeof(reference_to_int_value1)<<endl;
    
    
    cout<<endl;
    cout<<"Modifying data directly"<<endl;
    double_value = 9.99;
    
    cout<<"int value:"<<int_value<<endl;
    cout<<"double value:"<<double_value<<endl;
    cout<<"reference to int value1:"<<reference_to_int_value1<<endl;
    cout<<"reference to int value2:"<<reference_to_int_value2<<endl;
    cout<<"reference to double value1:"<<reference_to_double_value_1<<endl;
    cout<<"&int value:"<<&int_value<<endl;
    cout<<"&double value:"<<&double_value<<endl;
    cout<<"&reference to int value1:"<<&reference_to_int_value1<<endl;
    cout<<"&reference to int value2:"<<&reference_to_int_value2<<endl;
    cout<<"&reference to double value1:"<<&reference_to_double_value_1<<endl; 
    cout<<"sizeof(int):"<<sizeof(int)<<endl;
    cout<<"sizeof(int&):"<<sizeof(int&)<<endl;
    cout<<"sizeof(reference_to_int_value_1):"<<sizeof(reference_to_int_value1)<<endl;
    
    //declare pointer and references 
    double double_value2 = 54.74;
    double& ref_double_value {double_value2};
    double* p_double_value {&double_value2};
    
    //reading
    cout<<"double value:"<<double_value<<endl;
    cout<<"ref double value:"<<ref_double_value<<endl;
    cout<<"P DOUBLE VALUE"<<p_double_value<<endl;
    cout<<"*p double value"<<*p_double_value<<endl;

    cout<<endl;
    cout<<"writing through pointer:"<<endl;
    //writitng through pointer
    *p_double_value = 23.765;
    cout<<"double value:"<<double_value<<endl;
    cout<<"ref double value:"<<ref_double_value<<endl;
    cout<<"P DOUBLE VALUE"<<p_double_value<<endl;
    cout<<"*p double value"<<*p_double_value<<endl; 
    //writing through references
    cout<<endl;
    cout<<"Writing through reference"<<endl;
    ref_double_value =5.65;
    cout<<"double value:"<<double_value<<endl;
    cout<<"ref double value:"<<ref_double_value<<endl;
    cout<<"P DOUBLE VALUE"<<p_double_value<<endl;
    cout<<"*p double value"<<*p_double_value<<endl; 
    
    
    // cant make a reference refer to something else
    double double_value5 {43.65};
    double& ref_double_value5 {double_value2};
    double other_double_value{23.53};
    ref_double_value = other_double_value;

    ref_double_value =543.65;


    //A pointer can point somewhere else
    std::cout << std::endl;
    std::cout << "A pointer can point somewhere else : " << std::endl;

    p_double_value = & other_double_value;

    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;
    std::cout << "other_double_value : " << other_double_value << std::endl;

    std::cout << std::endl;
    std::cout << "Changing the now pointed to value : " << std::endl;

    *p_double_value = 555.66;

    std::cout << "double_value : " << double_value << std::endl;
    std::cout << "ref_double_value : " << ref_double_value << std::endl;
    std::cout << "p_double_value : " << p_double_value << std::endl;
    std::cout << "*p_double_value : " << *p_double_value << std::endl;
    std::cout << "other_double_value : " << other_double_value << std::endl;
    double *const const_p_double_value {&double_value};
    //const_p_double_value = &other_double_value; //ERROR
    //REFERENCES AND CONST

    cout<<endl;
    cout<<"Non const reference:"<<endl;
    int age{34};
    const int & ref_age{age};
*/
    /*
    cout<<"age"<<age<<endl;
    cout<<"ref_age"<<ref_age<<endl;
    //can modify og var through ref
    cout<<endl;
    cout<<"Modify original variable through references:"<<endl;
    ref_age++;
    cout<<"age"<<age<<endl;
    cout<<"ref_age"<<ref_age<<endl;
    */
    // simulation ref behaviour with pointer
    //const int *const p_age{&age};
    //*p_age = 45;

    cout<<"======================="<<endl;

}