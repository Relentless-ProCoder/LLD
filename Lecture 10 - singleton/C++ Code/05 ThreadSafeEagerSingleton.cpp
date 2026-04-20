#include <iostream>
#include <mutex>

using namespace std;

class Singleton
{
private:
    static Singleton *instance;

    Singleton()
    {
        cout << "Singleton Constructor Called!" << endl;
    }

public:
    static Singleton *getInstance()
    {
        return instance;
    }
};

// Initialize static members
Singleton *Singleton::instance = new Singleton();

int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();

    cout << (s1 == s2) << endl;
}

/*
* Advantage - easy to create
    we don't need to use if-else and locks
* DisAdvantage - if object is expensive to create (if not used)
if a big class object we create before main() (because of which it's called eager initiallization)
so big class oject if it's expensive to create and we create it and don't call it
it's a big waste of memmory, and so it's not used much
 */