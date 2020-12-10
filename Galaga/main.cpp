#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <chrono>

using namespace std;
using namespace System;
using namespace std::chrono;

/*COLORS*/
#define RED 12
#define WHITE 15
#define CYAN 11
#define YELLOW 14
#define GREEN 10
#define BLUE 9
#define MAGENTA 13
//////////

void gotoxy(int x, int y) { Console::SetCursorPosition(x, y); }
void color(int num) { Console::ForegroundColor = ConsoleColor(num); }

void edge() {
	color(CYAN);
	for (int i = 2; i <= 117; i++) {
		gotoxy(i, 0);  cout << char(205);
		gotoxy(i, 28); cout << char(205);
	}
	for (int i = 1; i <= 27; i++) {
		gotoxy(1, i);   cout << char(186);
		gotoxy(118, i); cout << char(186);
	}
	gotoxy(1, 0);	 cout << char(201);
	gotoxy(118, 0);	 cout << char(187);
	gotoxy(1, 28);	 cout << char(200);
	gotoxy(118, 28); cout << char(188);
}

void edgeData() {
	for (int i = 79; i <= 115; i++) {
		gotoxy(i, 1); cout << char(205);
		gotoxy(i, 27); cout << char(205);
	}
	for (int i = 2; i <= 26; i++) {
		gotoxy(78, i); cout << char(186);
		gotoxy(116, i); cout << char(186);
	}
	gotoxy(78, 1); cout << char(201);
	gotoxy(116, 1); cout << char(187);
	gotoxy(78, 27); cout << char(200);
	gotoxy(116, 27); cout << char(188);
}

void coverPage() {
	/*STARS*/
	Random r;
	int colors[6] = { 9, 10, 11, 12, 14, 15 };
	for (int i = 1; i < 150; i++) {
		color(colors[r.Next(0, 6)]);
		gotoxy(r.Next(3, 117), r.Next(2, 27));
		cout << "*";
	}

	edge();

	/*LOGO*/
	color(RED);
	gotoxy(26, 5);	cout << "   _____              _                    _____            ";
	gotoxy(26, 6);	cout << "  / ____|     /\\     | |          /\\      / ____|     /\\    ";
	gotoxy(26, 7);	cout << " | |  __     /  \\    | |         /  \\    | |  __     /  \\   ";
	gotoxy(26, 8);	cout << " | | |_ |   / /\\ \\   | |        / /\\ \\   | | |_ |   / /\\ \\  ";
	gotoxy(26, 9);	cout << " | |__| |  / ____ \\  | |____   / ____ \\  | |__| |  / ____ \\ ";
	gotoxy(26, 10); cout << "  \\_____| /_/    \\_\\ |______| /_/    \\_\\  \\_____| /_/    \\_\\ ";

	/*MENU*/
	color(WHITE);
	gotoxy(27, 13); cout << "          __         __              __  __   __        __  ";
	gotoxy(27, 14); cout << "| |\\ | | /   |  /\\  |__)     | /  \\ |_  / _  /  \\    / (_  \\ ";
	gotoxy(27, 15); cout << "| | \\| | \\__ | /--\\ | \\    __) \\__/ |__ \\__) \\__/    \\ __) / ";
	gotoxy(27, 16); cout << "        __ ___  __        __  __    __        __  __        ";
	gotoxy(27, 17); cout << "| |\\ | (_   |  |__) /  \\ /   /   | /  \\ |\\ | |_  (_     / | \\ ";
	gotoxy(27, 18); cout << "| | \\| __)  |  | \\  \\__/ \\__ \\__ | \\__/ | \\| |__ __)    \\ | /";
	gotoxy(27, 19); cout << " __  __   __  __    ___  __   __     __";
	gotoxy(27, 20); cout << "/   |__) |_  |  \\ |  |  /  \\ (_   / /   \\";
	gotoxy(27, 21); cout << "\\__ | \\  |__ |__/ |  |  \\__/ __)  \\ \\__ /";
	gotoxy(27, 22); cout << " __             __      __  ";
	gotoxy(27, 23);	cout << "(_   /\\  |   | |__)  / /  \\ \\";
	gotoxy(27, 24); cout << "__) /--\\ |__ | | \\   \\ \\_\\/ /";
}

