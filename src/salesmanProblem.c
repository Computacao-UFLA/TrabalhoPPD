#include <stdio.h>
#define citys 20


int main(int argc, char const *argv[])
{
    //Lendo so caminhos
    const char * filename = "dados.txt";
    char buff[255];
    FILE *fp;

    fp = fopen(filename, "r");
    fgets(buff, 255, (FILE*)fp);

    fclose(fp);


    printf("%s\n", buff);

    return 0;
}
