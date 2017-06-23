#include<iostream>
#include"head.h"
using namespace std;
const warrior& warrior::operator=(const warrior& source)
{
	id = source.id;
	life_number = source.life_number;
	attack_power = source.attack_power;
	return *this;
}
const dragon& dragon::operator=(const dragon& source)
{
	if (this != &source)
	{
		warrior::operator=(source);
		arms_number = source.arms_number;
		Morale = source.Morale;
	}
	return *this;
}
cdragon::cdragon(int _size)
{
	size = _size;
	if (0 == size)
		the_array = NULL;
	else
		the_array = new dragon[size];
}
cdragon::cdragon(const cdragon& source)
{
	size = source.size;
	if (0 == size)
		the_array = NULL;
	else
	{
		the_array = new dragon[size];
		for (int i = 0; i < size; ++i)
		{
			the_array[i] = source.the_array[i];
		}
	}

}
dragon& cdragon::operator [](int number)
{
		return the_array[number];
}
cdragon::~cdragon()
{
	if (0 != size)
		delete[] the_array;
}
const cdragon&cdragon::operator=(const cdragon& source)
{
	if (this == &source)
		return *this;
	if (0 == source.size)
	{
		the_array = NULL;
		size = 0;
		return *this;
	}

	else
	{
		if (size > source.size)
		{
			for (int i = 0; i < size; ++i)
			{
				the_array[i] = source.the_array[i];
			}
			size = source.size;
		}

		else
		{
			if (!the_array)
				delete[] the_array;
			the_array = new dragon[source.size];
			size = source.size;
		}
	}
	return *this;
}
void cdragon::add(int _id, int _life_number, int _attack_power, int _arms_number, double _Morale)
{
	if (the_array)
	{
		dragon *temp = new dragon[size + 1];
		for (int i = 0; i < size; ++i)
			temp[i] = the_array[i];
		delete[] the_array;
		the_array = temp;
	}
	else
		the_array = new dragon[1];
	the_array[size++].set_value(_id, _life_number, _attack_power, _arms_number, _Morale);

}
const ninjia& ninjia::operator=(const ninjia& source)
{
	if (this != &source)
	{
		warrior::operator=(source);
		arm1_number = source.arm1_number;
		arm2_number = source.arm2_number;
	}
	return *this;
}
cninjia::cninjia(int _size)
{
	size = _size;
	if (0 == size)
		the_array = NULL;
	else
		the_array = new ninjia[size];
}
cninjia::cninjia(const cninjia& source)
{
	size = source.size;
	if (0 == size)
		the_array = NULL;
	else
	{
		the_array = new ninjia[size];
		for (int i = 0; i < size; ++i)
		{
			the_array[i] = source.the_array[i];
		}
	}
}
cninjia::~cninjia()
{
	if (0 != size)
		delete[] the_array;
}
const cninjia& cninjia::operator=(const cninjia& source)
{
	if (this == &source)
		return *this;
	if (0 == source.size)
	{
		the_array = NULL;
		size = 0;
		return *this;
	}

	else
	{
		if (size > source.size)
		{
			for (int i = 0; i < size; ++i)
			{
				the_array[i] = source.the_array[i];
			}
			size = source.size;
		}

		else
		{
			if (!the_array)
				delete[] the_array;
			the_array = new ninjia[source.size];
			size = source.size;
		}
	}
	return *this;
}
ninjia& cninjia::operator[](int number)
{
		return the_array[number];
}
void cninjia::add(int _id, int _life_number, int _attack_power, int _arm1_number, int _arm2_number)
{

	if (the_array)
	{
		ninjia *temp = new ninjia[size + 1];
		for (int i = 0; i < size; ++i)
			temp[i] = the_array[i];
		delete[] the_array;
		the_array = temp;
	}
	else
		the_array = new ninjia[1];
	the_array[size++].set_value(_id, _life_number, _attack_power, _arm1_number, _arm2_number);

}
const iceman& iceman::operator=(const iceman& source)
{
	if (this != &source)
	{
		warrior::operator=(source);
		arms_number = source.arms_number;
	}
	return *this;
}
ciceman::ciceman(int _size)
{
	size = _size;
	if (0 == size)
		the_array = NULL;
	else
		the_array = new iceman[size];
}
ciceman::ciceman(const ciceman & source)
{
	size = source.size;
	if (0 == size)
		the_array = NULL;
	else
	{
		the_array = new iceman[size];
		for (int i = 0; i < size; ++i)
		{
			the_array[i] = source.the_array[i];
		}
	}
}
ciceman::~ciceman()
{
	if (0 != size)
		delete[] the_array;
}
const ciceman & ciceman::operator=(const ciceman & source)
{
	if (this == &source)
		return *this;
	if (0 == source.size)
	{
		the_array = NULL;
		size = 0;
		return *this;
	}

	else
	{
		if (size > source.size)
		{
			for (int i = 0; i < size; ++i)
			{
				the_array[i] = source.the_array[i];
			}
			size = source.size;
		}

		else
		{
			if (!the_array)
				delete[] the_array;
			the_array = new iceman[source.size];
			size = source.size;
		}
	}
	return *this;
}
iceman & ciceman::operator[](int number)
{
		return the_array[number];
}
void ciceman::add(int _id, int _life_number, int _attack_power, int _arms_number)
{
	if (the_array)
	{
		iceman *temp = new iceman[size + 1];
		for (int i = 0; i < size; ++i)
			temp[i] = the_array[i];
		delete[] the_array;
		the_array = temp;
	}
	else
		the_array = new iceman[1];
	the_array[size++].set_value(_id, _life_number, _attack_power, _arms_number);
}
const lion& lion::operator=(const lion& source)
{
	warrior::operator=(source);
	loyalty = source.loyalty;
	return *this;
}
clion::clion(int _size)
{
	size = _size;
	if (0 == size)
		the_array = NULL;
	else
		the_array = new lion[size];
}
clion::clion(const clion & source)
{
	size = source.size;
	if (0 == size)
		the_array = NULL;
	else
	{
		the_array = new lion[size];
		for (int i = 0; i < size; ++i)
		{
			the_array[i] = source.the_array[i];
		}
	}
}
clion::~clion()
{
	if (0 != size)
		delete[] the_array;
}
const clion & clion::operator=(const clion & source)
{
	if (this == &source)
		return *this;
	if (0 == source.size)
	{
		the_array = NULL;
		size = 0;
		return *this;
	}

	else
	{
		if (size > source.size)
		{
			for (int i = 0; i < size; ++i)
			{
				the_array[i] = source.the_array[i];
			}
			size = source.size;
		}

		else
		{
			if (!the_array)
				delete[] the_array;
			the_array = new lion[source.size];
			size = source.size;
		}
	}
	return *this;
}
lion & clion::operator[](int number)
{
		return the_array[number];
}
void clion::add(int _id, int _life_number, int _attack_power, int _loyalty)
{
	if (the_array)
	{
		lion *temp = new lion[size + 1];
		for (int i = 0; i < size; ++i)
			temp[i] = the_array[i];
		delete[] the_array;
		the_array = temp;
	}
	else
		the_array = new lion[1];
	the_array[size++].set_value(_id, _life_number, _attack_power, _loyalty);
}
cwolf::cwolf(int _size)
{
	size = _size;
	if (0 == size)
		the_array = NULL;
	else
		the_array = new wolf[size];
}
cwolf::cwolf(const cwolf & source)
{
	size = source.size;
	if (0 == size)
		the_array = NULL;
	else
	{
		the_array = new wolf[size];
		for (int i = 0; i < size; ++i)
		{
			the_array[i] = source.the_array[i];
		}
	}
}
cwolf::~cwolf()
{
	if (0 != size)
		delete[] the_array;
}
const cwolf & cwolf::operator=(const cwolf & source)
{
	if (this == &source)
		return *this;
	if (0 == source.size)
	{
		the_array = NULL;
		size = 0;
		return *this;
	}

	else
	{
		if (size > source.size)
		{
			for (int i = 0; i < size; ++i)
			{
				the_array[i] = source.the_array[i];
			}
			size = source.size;
		}

		else
		{
			if (!the_array)
				delete[] the_array;
			the_array = new wolf[source.size];
			size = source.size;
		}
	}
	return *this;
}
wolf & cwolf::operator[](int number)
{
		return the_array[number];
}
void cwolf::add(int _id, int _life_number, int _attack_power)
{

	if (the_array)
	{
		wolf *temp = new wolf[size + 1];
		for (int i = 0; i < size; ++i)
			temp[i] = the_array[i];
		delete[] the_array;
		the_array = temp;
	}
	else
		the_array = new wolf[1];
	the_array[size++].set_value(_id, _life_number, _attack_power);
}
void zuoy4()
{
	int r_life_number = 0, b_life_number, times = 0, min_warrior = 10000;     //分别表示红方生命值，蓝方，计时变量,记录战士的最小生命值
	int begin_life_number[5] = { 0 }, r_headquarter[5] = { 0 }, b_headquarter[5] = { 0 };  //记录战士产生消耗的生命值,红白双方的仓库
	int r_key = 0, b_key = 0;                                                      //用来标记生产到哪一类战士
	int r_number = 0, b_number = 0;													//记录产生战士的个数
	cin >> r_life_number;
	b_life_number = r_life_number;
	for (int i = 0; i < 5; ++i)
	{
		cin >> begin_life_number[i];
		if (begin_life_number[i] < min_warrior)
			min_warrior = begin_life_number[i];
	}
	int &dragon_b_life = begin_life_number[0], &ninja_b_life = begin_life_number[1], &iceman_b_life = begin_life_number[2], &lion_b_life = begin_life_number[3], &wolf_b_life = begin_life_number[4];
	//使用引用定义变量的别名增加可读性

	cdragon r_the_dragon, b_the_dragon;;                  //生成战士的动态数组对象
	cninjia r_the_ninjia, b_the_ninjia;
	ciceman r_the_iceman, b_the_iceman;
	clion r_the_lion, b_the_lion;
	cwolf r_the_wolf, b_the_wolf;

	int r_ifend = 1, b_ifend = 1;
	while (r_ifend == 1 || b_ifend == 1)            //计时终止的条件
	{
		if (r_life_number >= min_warrior)
		{
			if (times < 10)
				cout << "00" << times << ' ';
			else if (times < 100)
				cout << '0' << times << ' ';
			else
				cout << times << ' ';
			switch (r_key)
			{
			case 0: ++r_key;
				if (r_life_number > iceman_b_life)
				{
					++r_number;
					r_the_iceman.add(r_number, iceman_b_life, 0, r_number % 3);
					cout << "red iceman " << r_number << " bron with strength " << iceman_b_life << ',' << ++r_headquarter[1] << " iceman in red headquarter" << endl;
					cout << "It has a sword" << endl;
					r_life_number -= iceman_b_life;
					break;
				}
			case 1: ++r_key;
				if (r_life_number > lion_b_life)
				{
					++r_number;
					r_the_lion.add(r_number, lion_b_life, 0, r_life_number - lion_b_life);
					cout << "red lion " << r_number << " born with strength " << lion_b_life << ',' << ++r_headquarter[1] << " lion in red headquarter" << endl;
					cout << "It's loyalty is " << r_life_number - lion_b_life << endl;
					r_life_number -= lion_b_life;
					break;
				}
			case 2: ++r_key;
				if (r_life_number > wolf_b_life)
				{
					++r_number;
					r_the_wolf.add(r_number, wolf_b_life, 0);
					cout << "red wolf " << r_number << " born with strength " << wolf_b_life << ',' << ++r_headquarter[2] << " wolf in red headquarter" << endl;
					r_life_number -= wolf_b_life;
					break;
				}
			case 3: ++r_key;
				if (r_life_number > ninja_b_life)
				{
					++r_number;
					r_the_ninjia.add(r_number, ninja_b_life, 0, r_number % 3, (r_number + 1) % 3);
					cout << "red ninja " << r_number << " born with strength " << ninja_b_life << ',' << ++r_headquarter[3] << " ninja in red headquarter" << endl;
					cout << "It has a bomb and a arrow" << endl;
					r_life_number -= ninja_b_life;
					break;
				}
			case 4: r_key = 0;                               //标记重置，重头开始
				if (r_life_number > dragon_b_life)
				{
					++r_number;
					r_the_dragon.add(r_number, dragon_b_life, 0, r_number % 3, (double)(r_life_number - dragon_b_life) / dragon_b_life);
					cout << "red dragon " << r_number << " born with strength " << dragon_b_life << ',' << ++r_headquarter[4] << " dragon in red headquarter" << endl;
					cout << "It has a arrow,and it's morale is " << (double)(r_life_number - dragon_b_life) / dragon_b_life << endl;
					r_life_number -= dragon_b_life;
					break;
				}
			}
		}
		else
		{
			if (times < 10)
				cout << "00" << times << ' ';
			else if (times < 100)
				cout << '0' << times << ' ';
			else
				cout << times << ' ';
			if (1==r_ifend)
			{
				r_ifend = 0;
				cout << "red headquarter stops making warriors" << endl;
			}
		}

		if (b_life_number >= min_warrior)
		{
			if (times < 10)
				cout << "00" << times << ' ';
			else if (times < 100)
				cout << '0' << times << ' ';
			else
				cout << times << ' ';
			switch (b_key)
			{
			case 0: ++b_key;
				if (b_life_number > lion_b_life)
				{
					++b_number;
					b_the_lion.add(b_number, lion_b_life, 0, b_life_number - lion_b_life);
					cout << "blue lion " << b_number << " born with strength " << lion_b_life << ',' << ++b_headquarter[0] << " lion in blue headquarter" << endl;
					cout << "It's loyalty is " << b_life_number - lion_b_life << endl;
					b_life_number -= lion_b_life;
					break;
				}
			case 1: ++b_key;
				if (b_life_number > dragon_b_life)
				{
					++b_number;
					b_the_dragon.add(b_number, dragon_b_life, 0, b_number % 3, (double)(b_life_number - dragon_b_life) / dragon_b_life);
					cout << "blue dragon " << b_number << " born with strength " << dragon_b_life << ',' << ++b_headquarter[1] << " dragon in blue headquarter" << endl;
					cout << "It has a arrow,and it's morale is " << (double)(b_life_number - dragon_b_life) / dragon_b_life << endl;
					b_life_number -= dragon_b_life;
					break;
				}
			case 2: ++b_key;
				if (b_life_number > ninja_b_life)
				{
					++b_number;
					b_the_ninjia.add(b_number, ninja_b_life, 0, b_number % 3, (b_number + 1) % 3);
					cout << "blue ninja " << b_number << " born with strength " << ninja_b_life << ',' << ++b_headquarter[2] << " ninja in blue headquarter" << endl;
					cout << "It has a bomb and a arrow" << endl;
					b_life_number -= ninja_b_life;
					break;
				}
			case 3: ++b_key;
				if (b_life_number > iceman_b_life)
				{
					++b_number;
					b_the_iceman.add(b_number, iceman_b_life, 0, b_number % 3);
					cout << "blue iceman " << b_number << " bron with strength " << iceman_b_life << ',' << ++b_headquarter[3] << " iceman in blue headquarter" << endl;
					cout << "It has a sword" << endl;
					b_life_number -= iceman_b_life;
					break;
				}
			case 4: b_key = 0;                               //标记重置，重头开始
				if (b_life_number > wolf_b_life)
				{
					++b_number;
					b_the_wolf.add(b_number, wolf_b_life, 0);
					cout << "blue wolf " << b_number << " born with strength " << wolf_b_life << ',' << ++b_headquarter[4] << " wolf in blue headquarter" << endl;
					b_life_number -= wolf_b_life;
					break;
				}
			}
		}
		else
		{
			if (times < 10)
				cout << "00" << times << ' ';
			else if (times < 100)
				cout << '0' << times << ' ';
			else
				cout << times << ' ';
			if (1 == b_ifend)
			{
				b_ifend = 0;
				cout << "blue headquarter stops making warriors" << endl;
			}
		}


		++times;

	}

}