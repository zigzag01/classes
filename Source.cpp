#include <iostream>
#include <ctime>
#include "knight.h"
#include "paladin.h"
#include <Windows.h>
using namespace std;

int main() {

	knight k1("Valera", 1000, 100, 200, 3);
	k1.printknight();
	paladin p1("Vasya", 1000, 100, 200, 3);
	p1.printpaladin();

	//игровой цикл
	while (true) {
		//удар рыцаря по паладину
		cout << "Knight hits paladin\n";
		p1.setHP(p1.getHP() - k1.getdamage());
		p1.printpaladin();
		//проверка на смерть
		if (p1.getHP() <= 0) {
			cout << "Paladin died, knight win!\n";
			break;
		}
		//удар паладина по рыцарю
		cout << "Paladin hits knight\n";
		k1.setHP(k1.getHP() - p1.getdamage());
		k1.printknight();
		//проверка на смерть
		if (k1.getHP() <= 0) {
			cout << "Knight died, paladin win!\n";
			break;
		}
	}

	return 0;
}