#include <stdio.h>
#define citys 15
#define name "dados.txt"
#define mode "r"

int i=0,j=0,num;

void readFile(int newMatrix[][citys], FILE *fp) {
    while(!feof (fp)) {
        fscanf(fp, "%d", &num);
        newMatrix[i][j] = num;
        j++;
    }
    fclose(fp);
}

void printMatrix(int newMatrix[][citys]) {
    for (i = 0; i < citys; i++)
    {
        for (j = 0; j < citys; j++)
        {
            printf("%d  ", newMatrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    const char * filename = name;
    int matrix[citys][citys];
    FILE *fp;
    fp = fopen(filename, mode);

    readFile(matrix, fp);
    printMatrix(matrix);

    return 0;
}
