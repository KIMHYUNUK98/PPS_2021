#include <iostream>
using namespace std;

int main() {
    int temp = 0;
    int arr[1000] = {0};
    int sum = 0;
    int num = 0;
    double avg;
    int count = 0;
    double ratio;
    
    // �׽�Ʈ ���̽� �� �Է� �ޱ�
    cin >> temp;
    
    for(int i = 0 ; i < temp ; i++) {
    // �� �׽�Ʈ ���̽� Ƚ���� ���� �Է� �ޱ�
    sum = 0;
    avg = 0;
    count = 0;
    cin >> num;
        for(int j = 0 ; j < num ; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
    avg = sum*(1.0) / num;

    for(int k = 0 ; k < temp ; k++) 
    {
        if(avg < arr[k]) count++;
    }

    cout.precision(3);
    cout << fixed << count / (double)num *100  << "%" << endl;
    }
    return 0;
}