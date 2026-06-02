#include<iostream>
using namespace std;

int main() {
    // array
/*   int scores[10];
    int score[10];
    cout<<endl;
    scores[0] =20;
    scores[1] =20;
    scores[2] =20;
    scores[3] =20;
    scores[4] =20;
    scores[5] =20;
    scores[6] =20;
    scores[7] =20;
    scores[8] =20;
    scores[9] =20;
    scores[34] =20;



    for (size_t i{0};i<10;++i){
        score[i]= i*3;
    }
    
    cout<<"readling out scores manually"<<endl;
    cout<<"scores[0]:"<<scores[0]<<endl;
    cout<<"scores[1]:"<<scores[1]<<endl;
    cout<<"scores[2]:"<<scores[2]<<endl;
    cout<<"scores[3]:"<<scores[3]<<endl;
    cout<<"scores[4]:"<<scores[4]<<endl;
    cout<<"scores[5]:"<<scores[5]<<endl;
    cout<<"scores[6]:"<<scores[6]<<endl;
    cout<<"scores[7]:"<<scores[7]<<endl;
    cout<<"scores[8]:"<<scores[8]<<endl;
    cout<<"scores[9]:"<<scores[9]<<endl;
    for (size_t i{0};i<10;++i){
        cout<<"Score["<<i<<"]:"<<score[i]<<endl;
    }


    cout<<endl;

    double salaries[5] {52,62,54,25,32};
    for (size_t i{0};i<5;++i){
    cout<<"Salaries["<<i<<"]:"<<salaries[i]<<endl;
    }  
    // size more elements less 
    double salary[5] {52,62,32};
    for (size_t i{0};i<10;++i){
    cout<<"Salaries["<<i<<"]:"<<salary[i]<<endl;
    }  
    // not size declaration
    int class_sizes[]{10,52,68,74,4};
    for (auto i{0};i<10;++i){
    cout<<"Class size ["<<i<<"]:"<<class_sizes[i]<<endl;
    } 
     
    const int mul[] { 10,62,85};
   // mul[1] = 20; // gives error  no modification
    int sum {0};
    for (int element : scores){
        sum +=element;
    }
    cout<<"Score sum:"<<sum<<endl;
*/     
    //size()
/*    int scores[] {10,20,30,40,50,60,70,80,90    };
    cout<<"scores size:"<<std::size(scores)<<endl;
    for (size_t i {0}; i<std::size(scores); ++i){
        cout<<"scores["<<i<<"]:"<<scores[i]<<endl;
    }
    cout<<"size of scores:"<<sizeof(scores)<<endl;
    cout<<"size of scores[1]:"<<sizeof(scores[1])<<endl;
    cout<<"score item count:"<<(sizeof(scores)/sizeof(scores[0]))<<endl;
    size_t count {sizeof(scores)/sizeof(scores[0])};

    for (size_t i {0}; i<count; ++i){
        cout<<"scores["<<i<<"]:"<<scores[i]<<endl;
    }
*/  

    //array of Characters

/*    char message[6] {'d','G','f','j','w','\0'};
    //direct print
    cout<<"message:"<<message<<endl;
    for (auto c:message){
        cout<<c;
    }
    cout<<endl;
    cout<<"size :"<<std::size(message)<<endl;

    //can modify elements of char array
    cout<<endl;
    cout<<"Modify array data:" <<endl;
    message[1] ='a';
    cout<<"message :";
    for (auto c:message){
        cout<<c<<endl;
    }
    char message3[]  {'H','e','l','l','o'};
    cout<<message3<<endl;
    cout<<"size :"<<size(message3)<<endl; // will probably print some garbage value
    
    //literal  c-string
    char message4[]  {"hello"};
    cout<<message4<<endl;
    cout<<"size :"<<size(message3)<<endl; // will probably print some garbage value
    // can even have spaces b/w char
    cout<<endl;
    char message5[]  {"hello world!"};
    cout<<message5<<endl;
    cout<<"size :"<<size(message5)<<endl;
*/

    //bounds of array

    int numbers[] {1,2,3,4,5,6,7,8,9,0};
    cout<<"numbers [12]:"<<numbers[12]<<endl;
    numbers[12] = 1000;
    cout<<"number[12]:"<<numbers[12]<<endl;










    






return 0;

}