void instructions() {
	gotoxy(30, 2);  cout << "En  Galaga   nos   enfrentamos   a  un  enjambre  de";
	gotoxy(30, 3);  cout << "alienigenas  que  son   capaces  de   dispararnos  y";
	gotoxy(30, 4);  cout << "realizar  un descenso  para  intentar impactarnos, y";
	gotoxy(30, 5);  cout << "asi aniquilarnos. Nosotros  debemos  eliminarlos con";
	gotoxy(30, 6);  cout << "nuestro  ca" << char(164) << "on de  disparo hasta  quedarnos  solos y";
	gotoxy(30, 7);  cout << "asi poder pasar al siguiente nivel. Durante el juego";
	gotoxy(30, 8);  cout << "moveremos   nuestra  nave  de  izquierda  a derecha,";
	gotoxy(30, 9);  cout << "con ayuda  de las  teclas  direccionales  para poder";
	gotoxy(30, 10); cout << "evadir los  ataques de los enemigos. El juego cuenta";
	gotoxy(30, 11); cout << "con un  total  de 4  niveles. El cambio de  nivel se";
	gotoxy(30, 12); cout << "produce    cuando   se   haya  acumulado   al  menos";
	gotoxy(30, 13); cout << "2500   puntos.  Solo  contamos  con  4  naves   para";
	gotoxy(30, 14); cout << "completar el juego." << endl;

	color(WHITE);
	gotoxy(40, 16); cout << "MOVIMIENTO";

	gotoxy(47, 17); cout << "    __  ";
	gotoxy(47, 18); cout << " ___\\ \\ ";
	gotoxy(47, 19); cout << "(___)) )";
	gotoxy(47, 20); cout << "    /_/ ";
	gotoxy(48, 22); cout << "DERECHA";

	gotoxy(34, 17); cout << "   __    ";
	gotoxy(34, 18); cout << "  / /___ ";
	gotoxy(34, 19); cout << " ( ((___)";
	gotoxy(34, 20); cout << "  \\_\\    ";
	gotoxy(34, 22); cout << "IZQUIERDA";

	gotoxy(69, 16); cout << "DISPARO";
	gotoxy(69, 17); cout << " _  _ ";
	gotoxy(69, 18); cout << "( \\/ )";
	gotoxy(69, 19); cout << " )  ( ";
	gotoxy(69, 20); cout << "(_/\\_)";
	gotoxy(68, 22); cout << "TECLA 'X'";

	gotoxy(43, 26); cout << "PRESIONE 'Q' PARA REGRESAR...";
}

void credits() {
	color(RED);
	gotoxy(45, 2);  cout << "      같�         같�      ";
	gotoxy(45, 3);  cout << "   같같같   같�   같같같   ";
	gotoxy(45, 4);  cout << "   같�      같�      같�   ";
	gotoxy(45, 5);  cout << "같같같   같같같      같같같";
	gotoxy(45, 6);  cout << "같같같   같같같      같같같";
	gotoxy(45, 7);  cout << "같같같   같같같같�   같같같";
	gotoxy(45, 8);  cout << "같같같      같같같   같같같";
	gotoxy(45, 9);  cout << "같같같      같같같   같같같";
	gotoxy(45, 10); cout << "   같같같   같�   같같같   ";
	gotoxy(45, 11); cout << "   같같같같같같같같같같�   ";
	gotoxy(45, 12);	cout << "      같같같같같같같�      ";
	gotoxy(45, 13); cout << "         같같같같�         ";

	color(WHITE);
	gotoxy(39, 15); cout << "Universidad Peruana de Ciencias Aplicadas";
	gotoxy(54, 16); cout << "2019 - 02";
	gotoxy(41, 17); cout << "Ingenieria de Sistemas de Informacion";

	color(CYAN);
	gotoxy(38, 19); cout << " HECHO POR: ESTEFANO SEBASTIAN BRAN ZAPATA";

	color(WHITE);
	gotoxy(40, 21);	cout << "Este juego ha sido elaborado como parte";
	gotoxy(40, 22); cout << "     del curso de programacion I       ";
	gotoxy(40, 23); cout << "Profesor: Juan Alfonzo Ramirez Espinoza";
	gotoxy(40, 26); cout << "      PRESIONE 'Q' PARA REGRESAR...";
}

void level1() {
	color(BLUE);
	gotoxy(20, 9);  cout << " _   _ _____     _______ _       _ ";
	gotoxy(20, 10); cout << "| \\ | |_ _\\ \\   / / ____| |     / |";
	gotoxy(20, 11); cout << "|  \\| || | \\ \\ / /|  _| | |     | |";
	gotoxy(20, 12); cout << "| |\\  || |  \\ V / | |___| |___  | |";
	gotoxy(20, 13); cout << "|_| \\_|___|  \\_/  |_____|_____| |_|";
	Sleep(1300);

	gotoxy(20, 9);  cout << "                                   ";
	gotoxy(20, 10); cout << "                                   ";
	gotoxy(20, 11); cout << "                                   ";
	gotoxy(20, 12); cout << "                                   ";
	gotoxy(20, 13); cout << "                                   ";
	Sleep(500);
}

void level2() {
	color(BLUE);
	gotoxy(20, 9);  cout << " _   _ _____     _______ _       ____  ";
	gotoxy(20, 10); cout << "| \\ | |_ _\\ \\   / / ____| |     |___ \\ ";
	gotoxy(20, 11); cout << "|  \\| || | \\ \\ / /|  _| | |       __) |";
	gotoxy(20, 12); cout << "| |\\  || |  \\ V / | |___| |___   / __/ ";
	gotoxy(20, 13); cout << "|_| \\_|___|  \\_/  |_____|_____| |_____|";
	Sleep(1300);

	gotoxy(20, 9);  cout << "                                       ";
	gotoxy(20, 10); cout << "                                       ";
	gotoxy(20, 11); cout << "                                       ";
	gotoxy(20, 12); cout << "                                       ";
	gotoxy(20, 13); cout << "                                       ";
	Sleep(500);
}

