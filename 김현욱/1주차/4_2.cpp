using namespace std;
#include<iostream>
#include<string>
int main()
{
    string a, b,result;
    cin >> a >> b;
    if (a.size() > b.size())
    {
        string c;
        for (int i = 0; i < a.size() - b.size(); i++)
            c += '0';
        b = c + b;
    }
    else
    {
        string c;
        for (int i = 0; i < b.size() - a.size(); i++)
            c += '0';
        a = c + a;
    } //9999�� 1�϶� 1���� 3�ڸ��� 0 3���� ä��� ����

    int carry = 0;
    while (a.size()!=0 && b.size() !=0)
    {
        int aback = a.back() - '0'; //���ڿ����� �Ǹ����� ���ڸ� ���ڷ� �ٲ�
        int bback = b.back() - '0'; //��������
        int remain = (carry + aback + bback) % 10; //����� (9��1�����ϸ� ĳ��1 remain 0)
        carry = (carry + aback + bback) / 10; //�ø���
        result = (char)(remain + '0') + result; //��� ���ڿ��� ������
        a.pop_back();
        b.pop_back();
    }
    if(carry) //������ �ڸ� ���� �ٴ��ߴµ� ĳ���� ������ ĳ���� �Ǿտ� �ٿ������.
        result = (char)(carry+'0') + result;
    cout << result << endl;
    return 0;
}