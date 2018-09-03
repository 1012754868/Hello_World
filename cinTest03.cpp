#include <iostream>
#include <string>
// cin.get读取一行

/* 读取一行可以使用istream& get ( char* s, streamsize n )

    或者istream& get ( char* s, size_t n, streamsize delim )。

    二者的区别是前者默认以换行符结束，后者可指定结束符。

    n表示目标空间的大小
*/

using namespace std;

int main(){

    char a;
    char array[20]={NULL};

    cin.get(array,5);
    cin.get(a);
    cout<<array<<" "<<(int)a<<endl;

    string str;
    getline(cin,str);
    cout<<"str:"<<str<<endl;

    system("pause");
    return 0;
}

/*  输入123456789
    打印1234 53

    str:6789
*/