void level3() {
	color(BLUE);
	gotoxy(20, 9);  cout << " _   _ _____     _______ _       _____ ";
	gotoxy(20, 10); cout << "| \\ | |_ _\\ \\   / / ____| |     |___ / ";
	gotoxy(20, 11); cout << "|  \\| || | \\ \\ / /|  _| | |       |_ \\ ";
	gotoxy(20, 12); cout << "| |\\  || |  \\ V / | |___| |___   ___) |";
	gotoxy(20, 13); cout << "|_| \\_|___|  \\_/  |_____|_____| |____/ ";
	Sleep(1300);

	gotoxy(20, 9);  cout << "                                       ";
	gotoxy(20, 10); cout << "                                       ";
	gotoxy(20, 11); cout << "                                       ";
	gotoxy(20, 12); cout << "                                       ";
	gotoxy(20, 13); cout << "                                       ";
	Sleep(500);
}

void level4() {
	color(BLUE);
	gotoxy(20, 9);  cout << " _   _ _____     _______ _       _  _   ";
	gotoxy(20, 10); cout << "| \\ | |_ _\\ \\   / / ____| |     | || |  ";
	gotoxy(20, 11); cout << "|  \\| || | \\ \\ / /|  _| | |     | || |_ ";
	gotoxy(20, 12); cout << "| |\\  || |  \\ V / | |___| |___  |__   _|";
	gotoxy(20, 13); cout << "|_| \\_|___|  \\_/  |_____|_____|    |_|  ";
	Sleep(1300);

	gotoxy(20, 9);  cout << "                                        ";
	gotoxy(20, 10); cout << "                                        ";
	gotoxy(20, 11); cout << "                                        ";
	gotoxy(20, 12); cout << "                                        ";
	gotoxy(20, 13); cout << "                                        ";
	Sleep(500);
}

void won() {
	gotoxy(32, 6); cout << "  ____   ____  ____    ____  _____ ______    ___ ";
	gotoxy(32, 7); cout << " /    | /    ||    \\  /    |/ ___/|      |  /  _]";
	gotoxy(32, 8); cout << "|   __||  o  ||  _  ||  o  (   \\_ |      | /  [_ ";
	gotoxy(32, 9); cout << "|  |  ||     ||  |  ||     |\\__  ||_|  |_||    _]";
	gotoxy(32, 10); cout << "|  |_ ||  _  ||  |  ||  _  |/  \\ |  |  |  |   [_ ";
	gotoxy(32, 11); cout << "|     ||  |  ||  |  ||  |  |\\    |  |  |  |     |";
	gotoxy(32, 12); cout << "|___,_||__|__||__|__||__|__| \\___|  |__|  |_____|";
	Sleep(1000);

	gotoxy(14, 14); cout << "           _                _              _               _                          ";
	gotoxy(14, 15); cout << " ___  __ _| |_   ____ _ ___| |_ ___    ___| |  _   _ _ __ (_)_   _____ _ __ ___  ___  ";
	gotoxy(14, 16); cout << "/ __|/ _` | \\ \\ / / _` / __| __/ _ \\  / _ \\ | | | | | '_ \\| \\ \\ / / _ \\ '__/ __|/ _ \\ ";
	gotoxy(14, 17); cout << "\\__ \\ (_| | |\\ V / (_| \\__ \\ ||  __/ |  __/ | | |_| | | | | |\\ V /  __/ |  \\__ \\ (_) |";
	gotoxy(14, 18); cout << "|___/\\__,_|_| \\_/ \\__,_|___/\\__\\___|  \\___|_|  \\__,_|_| |_|_| \\_/ \\___|_|  |___/\\___/ ";
	Sleep(1000);
	gotoxy(42, 22); cout << "PRESIONE 'Q' PARA CONTINUAR...";
}

void youLost() {
	color(BLUE);
	gotoxy(12, 6);  cout << " ____     ___  ____   ___    ____   _____ ______    ___ ";
	gotoxy(12, 7);  cout << "|    \\   /  _]|    \\ |   \\  |    | / ___/|      |  /  _]";
	gotoxy(12, 8);  cout << "|  o  ) /  [_ |  D  )|    \\  |  | (   \\_ |      | /  [_ ";
	gotoxy(12, 9);  cout << "|   _/ |    _]|    / |  D  | |  |  \\__  ||_|  |_||    _]";
	gotoxy(12, 10); cout << "|  |   |   [_ |    \\ |     | |  |  /  \\ |  |  |  |   [_ ";
	gotoxy(12, 11); cout << "|  |   |     ||  .  \\|     | |  |  \\    |  |  |  |     |";
	gotoxy(12, 12); cout << "|__|   |_____||__|\\_||_____||____|  \\___|  |__|  |_____|";

	gotoxy(37, 14); cout << "        __ ";
	gotoxy(37, 15); cout << " __    /  ]";
	gotoxy(37, 16); cout << "|  |  /  / ";
	gotoxy(37, 17); cout << "|__| /  /  ";
	gotoxy(37, 18); cout << " __ /   \\_ ";
	gotoxy(37, 19); cout << "|  |\\     |";
	gotoxy(37, 20); cout << "|__| \\____|";

	gotoxy(29, 22); cout << "PRESIONE 'Q' PARA CONTINUAR";
}

///////////////////////////////////////////////////////////////////////

int level = 1;
bool gameover = false;
bool nextLevel = false;

struct Ship {
	struct Bullet {
		int x, y;
		bool remove;

