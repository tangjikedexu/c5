#include <stdio.h>
char arr[1024];
int index;
int isMingan(char x)
{
    int count = 0;
    for (int i = 0; 1; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
        if (count == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
int main()
{

    printf("JINRUMINGANZIXING \n");

    while (1)
    {
        printf("1----tianjia \n");
        printf("2---shanchu \n");
        printf("3---chakan \n");
        printf("4---tihuan \n");
        printf("5---tuochu \n");

        printf("qingxuanzexiangyinggongnenegbianhao \n");

        char code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("qingshuruminganzi \n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index++;

            printf("shuruwanbi,dianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("qingshurushanchudeminganzi \n");
            index--;
            printf("shanchuchenggong,dianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("chakansuoyoudeminganzi \n");
            for (int i = 0; i < index; i++)
            {
                printf("di%dgeminganziwei:%c \n", i + 1, arr[i]);
            }
            printf("chakanchenggong,dianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
            printf("qingshuruyiduanyingwen \n");
            char neirong[1024];
            scanf("%s", neirong);
            for (int i = 0; 1; i++)
            {
                if (neirong[i] == '\0')
                {
                    break;
                }
                if (isMingan(arr[i]) == 1)
                {
                 neirong[i]='*';
                }
                printf("%c", neirong[i]);
            }
            printf("\n");
            printf("tihuanchenggong,dianjihuichejixu \n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("jieshu \n");
            break;
        }
    }

    return 0;
}