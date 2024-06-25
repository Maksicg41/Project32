#include <iostream>

using namespace std;

void printArr(int arr[], int dimention);
float averageArr(int arr[], int dimention);

int main()
{
    int massiv[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arDimention = sizeof(massiv) / sizeof(int);
    cout << "��������� ��������� ����� �������� ��������������� � ������� �����" << endl;
    printArr(massiv, arDimention);
    cout <<  "������� �������� = " << averageArr(massiv, arDimention) << endl;
    return 0;
}

void printArr(int arr[], int dimention)
{
    cout << "������ �������: ";
    for (int i = 0; i < dimention; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

float averageArr(int arr[], int dimention)
{
    float average = 0;
    for (int i = 0; i < dimention; i++)
    {
        average += arr[i];
    }
    average /= dimention;
    return average;
}