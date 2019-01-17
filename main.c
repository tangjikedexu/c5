#include <stdio.h>
char arr[1024];
int index;
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
        }
        if (code == 5)
        {
            printf("jieshu \n");
            break;
        }
    }

    return 0;
}