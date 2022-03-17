#pragma once
#include <iostream>
using namespace std;

class Weapon
{
public:
	virtual void Action1() { cout << "Weapon::Shoot()" << endl; }
	virtual void Action2() { cout << "Weapon::Reload()" << endl; }
};

class Knife :public Weapon
{
public:
	void Action1() override { cout << "Knife::Attack 1" << endl; }
	void Action2() override { cout << "Knife::Attack 2" << endl; }
};

class Pistol:public Weapon
{
public:
	void Action1() override { cout << "Pistol::Shoot()" << endl; }
	void Action2() override { cout << "Pistol::Reload()" << endl; }
};

class SubmachineGun : public Weapon
{
public:
	void Action1() override { cout << "SubmachineGun::Shoot()" << endl; }
	void Action2() override { cout << "SubmachineGun::Reload()" << endl; }
};

class Rifle : public Weapon
{
public:
	void Action1() override { cout << "Rifle::Shoot()" << endl; }
	void Action2() override { cout << "Rifle::Reload()" << endl; }

};

class AutomaticRifle :public Weapon
{
public:
	void Action1() override { cout << "AutomaticRifle::Shoot()" << endl; }
	void Action2() override { cout << "AutomaticRifle::Reload()" << endl; }
};

class Grenade :public Weapon
{
public:
	void Action1() override { cout << "Grenade::Pull_out_the_ring()" << endl; }
	void Action2() override { cout << "Grenade::Throw()" << endl; }
};

class Gun :public Weapon
{
public:
	void Action1() override { cout << "Gun::Shoot()" << endl; }
	void Action2() override { cout << "Gun::Reload()" << endl; }
};

class Musket :public Weapon
{
public:
	void Action1() override { cout << "Musket::Shoot()" << endl; }
	void Action2() override { cout << "Musket::Reload()" << endl; }
};

class RPG :public Weapon
{
public:
	void Action1() override { cout << "RPG::Shoot()" << endl; }
	void Action2() override { cout << "RPG::Reload()" << endl; }
};


