#include <iostream>
#include <string>

using namespace std;

int main(){
    
    char array[20]={NULL};
    cin.getline(array,5);// 或者指定结束符 使用下面一行
    // cin.getline(array,20,'\n');
    cout<<array<<endl;

    // 注意，cin.getline与cin.get的区别是，cin.getline不会将结束符或者换行符残留在输入缓冲区中
    string str;
    getline(cin,str);
    cout<<"str:"<<str<<endl;
    
    system("pause");
    return 0;
    
}

/*  输入:123456789
    打印:1234
          str:
*/