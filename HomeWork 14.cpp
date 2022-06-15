#include <iostream>
#include <windows.h>

void color(int text, int background)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, (WORD)((background << 4) | text));
}

int main()
{
	system("color 07");


	int width = 26; 
	int height = 13, count = 0;


	for (int y = 0; y < height; y++)
	{
		for (int x = 0; x < width; x++)
		{
			if (x < width / 2.5 && y < height / 2 + 1)
			{
				color(15, 1);
				if (y % 2 != 0)
				{
					if (x % 2 != 0)
					{
						std::cout << "*";
						count++;
					}
				}
				else
				{
					if (x % 2 == 0)
					{
						std::cout << "*";
						count++;
					}
				}
			}
			else if (y % 2 == 0)
			{
				color(15, 12);
			}
			else
			{
				color(15, 15);
			}

			if (count == 0)
			{
				std::cout << " " << " ";
			}
			else
			{
				std::cout << " ";
			}
			count = 0;
		}
		std::cout << "\n";
	}
	color(15, 0);


}