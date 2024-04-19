#include <bits/stdc++.h>
using namespace std;
void draw(int r, int c, int s)
{
    for (int i = 0; i < r; i++)
    {
        
            for (int k = 0; k <= s -1; k++)
            {
                for (int o = 0; o < c; o++)
                {
                    for (int q = 0; q < s - k-1 ; q++)
                    {
                        printf("e");
                    }

                    printf("/");
                    for (int w = 0; w < 2 * k; w++)
                    {
                        printf("o");
                    }
                    printf("\\");
                    for (int q = 0; q < s - k-1 ; q++)
                    {
                        printf("e");
                    }
                }
                printf("\n");
            }
            for (int k = 0; k <= s-1 ; k++)
            {
                for (int o = 0; o < c; o++)
                {
                    for (int q = s; q > s - k; q--)
                    {
                        printf("e");
                    }

                    printf("\\");
                    for (int w = 0; w < 2 * (s - k -1); w++)
                    {
                        printf("o");
                    }
                    printf("/");
                    for (int q = s; q > s - k; q--)
                    {
                        printf("e");
                    }
                }

                printf("\n");
            }
        
    }
}
int main()
{
    int row = 5;
    int col = 4;
    int size = 2;
    draw(row, col, size);
}