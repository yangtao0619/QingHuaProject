#include <iostream>
using namespace std;

//�ȶ���RAM
enum RAM_TYPE { RAML = 1, RAMM, RAMH };

class RAM
{
public:
	RAM_TYPE ramtype;
	RAM(RAM_TYPE type) :ramtype(type) {
		cout << "ִ����RAM�Ĺ��캯��" << endl;
	}
	RAM() {}
	~RAM() { cout << "ִ����RAM����������" << endl; }
};

//�ٶ���CPU
enum CPU_LEVEL { P1 = 1, P2, P3, P4, P5, P6, P7 };

class CPU {
public:
	enum CPU_LEVEL level;//cpu����
	int frequency;//��Ƶ
	float price;//�۸�
	CPU(CPU_LEVEL level, int frequency, float price) :level(level), frequency(frequency), price(price) {
		cout << "ִ����CPU�Ĺ��캯��" << endl;
	}
	~CPU() {
		cout << "ִ����CPU����������" << endl;
	}
	CPU() {}
};

//�ٶ���CDROM
class CdRom {
public:
	int romStorage;
	unsigned int cacheSize;
	CdRom(int romStorage, unsigned int cacheSize) {
		CdRom::romStorage = romStorage;
		CdRom::cacheSize = cacheSize;
		cout << "ִ����CdRom�Ĺ��캯��" << endl;
	}
	~CdRom() {
		cout << "ִ����CdRom����������" << endl;
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

//��̬��Ա������Ҫ���������������ⶨ�壬�ܹ����ⱻ��γ�ʼ�������⡣
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