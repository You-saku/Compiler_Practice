#include <stdio.h>
#include<stdlib.h>

//コマンドライン引数の引数
// 1つめ -> .exe名  2つめ -> 入力を配列にする
int main(int argc, char** argv)
{
	int i;

	for (i = 0 ; i < argc ; i++ )
	{
        int sum = 0;
		printf("%d番目 : %s\n", i,argv[i]);

	}
    printf("%s\n",argv[1]);

	return 0;
}