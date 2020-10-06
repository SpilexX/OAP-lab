#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	printf("Хотите приобрести жабу? :D\n(1 - да, 2 - нет)\n");
	cin >> k;
	switch (k)
	{
	case 1:
		printf("Какую именно?)\n");
		printf("1. Rainbowжаба\n");
		printf("2. Косможаба\n");
		printf("3. Кибержаба\n");
		printf("4. Красная жаба\n");
		printf("5. Синяя жаба\n");
		printf("6. Чёрная жаба\n");
		printf("7. Кроха жаба\n");
		cin >> k;
		switch (k)
		{
		case 1:
			printf("Самая редкая и дорогая\n");
			break;
		case 2:
			printf("Улетишь вместе с ней\n");
			break;
		case 3:
			printf("Напишет за тебя программу\n");
			break;
		case 4:
			printf("Просто красного цвета\n");
			break;
		case 5:
			printf("Просто синего цвета\n");
			break;
		case 6:
			printf("Цвета души Волчицы. АУФ!\n");
			break;
		case 7:
			printf("Для маленьких людей\n");
			break;
		default:
			printf("Такой нету, держи простую :P\n");
			break;
		}
		printf("Держи жабу :D");
		break;
	case 2:
		printf("Ну не хотите как хотите :P");
		break;
	default:
		printf("Я не поняв да или нет :(");
		break;
	}
}