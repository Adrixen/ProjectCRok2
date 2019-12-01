#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>

using namespace sf;


class pola
{
public:
	int posxs;
	int posxk;
	int posys;
	int posyk;
	int kolor;
};



int main()
{
	std::vector<CircleShape>koleczka;
	pola tab[9][17];
	//wszystkie pola puste
	for (int a = 0; a < 9; a++)
	{
		for (int i = 1; i < 17; i++)
		{
			tab[a][i].kolor = 0;
		}
	}
	// okreœlenie pozycji pul
	for (int a = 0; a < 9; a += 2)
	{
		for (int i = 0; i < 17; i += 2)
		{
			tab[a][i].posxs = 22 + i / 2 * 68 + i / 2 * 8;
			tab[a][i].posxk = 89 + i / 2 * 68 + i / 2 * 8;
			tab[a][i].posys = 22 + a * 68 + a * 8;
			tab[a][i].posyk = 89 + a * 68 + a * 8;
			if (a != 8)tab[a + 1][i + 1].posxs = 60 + i / 2 * 68 + i / 2 * 8;
			if (a != 8)tab[a + 1][i + 1].posxk = 127 + i / 2 * 68 + i / 2 * 8;
			if (a != 8)tab[a + 1][i + 1].posys = 22 + 68 * (a + 1) + 8 * (a + 1);
			if (a != 8)tab[a + 1][i + 1].posyk = 89 + 68 * (a + 1) + 8 * (a + 1);
		}
	}
	//od³¹czenie nie u¿ywanych pól
	for (int a = 0; a < 9; a += 2)
	{
		for (int i = 0; i < 17; i += 2)
		{
			tab[a][i + 1].kolor = 3;
			if (a != 8)tab[a + 1][i].kolor = 3;
		}
	}
	tab[0][0].kolor = 3;
	tab[0][2].kolor = 3;
	tab[0][14].kolor = 3;
	tab[0][16].kolor = 3;

	tab[8][0].kolor = 3;
	tab[8][2].kolor = 3;
	tab[8][14].kolor = 3;
	tab[8][16].kolor = 3;

	tab[1][1].kolor = 3;
	tab[1][15].kolor = 3;

	tab[7][1].kolor = 3;
	tab[7][15].kolor = 3;

	tab[2][0].kolor = 3;
	tab[2][16].kolor = 3;

	tab[6][0].kolor = 3;
	tab[6][16].kolor = 3;

	// pola z kulkami
	tab[0][4].kolor = 1;
	tab[0][6].kolor = 1;
	tab[0][8].kolor = 1;
	tab[0][10].kolor = 1;
	tab[0][12].kolor = 1;

	tab[8][4].kolor = 2;
	tab[8][6].kolor = 2;
	tab[8][8].kolor = 2;
	tab[8][10].kolor = 2;
	tab[8][12].kolor = 2;

	tab[1][3].kolor = 1;
	tab[1][5].kolor = 1;
	tab[1][7].kolor = 1;
	tab[1][9].kolor = 1;
	tab[1][11].kolor = 1;
	tab[1][13].kolor = 1;

	tab[7][3].kolor = 2;
	tab[7][5].kolor = 2;
	tab[7][7].kolor = 2;
	tab[7][9].kolor = 2;
	tab[7][11].kolor = 2;
	tab[7][13].kolor = 2;

	tab[2][6].kolor = 1;
	tab[2][8].kolor = 1;
	tab[2][10].kolor = 1;

	tab[6][6].kolor = 2;
	tab[6][8].kolor = 2;
	tab[6][10].kolor = 2;

	//CircleShape koloB1(25);
	//CircleShape koloB2(25);
	//CircleShape koloB3(25);
	//CircleShape koloB4(25);
	//CircleShape koloB5(25);
	//CircleShape koloB6(25);
	//CircleShape koloB7(25);
	//CircleShape koloB8(25);
	//CircleShape koloB9(25);
	//CircleShape koloB10(25);
	//CircleShape koloB11(25);
	//CircleShape koloB12(25);
	//CircleShape koloB13(25);
	//CircleShape koloB14(25);

	//CircleShape koloC1(25);
	//CircleShape koloC2(25);
	//CircleShape koloC3(25);
	//CircleShape koloC4(25);
	//CircleShape koloC5(25);
	//CircleShape koloC6(25);
	//CircleShape koloC7(25);
	//CircleShape koloC8(25);
	//CircleShape koloC9(25);
	//CircleShape koloC10(25);
	//CircleShape koloC11(25);
	//CircleShape koloC12(25);
	//CircleShape koloC13(25);
	//CircleShape koloC14(25);

	//koloB1.setPosition(Vector2f(195, 55));
	//koloB2.setPosition(Vector2f(265, 55));
	//koloB3.setPosition(Vector2f(335, 55));
	//koloB4.setPosition(Vector2f(405, 55));
	//koloB5.setPosition(Vector2f(475, 55));
	//koloB6.setPosition(Vector2f(160, 125));
	//koloB7.setPosition(Vector2f(230, 125));
	//koloB8.setPosition(Vector2f(300, 125));
	//koloB9.setPosition(Vector2f(370, 125));
	//koloB10.setPosition(Vector2f(440, 125));
	//koloB11.setPosition(Vector2f(510, 125));
	//koloB12.setPosition(Vector2f(265, 195));
	//koloB13.setPosition(Vector2f(335, 195));
	//koloB14.setPosition(Vector2f(405, 195));
	//koleczka.push_back(koloB1);
	//koleczka.push_back(koloB2);
	//koleczka.push_back(koloB3);
	//koleczka.push_back(koloB4);
	//koleczka.push_back(koloB5);
	//koleczka.push_back(koloB6);
	//koleczka.push_back(koloB7);
	//koleczka.push_back(koloB8);
	//koleczka.push_back(koloB9);
	//koleczka.push_back(koloB10);
	//koleczka.push_back(koloB11);
	//koleczka.push_back(koloB12);
	//koleczka.push_back(koloB13);
	//koleczka.push_back(koloB14);
	//CZARNE

	//koloC1.setPosition(Vector2f(195, 615));
	//koloC2.setPosition(Vector2f(265, 615));
	//koloC3.setPosition(Vector2f(335, 615));
	//koloC4.setPosition(Vector2f(405, 615));
	//koloC5.setPosition(Vector2f(475, 615));
	//koloC6.setPosition(Vector2f(160, 545));
	//koloC7.setPosition(Vector2f(230, 545));
	//koloC8.setPosition(Vector2f(300, 545));
	//koloC9.setPosition(Vector2f(370, 545));
	//koloC10.setPosition(Vector2f(440, 545));
	//koloC11.setPosition(Vector2f(510, 545));
	//koloC12.setPosition(Vector2f(265, 475));
	//koloC13.setPosition(Vector2f(335, 475));
	//koloC14.setPosition(Vector2f(405, 475));
	//koleczka.push_back(koloC1);
	///koleczka.push_back(koloC2);
	//koleczka.push_back(koloC3);
	//koleczka.push_back(koloC4);
	//koleczka.push_back(koloC5);
	//koleczka.push_back(koloC6);
	//koleczka.push_back(koloC7);
	//koleczka.push_back(koloC8);
	//koleczka.push_back(koloC9);
	//koleczka.push_back(koloC10);
	//koleczka.push_back(koloC11);
	//koleczka.push_back(koloC12);
	//koleczka.push_back(koloC13);
	//koleczka.push_back(koloC14);

	//for (std::vector<CircleShape>::iterator it = koleczka.begin() + 14; it != koleczka.end(); it++)it->setFillColor(Color(0, 0, 0));

	RenderWindow window(sf::VideoMode(720, 720), "ABALONE");

	Event event;

	Texture texture;
	if (!texture.loadFromFile("img\\plansza.png")) return EXIT_FAILURE;
	Sprite sprite(texture);

	//sf:Music music;
	//music.openFromFile("music\\ms.wav");
	//music.setVolume(60);
	//music.setLoop(true);
	//music.play();



	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
			if (event.type == sf::Event::MouseButtonPressed)
			{
				if (event.mouseButton.button == sf::Mouse::Left)
				{
					std::cout << "no klikniete" << std::endl;
					for (int a = 0; a < 9; a++)
					{
						for (int i = 0; i < 17; i++)
						{
							if (tab[a][i].kolor != 3)
							{
								if (tab[a][i].kolor == 1)
								{
									CircleShape kulka(25);
									kulka.setPosition(Vector2f(tab[a][i].posxs, tab[a][i].posys));
									window.draw(kulka);
								}
								if (tab[a][i].posys<event.mouseButton.y && tab[a][i].posyk>event.mouseButton.y&&
									tab[a][i].posxs< event.mouseButton.x && tab[a][i].posxk> event.mouseButton.x)
								{
									std::cout << a << ":" << i << std::endl;
									std::cout << tab[a][i].kolor << std::endl;
									if (tab[a][i + 2].kolor == 0 && (i + 2) < 17)std::cout << "Mozesz isc w prawo: " << std::endl;
									if (tab[a][i - 2].kolor == 0 && (i - 2) > 0)std::cout << "Mozesz isc w lewo: " << std::endl;
									if (tab[a - 1][i + 1].kolor == 0 && (a - 1) > 0 && (i + 1) < 17)std::cout << "Mozesz isc w prawo w gore: " << std::endl;
									if (tab[a - 1][i - 1].kolor == 0 && (a - 1) > 0 && (i - 1) > 0)std::cout << "Mozesz isc w lewo w gore: " << std::endl;
									if (tab[a + 1][i + 1].kolor == 0 && (a + 1) < 9 && (i + 1) < 17)std::cout << "Mozesz isc w prawo w dol: " << std::endl;
									if (tab[a + 1][i - 1].kolor == 0 && (a + 1) < 9 && (i - 1) > 0)std::cout << "Mozesz isc w lewo w dol: " << std::endl;
								}
							}
						}
					}
					//if (event.mouseButton.x > 190 && event.mouseButton.x < 250)event.mouseButton.x = 195;
					//if (event.mouseButton.y > 50 && event.mouseButton.y < 110)event.mouseButton.y = 55;
					//std::cout << "mouse x: " << event.mouseButton.x << std::endl;
					//std::cout << "mouse y: " << event.mouseButton.y << std::endl;
				}
			}
			//if (event.type == sf::Event::MouseMoved)
			//{
			//	std::cout << "new mouse x: " << event.mouseMove.x << std::endl;
			//	std::cout << "new mouse y: " << event.mouseMove.y << std::endl;
			//}

			window.clear();
			window.draw(sprite);

			//for (std::vector<CircleShape>::iterator it = koleczka.begin(); it != koleczka.end();it++)
			//	window.draw(*it);


			//if (koloB1.getGlobalBounds().contains(window.mapPixelToCoords(sf::Mouse::getPosition(window))))
			//{
			//	std::cout << "Ej to jest B1" << std::endl;
			//}


			window.display();
		}
	}
	return EXIT_SUCCESS;
}