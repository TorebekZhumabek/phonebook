#include <iostream>
#include <cstring>
using namespace std;

class phonebook{
public:
    char name[80];
    int areacode;
    int prefix;
    int num;
    phonebook(char *n, int a, int p, int nm){
        strcpy(name,n);
        areacode=a;
        prefix=p;
        num=nm;
    }
};

ostream &operator <<(ostream &stream, phonebook o){
    stream<<o.name<<" ";
    stream<<"("<<o.areacode<<")";
    stream<<o.prefix<<"-"<<o.num<<"\n";

    return stream;
}

int main(){
    phonebook a("Ted",111,545,692);
    phonebook b("Alan",740,8,692);
    phonebook c("Tom",9621,75,692);

    cout<<a<<b<<c;
    return 0;
}
