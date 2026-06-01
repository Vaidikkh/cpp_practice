#include<iostream>
using namespace std;


int main(){
    // if else condition
/*    bool red = false;
    bool green= true;
    bool yellow{false};
    bool police_stop {true};

    if(red){
        std::cout<<"stop"<<std::endl;}
    if(yellow){
        std::cout<<"slow down"<<std::endl;}
    if(green){
        std::cout<<"go "<<std::endl;
    }   
    //nested
    if(green){
        if(police_stop){
            std::cout<<"stop"<<std::endl;
        }
        else{
            std::cout<<"go"<<std::endl;
        }
    }
        //nesting alternative
        if(green && !police_stop){
        
            std::cout<<"go"<<std::endl;
        }
        else{
            std::cout<<"stop"<<std::endl;
        }
    

    int number1{22};
    int number2{45};
    bool result = (number1 <number2);
    std::cout<<std::boolalpha<<"result :"<<result<<std::endl;
    if (result== true){
        std::cout<<number1<<"is less than "<<number2<<std::endl;
    }
    else{
        std::cout<<number1<<"is NOT less than"<<number2 <<std::endl;
    }
    
    //several conditions s
    //tools 
    const int Pen{10};
    const int Marker{20};
    const int Eraser(30);
    const int Rectangle{45};
    const int Circle{54};
    const int Ellipse{60};
    // else if 
    int tool{Ellipse};
    if(tool==Pen) {
        cout<<"Active tool is pen"<<endl;
    }
    
    else if(tool==Marker) {
        cout<<"Active tool is Marker"<<endl;
    }
    else if(tool==Eraser) {
        cout<<"Active tool is Eraser"<<endl;
    }
    else if(tool==Rectangle) {
        cout<<"Active tool is Rectangle"<<endl;
    }
    else if(tool==Circle) {
        cout<<"Active tool is Circle"<<endl;
    }
    else if(tool==Ellipse) {
        cout<<"Active tool is Ellipse"<<endl;
    }
    
    cout<<"Moving on"<<endl;
*/
    //cases

    //tools 
    const int Pen{10};
    const int Marker{20};
    const int Eraser(30);
    const int Rectangle{45};
    const int Circle{54};
    const int Ellipse{60};

    int tool{Pen};
    switch(tool) {   
        case Pen: {
            cout<<"Active tool is pen"<<endl;
        } break;  // dont allow code to run continue 
        case Marker:
        {
            cout<<"Active tool is Marker"<<endl;
        } break;
        case Eraser:
        {
            cout<<"Active tool is Eraser"<<endl;
        } break;
        case Rectangle:
        {
            cout<<"Active tool is Rectangle"<<endl;
        } break;
        case Circle:
        {
            cout<<"Active tool is Circle"<<endl;
        }    break;
        case Ellipse:
        {
            cout<<"Active tool is Ellipse"<<endl;
        }      break;
        default:
        {
            cout<<"Can't match any tool"<<endl;
        } break;
    }

    int max{};
    int a{2};
    int b{54};
    cout<<endl;
    cout<<"using regular if"<<endl;

    if (a>b){
        max =a;
    }else{
        max = b;
    }
    cout<<"max:"<<max<<endl;
    //ternary exp
    int result = (a>b) ? a : b;
    cout<<"max:"<<result<<endl;

    return 0;
}