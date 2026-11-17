#include <stdio.h>

int main()
{
    while (1)
    {

        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }

        int min[200][200];
        int up, left, right, bottom;

        for (int up = 1; up <= n; up++)
        {
            bottom = n - up + 1;

            for (int left = 1; left <= n; left++)
            {
                right = n - left + 1;



                if (up<=bottom && up<=left && up<=right)
                {
                    min[up][left] = up;
                }
                if (bottom<=up && bottom<=left && bottom<=right)
                {
                    min[up][left] = bottom;
                }

                if (left<=right && left<=bottom && left<=up)
                {
                    min[up][left] = left;
                }

                if (right<=left && right<=bottom && right<=up)
                {
                    min[up][left] = right;
                }

                if (left == 1)
                {
                    printf("%3d", min[up][left]);
                }
                else
                {
                    printf(" %3d", min[up][left]);
                }
            }
            printf("\n");

        }
        printf("\n");
    }

    return 0;
}