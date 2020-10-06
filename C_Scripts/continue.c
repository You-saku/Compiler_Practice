#include <stdio.h>
int main(int argc, char** argv)
{
    for(int i = 0; i < 10; i++){
        if(i%2==0)continue;
        printf("%d\n",i);
        if(i%3==0)continue;
        printf("%d\n",i);
    }
	return 0;
}