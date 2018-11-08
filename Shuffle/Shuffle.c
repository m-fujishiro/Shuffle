#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
#include <string.h>
#include <conio.h>

int list[54] = {0};

void shuffle();

void ppak()
{
	while (1) {
		if (_kbhit()) { _getch(); }
		else break;
	};

	while (1) {
		if (_kbhit()) break;
	};
}

int main()
{
	unsigned int now = (unsigned int)time(0);
	srand(now);rand(); rand(); rand(); rand(); rand();

	shuffle();

}

void shuffle()
{
	int i = 1,j;

	/*1~13:ハート,14~26:ダイヤ,27~39:クローバー,40~52:スペード, 53,54:ジョーカー*/



	while (i <= 54){
		j = rand() % 54;
		if(list[j] == 0){
			list[j] = i; i++;
		}
	}

	//添え字の順番に並んでいるイメージ
	for(i = 1;i < 54;i++){			

//	printf("%02d ",list[i]);

	if((list[i] <= 0)||(list[i] > 52))printf("ジョーカー\n");
	else if(list[i] == 52)printf("スペード　K\n");
	else{
	switch (list[i] / 13) {
		case 0: printf("ハート　　");break;
		case 1: printf("ダイヤ　　");break; 
		case 2: printf("クローバー");break;
		case 3: printf("スペード　");break;
	}

	if((list[i] % 13 <= 10)&&(list[i] % 13 > 1))printf("%d\n", list[i] % 13);
	else if(list[i] % 13 == 1)printf("A\n");
	else if(list[i] % 13== 11)printf("J\n");
	else if(list[i] % 13== 12)printf("Q\n");
	else if(list[i] % 13== 0)printf("K\n");
	else printf("error\n");
	}
}


	ppak();

}

/*
	進歩状況
・シャッフルができた。

	いずれやりたいこと
・トランプゲームを作る。 > ブラックジャック?
*/