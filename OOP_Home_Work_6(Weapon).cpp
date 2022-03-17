#include <iostream>
#include <conio.h>
#include "Weapon.h"
using namespace std;

int main()
{
	cout << "Chose your weapon: " << endl;
	cout << "1 - Knife" << endl;
	cout << "2 - Pistol" << endl;
	cout << "3 - SubmachineGun" << endl;
	cout << "4 - Rifle" << endl;
	cout << "5 - AutomaticRifle" << endl;
	cout << "6 - Grenade" << endl;
	cout << "7 - Gun" << endl;
	cout << "8 - Musket" << endl;
	cout << "9 - RPG" << endl;
	cout << "Space - Shoot/Another action" << endl;
	cout << "Enter - Reload/Another action" << endl;
	cout << "===========================" << endl;

	Weapon** weapon = new Weapon*[9];
	weapon[0] = new Knife;
	weapon[1] = new Pistol;
	weapon[2] = new SubmachineGun;
	weapon[3] = new Rifle;
	weapon[4] = new AutomaticRifle;
	weapon[5] = new Grenade;
	weapon[6] = new Gun;
	weapon[7] = new Musket;
	weapon[8] = new RPG;

	Weapon* temp = new Weapon;
	int type;
	
	while (true)
	{
		type = _getch();
		if (type == 49)
		{
			cout << "You chose Knife" << endl;
			temp = weapon[0];
		}
		else if (type == 50)
		{
			cout << "You chose Pistol" << endl;
			temp = weapon[1];
		}
		else if (type == 51)
		{
			cout << "You chose SubmachineGun" << endl;
			temp = weapon[2];
		}
		else if (type == 52)
		{
			cout << "You chose Rifle" << endl;
			temp = weapon[3];
		}
		else if (type == 53)
		{
			cout << "You chose AutomaticRifle" << endl;
			temp = weapon[4];
		}
		else if (type == 54)
		{
			cout << "You chose Grenade" << endl;
			temp = weapon[5];
		}
		else if (type == 55)
		{
			cout << "You chose Gun" << endl;
			temp = weapon[6];
		}
		else if (type == 56)
		{
			cout << "You chose Musket" << endl;
			temp = weapon[7];
		}
		else if (type == 57)
		{
			cout << "You chose RPG" << endl;
			temp = weapon[8];
		}
		else if (type == 32) temp->Action1();
		else if (type == 13) temp->Action2();
	}
	return 0;
}