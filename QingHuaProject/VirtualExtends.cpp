#include <iostream>
#include <string>
using namespace std;

//������̳�,��̳���Ϊ�˽�������Ժ��ڴ����������

//��������
class Vehicle {
public:
	int Height;
	float speed;
	string color;
};

//��������������Ħ�г�����Ҫ������̳У����������
class MotorCar :virtual public Vehicle {
public:
	float displacement;//����
};

//���г�
class Bicycle :virtual public Vehicle {
public:
	string footPedal;//��̤�峧��
};

//�綯���г�
class MotorBicycle :public Bicycle, public MotorCar {
public:
	float batteryCapacity;//�������
};

int _112main() {
	MotorBicycle mb;
	mb.batteryCapacity;
	mb.color;//�������������̳еĻ��ͻᱨ��
	return 0;
}