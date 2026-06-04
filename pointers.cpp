#include<iostream>
using namespace std;

    int add_numbers(int a  , int b)
    {
        return a+b;
    }

int main() {
    // declaring pointer


/*    int * p_number1{};
    double * p_fractional_number1{};
    int * p_number{nullptr};
    int*p_fractional_number{nullptr};

    

    cout<<"size of number pointr"<<sizeof(p_number)<<", size of int:"<<sizeof(int)<<endl;
    cout<<"size of fractional_number pointr"<<sizeof(p_fractional_number)<<", size of int:"<<sizeof(double)<<endl;
    cout<<"size of number1 pointr"<<sizeof(p_number1)<<", size of int:"<<sizeof(int)<<endl;
    cout<<"size of fractional_number1 pointr"<<sizeof(p_fractional_number1)<<", size of int:"<<sizeof(double)<<endl;
    
    //assigning data to pointer and assigning them data

    int int_var{43};
    int *p_int{&int_var}; // the address of operator(&);
    cout<<"Int var:"<<int_var<<endl;
    cout<<"p_int(Address in memory):" <<p_int<<endl;

    int int_var1{65};
    int_var = 126;

    p_int = &int_var1;
    cout<<"p_int (with different address)"<<p_int<<endl;
    // pointer only stores the type for which ot was declared
    int *p_int1{nullptr};
    double double_var{33};
    // p_int1 = &double_var; // Complie error
*/ 
   // Derefererencing a pointer:
/*    int* p_int2{nullptr};
    int int_data {43};
    p_int2 = &int_data; 
    cout<<"value:"<<*p_int2<<endl;

    //pointer to char
    char *p_char_var{nullptr};
    char char_var{'A'};
    p_char_var = &char_var;
    cout<<"the value stored in p_char_var is :" <<*p_char_var<<endl;
    char char_var1 {'c'};
    p_char_var = &char_var1;
    cout<<"the value stored in p_char_var is :" <<*p_char_var<<endl;
    // initialize with string litral
    const char *p_message {"Hello World!"}; //   give error 

    cout<<"the message is "<<p_message<<endl;
    cout<<"the value stored at p_message is :"<<*p_message<<endl;

    //*p_message = 'B'; //disaster
    //cout<<"The message is(after modification of first char to B):"<<p_message<<endl;
    
    char message2[] {"Hello there"};
    message2[0] = 'T';
    cout<<"message2:"<<message2<<endl;
*/
    //program memory map

    
/*    int  a = 10;
    int b = 5;
    int c;
    cout<<"Statement1"<<endl;
    cout<<"Statement2"<<endl;
    c = add_numbers(a,b);
    cout<<"Statement3"<<endl;
    cout<<"Statement4"<<endl;
    
    
    
    
    //BAD
    int* p_number2;
    *p_number2 =55; // writing into junk address:BAD!   
    cout <<endl;
    cout<<"Writing into uninitialized pointer through dereferences"<<endl;
    cout<<"p_number2:"<<p_number2<<endl;
    cout<<"*p_number2:"<<*p_number2<<endl;
*/
    
/*    int* p_number3 {};
    // *p_number3 =44; // writing into a pointer pointing nowhere :BAD , CRASH
    cout<<endl;
    cout<<"reading and writing through nullptr"<<endl;
    cout<<"p_nnumber3:"<<p_number3<<endl;
    cout<<"*p_number3:"<<p_number3<<endl; //reading from nullptr BAD ,CRASH
*/  
    //Dynamic heap memory

/*    int *p_number4{nullptr};
    p_number4 = new int;    // dynamically allocate space for a single int on the heap
                            // this memory belong to our program from now on ,. the system 
                            //the system cant use it for anything else , until we return it
                            // After this line executes , we will have a valid memory location
                            //allocated. the size of the allocated memory will be such that it
                            //it can store the type pointed to be the pointer

    *p_number4 = 55; //writing into dynamically allocated memory
    cout<<endl;
    cout<<"Dynamically allocated memory"<<endl;
    cout<<"p_number:"<<*p_number4<<endl;
    
    //return memory to the os
    delete p_number4; 
    p_number4 = nullptr;
    cout<<"Done writing!"<<endl;
  


    // it is also possible to initialize the pointer with a valid address up on declaration . not with a nullptr
    int *p_number5 {new int };
    int *p_number6 {new int(22) };
    int *p_number7 {new int{23} };

    cout<<endl;
    cout<<"Initialize with valid memory address at declaration:"<<endl;
    cout<<"p_number5:"<<p_number5<<endl;
    cout<<"p_number5:"<<*p_number5<<endl;     //junk value

    cout<<"p_number6:"<<p_number6<<endl;
    cout<<"p_number6:"<<*p_number6<<endl;

    cout<<"p_number7:"<<p_number7<<endl;
    cout<<"p_number7:"<<*p_number7<<endl;

    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;
    
    delete p_number7;
    p_number7 = nullptr;

    // can reuse pointers
    p_number5 = new int(82);
    cout<<"*p_number:"<<*p_number5<<endl;
    delete p_number5;
    p_number5 = nullptr;


    p_number5 = new int(843);
    cout<<"*p_number:"<<*p_number5<<endl;
    delete p_number5;
    //delete p_number5;
    p_number5 = nullptr;

    // it is really bad to call delete twice on a pointer
    
*/  
    //Dangling Pointers // they are really bad 
                        //uninitialized pointer
                        // deleted pointer
                        // multiple pointer pointing at same memory
    
    int * p_number;
    cout<<endl;
    cout<<"Case 1: uninitialized pointer:"<<endl;
    cout<<"p_number:" <<p_number<<endl;
    // cout<<"*p_number"<<*p_number<<endl;
    
    cout<<endl;
    cout<<"Case 2 : Deleted pointer"<<endl;
    int *p_number1 {new int{53}};
    cout<<"*p_number1(before delete):"<<*p_number1<<endl;
    delete p_number1;
    cout<<"*p_number (after deleting):" <<*p_number1<<endl;

    cout<<endl;
    cout<<"Case 3 :  multiple pointer pointing at same memory"<<endl;
    int *p_number3 {new int{4}};
    int *p_number4 {p_number3};
    cout<<"p_number3 -"<<p_number3<<"-"<<*p_number3<<endl;
    cout<<"p_number4 -"<<p_number4<<"-"<<*p_number4<<endl;

    delete p_number3;
    cout<<"p_number4(after deleting p_number3)-"<<p_number4<<"-"<<*p_number4<<endl;

    // solutions of dangling pointers
                                    // initialize your pointer
                                    // reset pointers after delete
                                    // for multiple pointers to same address , make sure the owner pointer is very clear 

    cout<<endl;
    cout<<"sol 1"<<endl;
    int *p_number5{};
    int *p_number6{new int {54}};

    if (p_number6 != nullptr){
        cout<<"*p_number6:"<<*p_number6<<endl;
    }

    cout<<endl;
    cout<<"sol2:"<<endl;
    int *p_number7{new int {64}};
    cout<<"p_number7 -"<<p_number7<<"-"<<*p_number7<<endl;
    delete p_number7;
    p_number7 = nullptr;
    if (p_number7!=nullptr){
        cout<<"*P_number7:"<<*p_number7<<endl;
    }
    cout<<endl;
    cout<<"sol3"<<endl;
    int *p_number8{new int {54}};
    int *p_number9{p_number8};
    cout<<"p_number8-"<<p_number8<<"-"<<*p_number8<<endl;

    if (!(p_number8==nullptr)) {
        cout<<"p_number9 -"<<p_number9<<"-"<<*p_number9<<endl;
    }
    delete p_number8;    // master release memory
    p_number8 = nullptr;

    if (!(p_number8==nullptr)) {
        cout<<"p_number9 -"<<p_number9<<"-"<<*p_number9<<endl;
    } else {
        cerr<<"Warning: trying to use abn invalid pointer"<<endl;
    }

    // when "new " fails
    //int *lot_of_int1 { new int [65456456435000101010101010]}; //error array is too long

    /*for (size_t i{}; i <1100010010;i++){
        int * lots_of_int2{new int[10101010]};
    }*/

    for (size_t i{}; i <1100010010;i++){
        try{
            int * lots_of_int3{new int[10101010]};
        }catch(std::exception& ex){
            cout<<"cought exception ourselves:"<<ex.what()<<endl;
        }

    }


      
    
    
    
    


    return 0;

    
    



}
