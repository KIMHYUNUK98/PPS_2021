#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string arr;
    string arr2;
    int count = 0;
    int du_count = 0;
    int tri_count = 0;
    int no_noun = 0;

    // while�� ���� -> break ������ �Է°��� end�϶� (strcpy�� ���ڿ��� end�� ���ؼ� 0�� ��µǸ� break)
    while(1) {
        // ���ڿ�(0 �̻� 20 ����) �� �Է¹޴´�.
        cin >> arr;
        arr2 = arr;
        if(arr.compare("end") == 0) break;
        else {
        // for �ݺ������� �ι� ���� �ݺ��� ��찡 ������ du_count�� ���ش�.
        // ee�� oo�� �ݺ��� ���� du_count�� ������ �ʴ´�.
        for(int i = 0 ; i < arr.size() ; i++) {
            if(arr[i] == arr[i+1]) {
                if(arr[i] == 'e' || arr[i] == 'o') continue;
                else du_count++;
            }
        }

        // for �ݺ������� �迭�� ������ a,e,i,o,u�� ������ count�� ������Ų��.
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
            {
                // if(arr[i] == ������ ���) �ش� �迭�� ���ڸ� a�� �ٲ۴�.
                arr[i] = 'a';
            }
            else
            {
                // else if(arr[i] == ������ ���) �ش� �迭�� ���ڸ� b�� �ٲ۴�.
                arr[i] = 'b';
            }
        }

        // for �ݺ������� ���� �ݺ��� ��찡 ������ tri_count�� ���ش�.
        for(int i = 0 ; i < arr.size() ; i++) 
        {
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2]) tri_count++;
            if(arr[i] == 'b') no_noun++;
        }

        //�ι� ���� or �� �� ���� or ������ ���� ��� Not acceptable ���
        if(du_count > 0 || tri_count > 0 || no_noun == arr.size())  
            cout << "<" << arr2 << "> " << "is not acceptable." << endl;
        else 
            cout << "<" << arr2 << "> " << "is acceptable." << endl;
            }

            du_count = 0;
            tri_count = 0;
            no_noun = 0;
        }
    return 0;
}