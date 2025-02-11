#include<iostream>
class A{
    public:
        int a, b;
        void get() {
            std::cout << "\nEnter the values of a & b: ";
            std::cin >> a >> b;
        }
};

class B: public A {
    public:
        void sum() {
            std::cout << "\nSum: " << a + b;
        }
};

class C: public B {
    public:
        void sub() {
            std::cout << "\nSub: " << a - b;
        }
};

int main() {
    B obj;
    obj.get();  
    obj.sum();  
    
    C obj1;
    obj1.get();
    
    obj1.sub(); 

    return 0;
}

