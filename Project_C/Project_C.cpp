// Project_C.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <windows.h>// даёт возможность русского языка
int main(void)
{
    system("chcp 1251>nul"); // тоже для русского
    int gold = 15;
    int hp_goblin = 3;
    char action;

    printf("Вы атакуете гоблина. ('A'таковать или 'R' сбежать\n", hp_goblin);

    action = getchar();

    while (action != 'r')
    {
        if (action == 'a' || action == 'A')
        {
            hp_goblin = hp_goblin - 1; // 2 hp

            printf("Вы пнули гоблина. Его здоровье: %d\n", hp_goblin);
        }


        if (hp_goblin < 1)
        {
            printf("Вы убили его.\n");
            printf("Вы получаете %d золота \n", gold);
        }
        printf("Новое действие?! \n");
        getchar();
        action = getchar();
    }

    printf("Вы решили сбежать! Good bye!\n");
    return 0;
}