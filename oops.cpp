#include<iostream>
using namespace std;

/*
    class teacher {
    private:
        double salary;
        public:
        //Attributes /Properties
        string name;
        string dept;
        string subject;
    // non paramertirized constructor
        teacher(){ // constructor created by programmer and it is only accessed only when obj is created and always create cons in public
            cout<<"Hi, I am constructor"<<endl;
            dept = "CS";
        }

        // perametrized constructor
        teacher(string name , string dept, string subject){
            this->  name = name;
            this->  dept =dept;                     // this hamesha  calling object pr point krega
            this->  subject = subject;            // this subject is object subject and another sub is parametrized

        }

        // copy constructor
        teacher(teacher &orgobj){
            cout<<"I an custom copy constructor...."<<endl;
            this->name = orgobj.name;
            this->subject = orgobj.subject;
        }

        // method/ member function
        void dept_change(string new_dept) {
            
            dept = new_dept;

        }
        //setter
        void setSalary(double s){
            salary =s;
        }
        //getter
        double getSalary (){
            return salary;
        }

        void get_info(){
            cout<<"name:"<<name<<endl;
            cout<<"subject:"<<subject<<endl;
        }
    };
*/

/*    class Student{
        public:
        string name;
        double* cgpaPtr;

        Student(string name, double cgpa){
            this-> name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }
        Student(Student &obj){
            this->name = obj.name;
            // deep copy the cgpa pointer
            cgpaPtr = new double;
            *cgpaPtr = *obj.cgpaPtr;
        }

        //destructor
        ~Student(){
            cout<<"hi, I delete everything\n";
            delete cgpaPtr;
        }
        void getInfo(){
            cout<<"name:"<<name<<endl;
            cout<<"cgpa:"<<*cgpaPtr<<endl;
        }
    };
*/


/*    class Person {
        public :
        string name;
        int age;
        Person() {
        cout<<"parent constructor.."<<endl;
        }
        
        
        Person(string name,int age){
            this -> name = name;
            this-> age = age;
        }  

       ~Person(){
        cout<<"parent destructor.."<<endl;
       }
    };
    class student : public Person{
        public:
        int rollno;
        student() : Person() {
        }
        student(string name, int age, int rollno) : Person(name, age)
        {
            this ->rollno = rollno;
            cout<<"child constructor..\n"<<endl;
        }
        void getInfo(){
            cout<<"Name:"<< name<<endl;
            cout<<"age:"<<age<<endl;
            cout<<"Roll n:"<<rollno<<endl;
        }
        ~student(){
            cout<<"child destructor..\n"<<endl;
        }

    };

    class gradSt : public student{
        public:
        string researchArea;
        gradSt() : student() {
            cout<<"multilevel inheritance"<<endl;
        }
    };

*/

/*    class stud{
        public: 
        string name;
        int rollno;
    };

    class teach{
        public:
        string subject;
        int salary;
    };

    class teachAssi : public stud , public teach{
        public:
        string reasearchArea;

    };
*/

/*    class Student1 {
        public:
            string name;
        Student1(){
            cout<<"non-parameterized\n";
        }    
        Student1(string name){
                this-> name = name;
                cout<<"parametrized\n";
        }
    };
*/
    // function overloading
/*    class print{
        public:
        void show(int x){
            cout<<"int "<<x<<endl;
        }
        void show(char ch){
            cout<<"char"<<ch<<endl;
        }    
    };
*/
/*    //overriding
    class parent {
        public:
        void getInfo(){
            cout<<"parent class"<<endl;
        }
        virtual void hello(){
            cout<<"Hello from parent"<<endl;
        }
    };
    class child :public parent{
        public:
        void getInfo(){
            cout<<"child class"<<endl;
        }
        void hello(){
            cout<<"Hello from child"<<endl;
        }
    };

*/
    // Abstract class
    class shape{
        public:
        virtual void draw()= 0;
    };

    class Circle :public shape{
        public:
        void draw(){
            cout<<"Drawing a circle"<<endl;
        }
    };

    //static keyword 

    
    

int main() {
/*  // give error if we try to access anythig from the class 
    // bc class attributes are private
    teacher t1;
    t1.name = "Vaidik";
    //constructor call automatic
    teacher t1("vaidik","computerscience","c++"); // parametrized constructor
    t1.name = "Vaidik";
    t1.subject ="C++";
    
    //cout<<t1.name<<endl;
    
    //t1.setSalary(24000);
    //cout << t1.getSalary() <<endl;
    //cout<<t1.dept;
    //t1.get_info();
    // default copy constructor -invoke  when no copy cons is created by programmer 
    //teacher t2(t1);   //custom copy constructor
    //t2.get_info();
*/  
/*  Student s1("Vaidik Khandelwal",8.9);
    s1.getInfo();
    Student s2(s1);
    *(s2.cgpaPtr) = 9.3;
    s2.getInfo();
    s1.getInfo();
*/    
/*   student s1("vaidik", 23,45);    
    s1.getInfo();
    gradSt g1;
    g1.name ="keshav";
    g1.researchArea ="quantum physics";
    cout<<g1.name<<endl;
    cout<<g1.researchArea<<endl;
*/ 
/*    teachAssi t1;
    t1.name = "Ramesh";
    t1.rollno = 32;
    t1.subject = "c++";
    t1.salary = 25000;
    t1.reasearchArea = "C++";
    
    cout<<t1.name<<endl;
    cout<<t1.rollno<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.salary<<endl;
    cout<<t1.reasearchArea<<endl;
*/
   // Student1 s1("tony stark");
    //print p1;
    //p1.show(121);
    //p1.show('a');    

    //parent p1;
    //p1.getInfo();
    //child c1;
    //c1.getInfo();
    //child c1;
    //c1.hello();
    //Circle c1;
    //c1.draw();

    //increme i1;
    //i1.inc();
    //i1.inc();
    //i1.inc();


    return 0;
    

}