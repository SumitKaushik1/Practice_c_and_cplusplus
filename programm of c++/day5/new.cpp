  #include <iostream>
    using namespace std;
    namespace Box1
    { int a = 4;}
    namespace Box2
    {
        int a = 13;
    }
    int main ()
    {
        int a = 16;
        cout<<Box1::a;
        cout<<Box2::a;
        cout << a;
        return 0;
    }
