#include<iostream>
using namespace std;

int main() {
    // print 10 times
/*    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    cout<<"I Love C++"<<endl;
    
    //for loop 
    for (unsigned int i{}; i<10; ++i )
    {
        cout<<"I Love C++"<<endl;
    }
    size_t i{};
    for (i; i<5;++i){
        cout<<"Single statement in body. Can leave out{} on loop body"<<endl;
    }
    for (size_t j{}; j<10; ++j )
    {
        cout<<"I Love C++"<<endl;
    }
    for (; i<10; ++i )
    {
        cout<<"I Love C++"<<endl;
    }

    const size_t count {10};
        for (; i<count; ++i )
    {
        cout<<"I Love C++"<<endl;
    }
*/  
    // while loop
    const unsigned int COUNT {10};
    unsigned int i{1};
    while (i < COUNT) {
        cout<<i<<":I Love C++"<<endl;
        ++i;
    }
    // do while loop
    do{
        cout<<"["<<i<<"] : I Love C++"<<endl;
        i++;

    }while(i<COUNT*2);
    

}