		Bullet(int x, int y, bool remove) : x(x), y(y), remove(remove) {}
		Bullet() {}

		void move() {
			if (!remove) {
				color(GREEN);
				gotoxy(x, y); cout << " ";
				if (y > 1) y--;
				else remove = true;
				if (!remove) {
					gotoxy(x, y); cout << "*";
				}
			}
		}
	};

	int x, y, lives, score;
	Bullet* bullet;

	Ship(int x, int y, int lives) : x(x), y(y), lives(lives) {
		bullet = new Bullet(x + 2, y - 1, true);
		score = 0;
	}

	void draw() {
		color(RED);
		gotoxy(x, y);	  cout << "  " << char(215) << "  ";
		gotoxy(x, y + 1); cout << " " << "(" << char(219) << ")" << " ";
		gotoxy(x, y + 2); cout << char(192) << char(223) << char(223) << char(223) << char(217);
	}

	void erase() {
		gotoxy(x, y);	  cout << "     ";
		gotoxy(x, y + 1); cout << "     ";
		gotoxy(x, y + 2); cout << "     ";
	}

	void dead() {
		if (lives >= 0) {
			erase();
			color(BLUE); {
				gotoxy(x, y);	  cout << "  *  ";
				gotoxy(x, y + 1); cout << " *** ";
				gotoxy(x, y + 2); cout << "  *  ";
			}
			Sleep(400);

			erase();
			color(BLUE); {
				gotoxy(x, y);	  cout << "* * *";
				gotoxy(x, y + 1); cout << " *** ";
				gotoxy(x, y + 2); cout << "* * *";
			}
			Sleep(500);

			if (lives >= 1) draw();
			else gameover = true;
		}
	}

	void move() {
		draw();
		if (_kbhit())
		{
			char tecla;
			tecla = _getch();
			tecla = toupper(tecla);
			switch (tecla) {
			case 75: erase(); if (x > 3)  x += -2; draw(); break;
			case 77: erase(); if (x < 72) x += 2;  draw(); break;
			case 'X':
				if (bullet->remove) bullet = new Bullet(x + 2, y - 1, false);
				break;
			}
		}
		bullet->move();
	}
};

struct BulletEnemy {
	int x, y;
	int COLOR;
	bool remove;

	BulletEnemy(int x, int y, bool remove, int COLOR) : x(x), y(y), remove(remove), COLOR(COLOR) {}
	BulletEnemy() {}

	void move() {
		if (!remove) {
			color(COLOR);
			gotoxy(x, y); cout << " ";
			if (y < 27) y++;
			else remove = true;
			if (!remove) {
				gotoxy(x, y); cout << "*";
			}
		}
	}
};

struct Butterfly {
	int x, y, dx, dy;
	int lives;
	int value = 100;
	bool out = true;
	BulletEnemy* bullet;
	
	Butterfly(int x, int y, int dx, int dy, int lives) : x(x), y(y), dx(dx), dy(dy), lives(lives) {
		bullet = new BulletEnemy(x, y, true, YELLOW);
	}
	Butterfly() {}

	void draw() {
		color(YELLOW);
		gotoxy(x, y);	  cout << " O ";
		gotoxy(x, y + 1); cout << "OOO";
	}

	void erase() {
		gotoxy(x, y);	  cout << "   ";
		gotoxy(x, y + 1); cout << "   ";
	}
};

struct Wasp {
	int x, y, dx, dy;
	int lives;
	int value = 160;
	bool out = true;
	BulletEnemy* bullet;

	Wasp(int x, int y, int dx, int dy, int lives) : x(x), y(y), dx(dx), dy(dy), lives(lives) {
		bullet = new BulletEnemy(x, y, true, RED);
	}
	Wasp() {}

	void draw() {
		color(RED);
		gotoxy(x, y);	  cout << "!_!";
		gotoxy(x, y + 1); cout << "(�)";
	}

	void erase() {
		gotoxy(x, y);	  cout << "   ";
		gotoxy(x, y + 1); cout << "   ";
	}
};

struct Commander {
	int x, y, dx, dy;
	int lives;
	int value = 400;
	bool out = true;
	BulletEnemy* bullet;

	Commander(int x, int y, int dx, int dy, int lives) : x(x), y(y), dx(dx), dy(dy), lives(lives) {
		bullet = new BulletEnemy(x, y, true, GREEN);
	}
	Commander() {}

	void draw() {
		if (lives == 2) color(GREEN);
		else color(MAGENTA);
		gotoxy(x, y);	  cout << " |_|";
		gotoxy(x, y + 1); cout << "/같�\\";
		gotoxy(x, y + 2); cout << " [*]";
	}

	void erase() {
		gotoxy(x, y);	  cout << "     ";
		gotoxy(x, y + 1); cout << "     ";
		gotoxy(x, y + 2); cout << "     ";
	}
};

/*ERASE & DRAW ENEMIES*/
void eraseEnemies(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders) {
	for (int i = 0; i < nButterflies; i++) {
		if (butterflies[i].y <= 26 && !butterflies[i].out) butterflies[i].erase();
	}
	for (int i = 0; i < nWasps; i++) {
		if (wasps[i].y <= 26 && !wasps[i].out) wasps[i].erase();
	}
	for (int i = 0; i < nCommanders; i++) {
		if (commanders[i].y <= 26 && !commanders[i].out) commanders[i].erase();
	}
}

