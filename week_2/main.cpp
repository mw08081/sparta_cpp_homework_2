#include <iostream>

#include "Player.h"
#include "Archer.h"
#include "Warrior.h"
#include "Thief.h"
#include "Magician.h"
#include "Monster.h"

using namespace std;

// 메인 함수
int main()
{
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int opt = 0;

    Player* player = nullptr;
    string nickname;

    Monster* monster = nullptr;
    string monsterNickname;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>\n";
    cout << nickname << "님, 환영합니다!\n";
    cout << "* 원하시는 직업을 선택해주세요.\n";

    for (int i = 0; i < 4; i++)
    {
        cout << (i + 1) << ". " << jobs[i] << '\n';
    }

    cout << "선택: ";
    cin >> opt;

    switch (opt)
    {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    player->attack();
    player->printPlayerStatus();

    cout << "* 몬스터 이름을 입력해주세요: ";
    cin >> monsterNickname;
    monster = new Monster(monsterNickname);

    cout << "몬스터가 등장했다!!!\n";
    monster->printStatus();

    while (player->getHP() > 1 && monster->getHP() > 1)
    {
        cout << "---------턴 시작---------\n";
        player->attack(monster);

        // 죽어서 공격하는 경우 방지
        if (monster->getHP() < 1)
        {
            break;
        }
        monster->attack(player);
        cout << "---------턴 종료---------\n";
    }

    delete player;
    delete monster;

    return 0;
}