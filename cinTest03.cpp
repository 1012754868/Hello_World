#include <iostream>
#include <string>
// cin.get��ȡһ��

/* ��ȡһ�п���ʹ��istream& get ( char* s, streamsize n )

    ����istream& get ( char* s, size_t n, streamsize delim )��

    ���ߵ�������ǰ��Ĭ���Ի��з����������߿�ָ����������

    n��ʾĿ��ռ�Ĵ�С
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

/*  ����123456789
    ��ӡ1234 53

    str:6789
*/