void drawEnemies(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders) {
	for (int i = 0; i < nButterflies; i++) {
		if (butterflies[i].y <= 26 && !butterflies[i].out && butterflies[i].lives > 0) butterflies[i].draw();
	}
	for (int i = 0; i < nWasps; i++) {
		if (wasps[i].y <= 26 && !wasps[i].out && wasps[i].lives > 0) wasps[i].draw();
	}
	for (int i = 0; i < nCommanders; i++) {
		if (commanders[i].y <= 26 && !commanders[i].out && commanders[i].lives > 0) commanders[i].draw();
	}
}
///////////////////////

void initializeEnemies(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders) {
	/*BUTTERFLIES*/
	for (int i = 0; i < nButterflies; i++) {
		if (i < nButterflies / 2) butterflies[i] = Butterfly(34, -2 - i * 2, 0, 1, 1);
		else butterflies[i] = Butterfly(38, -2 - (i - nButterflies / 2) * 2, 0, 1, 1);
	}

	/*WASPS*/
	for (int i = 0; i < nWasps; i++) {
		if (i < nWasps / 2) wasps[i] = Wasp(25 + i * 4, -2, 3, 1, 1);
		else wasps[i] = Wasp(25 + (i - nWasps / 2) * 4, -4, 3, 1, 1);
	}

	/*COMMANDERS*/
	for (int i = 0; i < nCommanders; i++) {
		commanders[i] = Commander(31 + i * 5, -3, 3, 1, 2);
	}
}

/*MOVEMENT & PATTERNS BUTTERFLY*/
void Pattern1_Butterflies(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders, int& pattern) {
	eraseEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
	for (int i = 0; i < nButterflies; i++) {
		if (butterflies[i].y + butterflies[i].dy > 0) butterflies[i].out = false;

		if (i < nButterflies / 2) {
			if (i < nButterflies / 4 && butterflies[i].y + butterflies[i].dy > 10) {
				butterflies[i].dy = 0;
				butterflies[i].dx = -4;
			}
			if (i >= nButterflies / 4 && butterflies[i].y + butterflies[i].dy > 8) {
				butterflies[i].dy = 0;
				butterflies[i].dx = -4;
			}
			if (i < nButterflies / 4 && (butterflies[i].x == (38 - ((nButterflies / 4) - i) * 4)))	butterflies[i].dx = 0;
			if (i >= nButterflies / 4 && (butterflies[i].x == (38 - ((nButterflies / 2) - i) * 4))) butterflies[i].dx = 0;
		}

		if (i >= nButterflies / 2) {
			if (i < (3 * nButterflies) / 4 && butterflies[i].y + butterflies[i].dy > 10) {
				butterflies[i].dy = 0;
				butterflies[i].dx = 4;
			}
			if (i >= (3 * nButterflies) / 4 && butterflies[i].y + butterflies[i].dy > 8) {
				butterflies[i].dy = 0;
				butterflies[i].dx = 4;
			}
			if (i < (3 * nButterflies) / 4 && (butterflies[i].x == (34 + (((3 * nButterflies) / 4) - i) * 4))) butterflies[i].dx = 0;
			if (i >= (3 * nButterflies) / 4 && (butterflies[i].x == (34 + (nButterflies - i) * 4)))			   butterflies[i].dx = 0;
		}

		if (butterflies[nButterflies - 1].y == 8) {
			butterflies[nButterflies - 1].dy = 0;
			butterflies[nButterflies / 2 - 1].dy = 0;
			pattern = 2;
			for (int k = 0; k < nButterflies; k++)
				butterflies[k].dx = 3;
		}

		if ((butterflies[nButterflies - 1].x + butterflies[nButterflies - 1].dx < 22) || (butterflies[nButterflies - 1].x + butterflies[nButterflies - 1].dx > 60))
			butterflies[i].dx *= -1;

		butterflies[i].x += butterflies[i].dx;
		butterflies[i].y += butterflies[i].dy;
	}
	drawEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
}

void movementOfAttackButterfly(Butterfly* butterflies, int nButterflies, int attack) {
	if ((butterflies[attack].y + butterflies[attack].dy) == 25)
		butterflies[attack].dy = -1;

	if (attack < nButterflies / 2) {
		if ((attack < nButterflies / 4) && (butterflies[attack].y + butterflies[attack].dy == 9))
			butterflies[attack].dy = 0;
		if ((attack >= nButterflies / 4) && (butterflies[attack].y + butterflies[attack].dy == 7))
			butterflies[attack].dy = 0;
	}

	if (attack >= nButterflies / 2) {
		if ((attack < (3 * nButterflies) / 4) && (butterflies[attack].y + butterflies[attack].dy == 9))
			butterflies[attack].dy = 0;
		if ((attack >= (3 * nButterflies) / 4) && (butterflies[attack].y + butterflies[attack].dy == 7))
			butterflies[attack].dy = 0;
	}

	butterflies[attack].y += butterflies[attack].dy;
}

