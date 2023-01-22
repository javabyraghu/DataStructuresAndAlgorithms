#include <iostream>
using namespace std;

template <class T>
class Arithmetic {
private:
  T a;
  T b;
public:
  Arithmetic(T a,T b);
  T add();
  T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}

template <class T>
T Arithmetic<T>::add() {
    T c;
    c=a+b;
    return c;
}
template <class T>
T Arithmetic<T>::sub() {
    T c;
    c = a-b;
    return c;
}


int main()
{
    Arithmetic<int> a1(100,20);
    cout<<a1.add()<<" "<<a1.sub()<<endl;
    
    Arithmetic<float> a2(141.52,75.75);
    cout<<a2.add()<<" "<<a2.sub()<<endl;
    return 0;
}

