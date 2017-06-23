#pragma once
class warrior                                       //’Ω ø¿‡
{
public:
	warrior(int _id, int _life_number, int _attack_power) :id(_id), life_number(_life_number), attack_power(_attack_power) {}
	warrior() :id(0), life_number(0), attack_power(0) {};
	warrior(const warrior& a)
	{
		id = a.id;
		life_number = a.life_number;
		attack_power = a.attack_power;
	}
	const warrior& operator =(const warrior& source);
	void set_value(int _id, int _life_number, int _attack_power)
	{
		id = _id;
		life_number = _life_number;
		attack_power = _attack_power;
	}
private:
	int id;
	int life_number;
	int attack_power;
};
class dragon :public warrior
{
public:
	dragon() :warrior(), arms_number(0), Morale(0) {}
	dragon(int _id, int _life_number, int _attack_power, int _arms_number, double _Morale) :warrior(_id, _life_number, _attack_power), arms_number(_arms_number), Morale(_Morale) {}
	dragon(const dragon& a) :warrior(a)
	{
		arms_number = a.arms_number;
		Morale = a.Morale;
	}
	const dragon&  operator =(const dragon& source);
	void set_value(int _id, int _life_number, int _attack_power, int _arms_number, double _Morale)
	{
		warrior::set_value(_id, _life_number, _attack_power);
		arms_number = _arms_number;
		Morale = _Morale;
	}

private:
	int arms_number;
	double Morale;
};
class cdragon
{
public:
	cdragon() :size(0), the_array(NULL) {}
	cdragon(int _size);
	cdragon(const cdragon& source);
	~cdragon();
	const cdragon& operator =(const cdragon& source);
	dragon& operator [](int number);
	void add(int _id, int _life_number, int _attack_power, int _arms_number, double _Morale);
	int array_size() { return size; }
	
private:
	int size;
	dragon * the_array;
};

class ninjia :public warrior
{
public:
	ninjia() :warrior(), arm1_number(0), arm2_number(0) {};
	ninjia(int _id, int _life_number, int _attack_power, int _arm1_number, int _arm2_number) :warrior(_id, _life_number, _attack_power)
	{
		arm1_number = _arm1_number;
		arm2_number = _arm2_number;
	}
	ninjia(const ninjia&a) :warrior(a)
	{
		arm1_number = a.arm1_number;
		arm2_number = a.arm2_number;
	}
	const ninjia& operator=(const ninjia& source);
	void set_value(int _id, int _life_number, int _attack_power, int _arm1_number, int _arm2_number)
	{
		warrior::set_value(_id, _life_number, _attack_power);
		arm1_number = _arm1_number;
		arm2_number = _arm2_number;
	}

private:
	int arm1_number;
	int arm2_number;
};
class cninjia
{
public:
	cninjia() :size(0), the_array(NULL) {}
	cninjia(int _size);
	cninjia(const cninjia& source);
	~cninjia();
	const cninjia& operator =(const cninjia& source);
	ninjia& operator [](int number);
	void add(int _id, int _life_number, int _attack_power, int _arm1_number, int _arm2_number);
	int array_size() { return size; }
private:
	int size;
	ninjia * the_array;
};

class iceman :public warrior
{
public:
	iceman() :warrior(), arms_number(0) {};
	iceman(int _id, int _life_number, int _attack_power, int _arms_number) :warrior(_id, _life_number, _attack_power), arms_number(_arms_number) {}
	iceman(const iceman& a) :warrior(a)
	{
		arms_number = a.arms_number;
	}
	const iceman& operator=(const iceman& source);
	void set_value(int _id, int _life_number, int _attack_power, int _arms_number)
	{
		warrior::set_value(_id, _life_number, _attack_power);
		arms_number = _arms_number;
	}
private:
	int arms_number;
};
class ciceman
{
public:
	ciceman() :size(0), the_array(NULL) {}
	ciceman(int _size);
	ciceman(const ciceman& source);
	~ciceman();
	const ciceman& operator=(const ciceman& source);
	iceman& operator[](int number);
	void add(int _id, int _life_number, int _attack_power, int _arms_number);
	int array_size() { return size; }
private:
	int size;
	iceman * the_array;
};
class lion :public warrior
{
public:
	lion(int _id, int _life_number, int _attack_power, int _loyalty) :warrior(_id, _life_number, _attack_power), loyalty(_loyalty) {}
	lion() :warrior(), loyalty(0) {}
	lion(const lion& a) :warrior(a)
	{
		loyalty = a.loyalty;
	}
	const lion& operator=(const lion& source);
	void set_value(int _id, int _life_number, int _attack_power, int _loyalty)
	{
		warrior::set_value(_id, _life_number, _attack_power);
		loyalty = _loyalty;
	}
private:
	int loyalty;
};
class clion
{
public:
	clion() :size(0), the_array(NULL) {}
	clion(int _size);
	clion(const clion& source);
	~clion();
	const clion& operator=(const clion& source);
	lion& operator[](int number);
	void add(int _id, int _life_number, int _attack_power, int _loyalty);
	int array_size() { return size; }
private:
	int size;
	lion* the_array;
};

class wolf :public warrior
{
public:
	wolf(int _id, int _life_number, int _attack_power) :warrior(_id, _life_number, _attack_power) {}
	wolf() :warrior() {}
	wolf(const lion& a) :warrior(a) {}
	const wolf& operator=(const wolf& source)
	{
		if (this != &source)
			warrior::operator=(source);
		return *this;
	}
	void set_value(int _id, int _life_number, int _attack_power) { warrior::set_value(_id, _life_number, _attack_power);  }
};
class cwolf
{
public:
	cwolf() :size(0), the_array(NULL) {}
	cwolf(int _size);
	cwolf(const cwolf& source);
	~cwolf();
	const cwolf& operator=(const cwolf& source);
	wolf& operator[](int number);
	void add(int _id, int _life_number, int _attack_power);
	int array_size() { return size; }
private:
	int size;
	wolf* the_array;
};
void zuoy4();