void Pattern2_Butterflies(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders, int attack) {
	eraseEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
	for (int i = 0; i < nButterflies; i++) {
		if (i == attack && butterflies[attack].lives > 0 && !butterflies[attack].out) movementOfAttackButterfly(butterflies, nButterflies, attack);

		if ((butterflies[nButterflies - 1].x + butterflies[nButterflies - 1].dx < 22) || (butterflies[nButterflies - 1].x + butterflies[nButterflies - 1].dx > 60))
			butterflies[i].dx *= -1;

		butterflies[i].x += butterflies[i].dx;
		butterflies[i].y += butterflies[i].dy;
	}
	drawEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
}
/////////////////////////////

/*MOVEMENT & PATTERNS WASP*/
void movementOfAttackWasp(Wasp* wasps, int nWasps, int attack) {
	if ((wasps[attack].y + wasps[attack].dy) == 25) wasps[attack].dy = -1;

	if (attack < nWasps / 2) {
		if (wasps[attack].y + wasps[attack].dy == 5) wasps[attack].dy = 0;
	}

	if (attack >= nWasps / 2) {
		if (wasps[attack].y + wasps[attack].dy == 3) wasps[attack].dy = 0;
	}

	wasps[attack].y += wasps[attack].dy;
}

void movementWasps(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders, int attack, int time) {
	eraseEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
	for (int i = 0; i < nWasps; i++) {
		if (time > 180) {
			if (wasps[i].y + wasps[i].dy > 0) wasps[i].out = false;

			if (i < nWasps / 2 && wasps[i].y > 5 || i >= nWasps / 2 && wasps[i].y > 3) wasps[i].dy = 0;
			if (i < nWasps / 2 && time < 190 || i >= nWasps / 2 && time < 185) wasps[i].y += wasps[i].dy;
		}

		if (i == attack && wasps[attack].lives > 0 && !wasps[attack].out) movementOfAttackWasp(wasps, nWasps, attack);

		if (wasps[nWasps - 1].x + wasps[nWasps - 1].dx < 33 || wasps[nWasps - 1].x + wasps[nWasps - 1].dx > 72)
			wasps[i].dx *= -1;
		wasps[i].x += wasps[i].dx;
	}
	drawEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
}
/////////////////////////////

/*MOVEMENT & PATTERNS COMMANDERS*/
void movementOfAttackCommander(Commander* commanders, int nCommanders, int attack, int& comeBack) {
	if (commanders[attack].y + commanders[attack].dy == 17)
		commanders[attack].dy = 0;

	if (commanders[attack].y + commanders[attack].dy == 16) {
		if (commanders[attack].bullet->remove) commanders[attack].bullet = new BulletEnemy(commanders[attack].x + 3, commanders[attack].y + 2, false, GREEN);

		comeBack++;
		if (comeBack == 20) {
			commanders[attack].dy = -1; 
			comeBack = 0;
		}
	}

	if (commanders[attack].y + commanders[attack].dy == 0)
		commanders[attack].dy = 0;
	commanders[attack].y += commanders[attack].dy;
}

void movementCommanders(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders, int attack, int time, int& comeBack) {
	eraseEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
	for (int i = 0; i < nCommanders; i++) {
		if (time > 170) {
			if (commanders[i].y + commanders[i].dy > 0) commanders[i].out = false;

			if (commanders[i].y > 0) commanders[i].dy = 0;
			if ((i < nCommanders / 2 && time < 180) || (i >= nCommanders / 2 && time < 175)) commanders[i].y += commanders[i].dy;
		}

		if (i == attack && commanders[attack].lives > 0 && !commanders[attack].out) movementOfAttackCommander(commanders, nCommanders, attack, comeBack);

		if (commanders[nCommanders - 1].x + commanders[nCommanders - 1].dx < 27 || commanders[nCommanders - 1].x + commanders[nCommanders - 1].dx > 64)
			commanders[i].dx *= -1;
		commanders[i].x += commanders[i].dx;
	}
	drawEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);
}
//////////////////////////////////

void AttackEnemies(Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders, 
	int& cont1, int& cont2, int& attackB, int& shootB, int& cont3, int& cont4, int& attackW, int& shootW, int& cont5, int& attackC, int time) {
	/*ATTACK BUTTERFLIES*/
	Random r;
	if (level >= 2 && level <= 4 && cont1 > 250) {
		attackB = r.Next(0, 20);
		butterflies[attackB].dy = 1;
		cont1 = 0;
	}
	if (level >= 1 && level <= 4 && cont2 > 100) {
		shootB = r.Next(0, 20);
		butterflies[shootB].bullet = new BulletEnemy(butterflies[shootB].x, butterflies[shootB].y, false, YELLOW);
		cont2 = 0;
	}
	cont1++; cont2++;

	if (shootB >= 0 && shootB <= 19 && butterflies[shootB].lives > 0) butterflies[shootB].bullet->move();
	/////////////////////

	/*ATTACK WASPS*/
	if (level == 4 && cont3 > 200 && time < 180) {
		attackW = r.Next(0, 16);
		wasps[attackW].dy = 1;
		cont3 = 0;
	}
	if (level == 3 && level == 4 && cont4 > 70) {
		shootW = r.Next(0, 16);
		wasps[shootW].bullet = new BulletEnemy(wasps[shootW].x, wasps[shootW].y, false, RED);
		cont4 = 0;
	}
	cont3++; cont4++;

	if (shootW >= 0 && shootW <= 15 && wasps[shootW].lives > 0 && wasps[shootW].bullet->y > 1) wasps[shootW].bullet->move();
	////////////////

	/*ATTACK COMMANDERS*/
	if (cont5 > 600 && time < 170) {
		attackC = r.Next(0, 4);
		commanders[attackC].dy = 1;
		cont5 = 0;
	}

	if (attackC >= 0 && attackC <= 3 && commanders[attackC].lives > 0 && commanders[attackC].bullet->y > 1 && !commanders[attackC].bullet->remove)
		commanders[attackC].bullet->move();
	cont5++;
}

