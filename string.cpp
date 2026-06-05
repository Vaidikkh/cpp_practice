#include<iostream>
#include <cstring>
using namespace std;

int main(){
    // check if character is alpha numeric or not
/*    cout<<"std::isalnum"<<endl;

    cout<<"C is alphanumeric"<<std::isalnum('C')<<endl;
    cout<<"^ is alphanumeric:"<<std::isalnum('^')<<endl;
    // can use this as a test condition

    char input_char{'*'};
    if(std::isalnum(input_char)){

        cout<<input_char<<"is alphanumeric"<<endl;
    } else {
        cout<<input_char<<"is not alphanumeric"<<endl;
    }

    cout<<endl;
    cout<<"std::isalpha"<<endl;
    cout<<"c is alphabetic"<<std::isalpha('c')<<endl;
    cout<<"^ is alphabetic"<<std::isalpha('^')<<endl;
    cout<<"7 is alphabetic"<<std::isalpha('7')<<endl;


    // Check if character is blank

    cout<<endl;
    cout<<"std::isblank:"<<endl;
    char message[] { "Hello there. How are you doing?\n the sun is shining. "};
    cout<<"Message:"<<message<<endl;

    //find and print blank index
    int blank_count{};
    for(size_t i{0}; i<std::size(message);++i){
        //cout<<"Value"<<message[i]<<endl;
        if(std::isblank(message[i])){
            cout<<"Found a blank char at index:[" <<i<<"]"<<endl;
            ++blank_count;
        }
    }
    cout<<"In total we found "<<blank_count<<"blank characters."<<endl;

    // check if a character is a digit
    cout<<endl;
    cout<<"std::isdigit:"<<endl;
    char statement_str[] { "Hello there . How are you doing 342?\n the sun is shining 5423. "};

    int digit_count{};
    for(size_t i{0}; i<std::size(statement_str); ++i){
        if(std::isdigit(statement_str[i])){
            cout<<"Found digit '" << statement_str[i] << "' at index:[" << i << "]"<<endl;
            ++digit_count;
        }
    }
    cout<<"In total we found "<<digit_count<<" digits in the statement."<<endl;

    // turning a char to lowercase using the tolower() function
    cout<<endl;
    cout<<"std::istolower and std::toupper:"<<endl;
    char original_str[] { "Hello there . How are you doing ?\n the sun is shining . "};
    char dest_str[std::size(original_str)];


    for(size_t i{}; i<std::size(original_str);++i){
        dest_str[i] = std::toupper(original_str[i]);
    }

    cout<<"Original string:"<<original_str<<endl;
    cout<<"Uppercase string"<<dest_str<<endl;
    // turn this to lowercase . Change the ARRAY in place
    for(size_t i{}; i<std::size(original_str);++i){
        dest_str[i] = std::tolower(original_str[i]);
    }
    cout<<"lowercase string"<<dest_str<<endl;

    cout<<endl;
    char thought[] {"The c++ programming is the  most USed Programming Language   "};
    int lowercase_count{};
    int uppercase_count{};
    cout<<"or string"<<thought<<endl;
    for (auto character : thought) {
        if(std::islower(character)){
            cout<<" "<<character;
            ++lowercase_count;
        }
        if(std::isupper(character)){
            ++uppercase_count;
        }
    }

    cout<<"Found"<<lowercase_count<<"lowercase char in statement string"<< uppercase_count<<"uppercase char"<<endl;
*/  
    // C-string manipulation
/*    const char message1[] {" The sky is Blue"};

    const char* message2 { "The sky is Blue"};
    cout<<"message1"<<message1<<endl;

    cout<<"strlen(message1):" <<std::strlen(message1)<<endl;
    cout<<"strlen(message2):" <<std::strlen(message2)<<endl;
    cout<<"sizeof(message1):" << sizeof(message1) << endl;
    cout<<"sizeof(message2):" << sizeof(message2) << endl;
    
    // string comparision
    cout<<endl;
    cout<<"std::strcmp"<<endl;
    const char * string_data1{"alalama"};
    const char * string_data2{"dlafsmad"};

    cout<<"std::strcmp(" <<string_data1<<","<<string_data2<<"):"<<std::strcmp(string_data1, string_data2)<<endl;

    string_data1 = "ALAbama";
    string_data2 = "ALAbama";

    cout<<"std::strcmp(" <<string_data1<<","<<string_data2<<"):"<<std::strcmp(string_data1, string_data2)<<endl;
    string_data1 = "ALbama";
    string_data2 = "cLbama";
    

    size_t n{3};
    cout<<endl;
    cout<<"std::strncmp (compare first " << n << " characters)" << endl;
    cout<<"std::strncmp(" <<string_data1<<","<<string_data2<<") n="<<n<<":"<< std::strncmp(string_data1, string_data2, n)<<endl;
    char string_data3 []{ "ALcdba"};
    char string_data4 []{ "cLcdba"};
    cout<<"std::strncmp(" <<string_data3<<","<<string_data4<<") n="<<n<<":"<< std::strncmp(string_data3, string_data4, n)<<endl;

    cout<<endl;
        //Find the first occurrence of a character
    std::cout << std::endl;
    std::cout << "std::strchr : " << std::endl;
    //doc : https://en.cppreference.com/w/cpp/string/byte/strchr

    //we use std::strchr to find all the characters one by one.
    // it doesnt check for every letter
    const char  *str { "Try not. Do, or do not. There is no try." };
    char target = 'T';
    const char *result = str;
    int iterations{};

    while ((result = std::strchr(result, target)) != nullptr) {
        std::cout << "Found '" << target<< "' starting at " << result << "\n";

        // Increment result, otherwise we'll find target at the same location
        ++result;
        ++iterations;
    }
    
    std::cout << "iterations : " << iterations << std::endl;
    // it is gonna loop for every element and check for every letter 
    const char *str5 { "Try not. Do, or do not. There is no try." };
    char target5 = 'T';
    const char *result5{nullptr};
    size_t iterations5{};

    while ((result5 = std::strchr(str5, target5)) != nullptr) {
        std::cout << "Found '" << target5<< "' starting at " << result5 << "\n";

        // Increment result, otherwise we'll find target at the same location
        ++str5;
        ++iterations5;
    }

    std::cout << "iterations : " << iterations << std::endl;
    // find last occurance
    cout<<endl;
    cout<<"std::strrchr"<<endl;

    char input[] = "/hp/Documents/c++/demo.cpp";
    char* output = std::strrchr(input, '/');
    if(output)
        cout<<output+1<<endl;
*/
/*    // C-string Concatenation and Copying
    // Joining string 
    cout<<endl;
    cout<<"std::strcat:"<<endl;

    char dest[50] = "hello";
    char src[50] = "world";
    std::strcat(dest, src);
    std::strcat(dest,"Good Bye!!");
    cout<<"dest:"<<dest<<endl;
    //More concatenation
    std::cout << std::endl;
    std::cout << "More std::strcat : " << std::endl;

    char *dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
    char *source1 =
        new char[30]{' ','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','!','\0'};

    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;
    std::cout << "dest1 : " << dest1 << std::endl;
    std::cout << "Concatenating..." << std::endl;
    std::strcat(dest1, source1);

    std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
    std::cout << "dest1 : " << dest1 << std::endl;
    
    //std::strncat : concatenates n characters from src to dest and
    //returns a pointer to the result string
    //signature : char *strncat( char *dest, const char *src, std::size_t count );

    std::cout << std::endl;
    std::cout << "std::strncat:" << std::endl;

    char dest2[50] { "Hello" };

    char source2[30] = { " There is a bird on my window" };

    //You can even use the returned pointer immediately for print out
    //This is a pattern you'll see a lot in C++ code out there.
    std::cout << std::strncat(dest2, source2, 6) << std::endl;

    //Or you can do std::strncat separately and print dest2

    std::strncat(dest2, source2, 6);
    std::cout << "The concatenated string is : " << dest2 << std::endl;
   
   // coping strings
    cout<<endl;
    cout<<"std::strcpy:"<<endl;
    const char* source3 = " C++ is a multipurpose programming language.";
    char *dest3 = new char[std::strlen(source3)+1];

    std::strcpy(dest3,source3);

    cout<<"sizeof(dest3):"<<sizeof(dest3)<<endl;
    cout<<"std::strlen(dest3):"<<std::strlen(dest3)<<endl;
    cout<<"dest3:"<<dest3<<endl;
*/
    // std::string

    std::string full_name;//Empty string
    std::string planet {"Earth. Where the sky is blue"}; //Initialize with string literal
    std::string prefered_planet{planet};//Initialize with other existing string
    std::string message {"Hello there",5}; //Initialize with part of a string literal.
                                        //Contains hello
    std::string weird_message(4,'e');//Initialize with multiple copies of a char
                                    // contains eeee
    std::string greeting{"Hello World"};
    std::string saying_hello{ greeting,6,5};//Initialize with part of an existing std::string
                                            // starting at index 6, taking 5 characters.
                                            //Will contain World.


    std::cout << "full_name : " << full_name << std::endl;
    std::cout << "planet : " << planet << std::endl;
    std::cout << "prefered_planet : " << prefered_planet << std::endl;
    std::cout << "message : " << message << std::endl;
    std::cout << "weird_message : " << weird_message << std::endl;
    std::cout << "greeting : " << greeting << std::endl;
    std::cout << "saying_hello : " << saying_hello << std::endl;
    //Changing string at runtime_error
    planet = "Earth. Where the sky is blueEarth. Where the sky is blueEarth. Where the sky is blueEarth. Where the sky is blue";
    std::cout << "planet : " << planet << std::endl;
   const char *planet1 {" Earth. Where the sky is blue"};
   planet1 = "Earth. Where the sky is blue Earth. Where the sky is blue";
    cout << "planet1 : " << planet1 << std::endl;

   
   
    return 0;
}