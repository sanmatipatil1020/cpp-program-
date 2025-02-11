#include<iostream>
using namespace std;

class A {
public:
    int a, b;
    void get() {
        cout << "Enter the values of a & b: ";
        cin >> a >> b;
    }
};

class B : public A {
public:
    int sum() {
        return a + b; 
    }
};

class C : public B {
public:
    int sub() {
        return a - b; 
    }
};

class D : public C {
public:
    void displayResults() {
        cout << "Sum: " << sum() ; 
        cout << "\nSubtraction: " << sub();  
    }
};

int main() {
    D obj;
    obj.get();  
    obj.displayResults(); 
    return 0;
}