void collision(Ship* ship, Butterfly* butterflies, int nButterflies, int shootB, Wasp* wasps, int nWasps, int shootW, Commander* commanders, int nCommanders, int attackC, int& cantDead) {
	for (int i = 0; i < nButterflies; i++) {
		/*COLLISON BUTTERFLY WHIT SHIP*/
		if (butterflies[i].x + 2 >= ship->x && butterflies[i].x <= ship->x + 4 && butterflies[i].y + 1 == ship->y && butterflies[i].lives > 0) {
			ship->lives--;
			butterflies[i].lives--;
			if (butterflies[i].bullet->y > 1) gotoxy(butterflies[i].bullet->x, butterflies[i].bullet->y); cout << " ";
			ship->dead();
			cantDead++;
		}

		/*COLLISION BULLET SHIP WHIT BUTTERFLY*/
		if (ship->bullet->x >= butterflies[i].x && ship->bullet->x <= butterflies[i].x + 2 && ship->bullet->y == butterflies[i].y + 1
			&& !ship->bullet->remove && butterflies[i].lives > 0) {
			ship->bullet->remove = true;
			butterflies[i].lives--;
			if (butterflies[i].bullet->y > 1) gotoxy(butterflies[i].bullet->x, butterflies[i].bullet->y); cout << " ";
			ship->score += butterflies[i].value;
			cantDead++;
		}

		/*COLLISON BULLET BUTTERFLY WITH SHIP*/
		if (i == shootB) {
			if (butterflies[i].bullet->x >= ship->x && butterflies[i].bullet->x <= ship->x + 4 && butterflies[i].bullet->y == ship->y && !butterflies[i].bullet->remove) {
				ship->lives--;
				ship->dead();
				butterflies[i].bullet->remove = true;
				if (butterflies[i].bullet->y > 1) gotoxy(butterflies[i].bullet->x, butterflies[i].bullet->y); cout << " ";
			}
		}
	}

	for (int i = 0; i < nWasps; i++) {
		/*COLLISON WASP WHIT SHIP*/
		if (wasps[i].x + 2 >= ship->x && wasps[i].x <= ship->x + 4 && wasps[i].y + 1 == ship->y && wasps[i].lives > 0) {
			ship->lives--;
			wasps[i].lives--;
			if (wasps[i].bullet->y > 1) gotoxy(wasps[i].bullet->x, wasps[i].bullet->y); cout << " ";
			ship->dead();
			cantDead++;
		}
		
		/*COLLISION BULLET SHIP WHIT WASP*/
		if (ship->bullet->x >= wasps[i].x && ship->bullet->x <= wasps[i].x + 2 && ship->bullet->y == wasps[i].y + 1
			&& !ship->bullet->remove && wasps[i].lives > 0) {
			ship->bullet->remove = true;
			wasps[i].lives--;
			if (wasps[i].bullet->y > 1) gotoxy(wasps[i].bullet->x, wasps[i].bullet->y); cout << " ";
			ship->score += wasps[i].value;
			cantDead++;
		}

		/*COLLISON BULLET WASP WITH SHIP*/
		if (i == shootW) {
			if (wasps[i].bullet->x >= ship->x && wasps[i].bullet->x <= ship->x + 4 && wasps[i].bullet->y == ship->y && !wasps[i].bullet->remove) {
				ship->lives--;
				ship->dead();
				wasps[i].bullet->remove = true;
				if (wasps[i].bullet->y > 1) gotoxy(wasps[i].bullet->x, wasps[i].bullet->y); cout << " ";
			}
		}
	}

	for (int i = 0; i < nCommanders; i++) {
		/*COLLISION BULLET SHIP WHIT COMMANDER*/
		if (ship->bullet->x >= commanders[i].x && ship->bullet->x <= commanders[i].x + 4 && ship->bullet->y == commanders[i].y + 2
			&& !ship->bullet->remove && commanders[i].lives > 0) {
			commanders[i].lives--;
			if (commanders[i].lives == 0) {
				ship->bullet->remove = true;
				if (commanders[i].bullet->y > 1) gotoxy(commanders[i].bullet->x, commanders[i].bullet->y); cout << " ";
				ship->score += commanders[i].value;
				cantDead++;
			}
		}
		
		/*COLLISON BULLET COMMANDER WITH SHIP*/
		if (i == attackC) {
			if (commanders[i].bullet->x >= ship->x && commanders[i].bullet->x <= ship->x + 4 && commanders[i].bullet->y == ship->y && !commanders[i].bullet->remove) {
				ship->lives--;
				ship->dead();
				commanders[i].bullet->remove = true;
				if (commanders[i].bullet->y > 1) gotoxy(commanders[i].bullet->x, commanders[i].bullet->y); cout << " ";
			}
		}
	}
}

