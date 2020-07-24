#include <iostream>
#include <string>
using namespace std;

//测试虚继承,虚继承是为了解决二义性和内存冗余的问题

//车辆基类
class Vehicle {
public:
	int Height;
	float speed;
	string color;
};

//车辆基类派生出摩托车，需要进行虚继承，避免二义性
class MotorCar :virtual public Vehicle {
public:
	float displacement;//排量
};

//自行车
class Bicycle :virtual public Vehicle {
public:
	string footPedal;//脚踏板厂家
};

//电动自行车
class MotorBicycle :public Bicycle, public MotorCar {
public:
	float batteryCapacity;//电池容量
};

int _112main() {
	MotorBicycle mb;
	mb.batteryCapacity;
	mb.color;//这里如果不是虚继承的话就会报错
	return 0;
}