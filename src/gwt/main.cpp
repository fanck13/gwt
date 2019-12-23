#include <iostream>

class example{
public:
    int a;
    double b;
};

template <class T>
class Wrapper{
public:
    Wrapper(T _obj){
        obj = _obj;
    }

    void say_hello()
    {
        std::cout<<"Hello World"<<std::endl;
    }

public:
    T obj;
};

#define GIVEN(obj) [=](){return Wrapper<decltype(obj)>(obj);}()
#define THEN()

int main()
{
    example e;


    auto a = Wrapper<decltype(e)>(e);

    GIVEN(e).THEN();

    return 0;
}