void Data(Ship* ship, int time) {
	color(WHITE);
	gotoxy(89, 5); cout << "NIVEL: " << level;

	gotoxy(89, 9); cout << "TIEMPO RESTANTE:      ";
	gotoxy(89, 9); cout << "TIEMPO RESTANTE: " << time;
	if (time == 0) gameover = true;

	gotoxy(89, 13); cout << "PUNTAJE: " << ship->score;

	/*DRAW LIVES*/
	for (int i = 0; i < ship->lives + 1; i++) {
		gotoxy(89 + i * 5, 19); cout << "     ";
		gotoxy(89 + i * 5, 20); cout << "     ";
		gotoxy(89 + i * 5, 21); cout << "     ";
	}
	for (int i = 0; i < ship->lives; i++) {
		color(WHITE);
		gotoxy(89, 17);		    cout << "VIDAS RESTANTES:";
		gotoxy(89 + i * 5, 19); cout << "  " << char(215) << "  ";
		gotoxy(89 + i * 5, 20); cout << " " << "(" << char(219) << ")" << " ";
		gotoxy(89 + i * 5, 21); cout << char(192) << char(223) << char(223) << char(223) << char(217);
	}
}

void controller(Ship* ship, Butterfly* butterflies, int nButterflies, Wasp* wasps, int nWasps, Commander* commanders, int nCommanders, int slow) {
	/*TIME*/
	int time, slowDown = 0;
	auto start = system_clock::now();
	////////

	int pattern = 1;
	int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;

	int attackB = -1, shootB = -1;
	int attackW = -1, shootW = -1;
	int attackC = -1;
	int comeBackCommand = 0;
	int cantDead = 0;

	initializeEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders);

	while (!gameover && !nextLevel) {
		auto end = system_clock::now();
		duration<double> elapsed = end - start;
		time = 200 - (int)elapsed.count();

		ship->move();

		if (pattern == 2) {
			AttackEnemies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, cont1, cont2, attackB, shootB, cont3, cont4, attackW, shootW, cont5, attackC, time);
		}

		if (slowDown > slow) {
			switch (pattern) {
			case 1: Pattern1_Butterflies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, pattern); break;
			case 2:
				Pattern2_Butterflies(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, attackB);
				movementWasps(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, attackW, time);
				movementCommanders(butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, attackC, time, comeBackCommand);
				break;
			}
			slowDown = 0;
		}
		slowDown++;

		Data(ship, time);
		Sleep(30);

		collision(ship, butterflies, nButterflies, shootB, wasps, nWasps, shootW, commanders, nCommanders, attackC, cantDead);

		if (cantDead == 40) {
			level++;
			nextLevel = true;
		}

		if (time == 0) {
			nextLevel = true;
			ship->lives--;
			level = 1;
		}

		if (ship->lives == 0) {
			gameover = true;
			nextLevel = true;
			Console::Clear();
			edge();
			edgeData();
			youLost();
		}
	}
}

int main() {
	Console::CursorVisible = false;
	char key, quit;

	/*SHIP AND ENEMIES*/
	Ship* ship;

	int nButterflies = 20;
	Butterfly* butterflies = new Butterfly[nButterflies];

	int nWasps = 16;
	Wasp* wasps = new Wasp[nWasps];

	int nCommanders = 4;
	Commander* commanders = new Commander[nCommanders];
	////////////////////

	do {
		Console::Clear();
		coverPage();
		do {
			key = _getch();
			key = toupper(key);
		} while (key != 'S' && key != 'I' && key != 'C' && key != 'Q');

		if (key != 'Q') {
			Console::Clear();

			switch (key)
			{
			case 'S':
				ship = new Ship(35, 25, 3);
				level = 1;
				do {
					Console::Clear();
					switch (level) {
					case 1: 
						nextLevel = false;
						gameover = false;
						edge();
						edgeData();
						level1();
						controller(ship, butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, 8);
						break;
					case 2:
						nextLevel = false;
						gameover = false;
						edge();
						edgeData();
						level2();
						controller(ship, butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, 6);
						break;
					case 3:
						nextLevel = false;
						gameover = false;
						edge();
						edgeData();
						level3();
						controller(ship, butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, 4);
						break;
					case 4:
						nextLevel = false;
						gameover = false;
						edge();
						edgeData();
						level4();
						controller(ship, butterflies, nButterflies, wasps, nWasps, commanders, nCommanders, 3);
						break;
					case 5:
						edge();
						color(WHITE);
						won();
						quit = 0;
						do {
							if (_kbhit()) {
								quit = _getch();
								quit = toupper(quit);
							}
						} while (quit != 'Q');
						gameover = true;

						Console::Clear();
						edge();
						credits();
						quit = 0;
						break;
					}
				} while (!gameover);
				break;
			case 'I':
				edge();
				instructions();
				break;
			case 'C':
				edge();
				credits();
				break;
			}	
			
			do {
				quit = _getch();
				quit = toupper(quit);
			} while (quit != 'Q');
		}
	} while (key != 'Q');

	return 0;
}