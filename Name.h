#ifndef NAME_H_INCLUDED
#define NAME_H_INCLUDED
#include<string>
#include<iostream>
using namespace std;
class Name
{
protected:
    string name;
public:
        void set_name(string);
        string get_name();

};
void Name::set_name(string n)
{
    name=n;
}
string Name::get_name()
{
    return name;
}

#endif // NAME_H_INCLUDED

