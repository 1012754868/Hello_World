#include <iostream>
#include <string>

using namespace std;

int main(){
    
    char array[20]={NULL};
    cin.getline(array,5);// ����ָ�������� ʹ������һ��
    // cin.getline(array,20,'\n');
    cout<<array<<endl;

    // ע�⣬cin.getline��cin.get�������ǣ�cin.getline���Ὣ���������߻��з����������뻺������
    string str;
    getline(cin,str);
    cout<<"str:"<<str<<endl;
    
    system("pause");
    return 0;
    
}

/*  ����:123456789
    ��ӡ:1234
          str:
*/