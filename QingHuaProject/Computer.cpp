#include <iostream>
using namespace std;

//先定义RAM
enum RAM_TYPE { RAML = 1, RAMM, RAMH };

class RAM
{
public:
	RAM_TYPE ramtype;
	RAM(RAM_TYPE type) :ramtype(type) {
		cout << "执行了RAM的构造函数" << endl;
	}
	RAM() {}
	~RAM() { cout << "执行了RAM的析构函数" << endl; }
};

//再定义CPU
enum CPU_LEVEL { P1 = 1, P2, P3, P4, P5, P6, P7 };

class CPU {
public:
	enum CPU_LEVEL level;//cpu级别
	int frequency;//主频
	float price;//价格
	CPU(CPU_LEVEL level, int frequency, float price) :level(level), frequency(frequency), price(price) {
		cout << "执行了CPU的构造函数" << endl;
	}
	~CPU() {
		cout << "执行了CPU的析构函数" << endl;
	}
	CPU() {}
};

//再定义CDROM
class CdRom {
public:
	int romStorage;
	unsigned int cacheSize;
	CdRom(int romStorage, unsigned int cacheSize) {
		CdRom::romStorage = romStorage;
		CdRom::cacheSize = cacheSize;
		cout << "执行了CdRom的构造函数" << endl;
	}
	~CdRom() {
		cout << "执行了CdRom的析构函数" << endl;
	}
	CdRom() {}
};

class Computer {
public:
	CPU cpu;
	CdRom cdRom;
	RAM ram;
	Computer(CPU cpu, CdRom cdRom, RAM ram) {
	}
	Computer() {}
};

class China {
public:
	static unsigned int BUILT_TIME;
};

//静态成员变量需要在类中声明，类外定义，能够避免被多次初始化的问题。
unsigned int China::BUILT_TIME = 1949;

int _main() {
	RAM ram(RAM_TYPE::RAML);
	cout << "ram type is " << ram.ramtype << endl;

	CPU cpu(CPU_LEVEL::P1, 23000, 13000);
	cout << "cpu type is " << cpu.frequency << endl;

	Computer computer;
	cout << "computer type is " << computer.cpu.level << endl;

	unsigned int timer = China::BUILT_TIME;
	cout << " timer is " << timer << endl;
	return 0;
}