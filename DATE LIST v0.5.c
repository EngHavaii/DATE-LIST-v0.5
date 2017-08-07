#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*CODIGO TOTALMENTE DESENVOLVIDO POR ENG_HAVAII. DATA 06/08/2017.
DATE LIST V0.5

/*
D= Dia
M= Mês
A= Ano
aINICIAL= Ano de onde começa a wordlist
nARQUIVO= nome da wordlist a ser salva
*/
int sair(){
    int escolha;
    desenho();
    printf("      [0]sair\n");
    printf("      [1]Criar nova wordlist\n");
    switch (escolha){
    case 0: system("exit");
    case 1: main();

    }

}
int geradortxt(int dINICIAL,int mINICIAL,int aINICIAL,int dFINAL,int mFINAL,int aFINAL){
    FILE *wordlist;
    int d,m,a;
    char *nARQUIVO;
    system("cls");
    desenho();
    printf("         Digite o nome e a extensão do arquivo: \n exemplo: DATELIST.txt\n");
    scanf("%s",nARQUIVO);


    if((wordlist = fopen(nARQUIVO,"w+")) == NULL){
        printf("\nErro ao abrir arquivo");
        return 1; /* informar ao shell que o programa terminou com erro :D */
    }
    else{
        for(a=aINICIAL; a<(aFINAL+1); a++){
            for(m=mINICIAL; m<13; m++){
                for(d=dINICIAL; d<32; d++){
                    if ((d<(dFINAL+1))&&(m<(mFINAL+1))&&(a<(aFINAL+1))){
                        if((d<10)&&(m<10))
                        {

                            fprintf(wordlist,"0%d0%d%d\n",d,m,a);
                        }
                        else if(d<10)
                        {

                            fprintf(wordlist,"0%d%d%d\n",d,m,a);
                        }
                        else if(m<10)
                        {

                            fprintf(wordlist,"%d0%d%d\n",d,m,a);
                        }
                        else
                        {

                            fprintf(wordlist,"%d%d%d\n",d,m,a);

                        };
                        }
                            else {
                                break;
                                sair();
                            }
                        dINICIAL=1;

                };
                mINICIAL=1;
            };

        };
    };

};

int geradortela(int dINICIAL,int mINICIAL,int aINICIAL,int dFINAL,int mFINAL,int aFINAL){
    int d,m,a;

        for(a=aINICIAL; a<(aFINAL+1); a++){
            for(m=mINICIAL; m<13; m++){
                for(d=dINICIAL; d<32; d++){
                    if ((d<(dFINAL+1))&&(m<(mFINAL+1))&&(a<(aFINAL+1))){
                        if((d<10)&&(m<10))
                        {
                            printf("0%d0%d%d \t",d,m,a);
                        }
                        else if(d<10)
                        {
                            printf("0%d%d%d \t",d,m,a);
                        }
                        else if(m<10)
                        {
                            printf("%d0%d%d \t",d,m,a);
                        }
                        else
                        {
                            printf("%d%d%d \t",d,m,a);


                        };
                        }
                            else {
                                break;
                                system("pause");
                                sair();
                            }
                        dINICIAL=1;

                };
                mINICIAL=1;
            };

        };
    };


void desenho()
{

    printf("       ____ ____ ____ ____ _________ ____ ____ ____ ____ \n");
    printf("      ||D |||A |||T |||E |||       |||L |||I |||S |||T ||\n");
    printf("      ||__|||__|||__|||__|||_______|||__|||__|||__|||__||\n");
    printf("      |/__\\|/__\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/__\\|/__\\|\n");
    printf("\n");
    printf("                               V 0.5\n");
    printf("\n");
    printf("\                      DESENVOLVIDO POR \n");
    printf("                            Eng_Havaii\n");
    printf("\n");
    printf("\n");
    printf("\n");


}
int main()
{
    setlocale(LC_ALL, "");
    int escolha,dINICIAL,mINICIAL,aINICIAL,dFINAL,mFINAL,aFINAL;
    desenho();
    printf("          [1] Criar wordlist como "".txt""\n");
    printf("          [2] Criar wordlist na tela\n");
    printf("          [0] SAIR\n");
    scanf("%d",&escolha),
          printf("DIGITE O DIA, MES E ANO INICIAL:\n");
    scanf("%02d%02d%04d",&dINICIAL,&mINICIAL,&aINICIAL);
    printf("DIGITE O DIA, MES E ANO FINAL:\n");
    scanf("%02d%02d%04d",&dFINAL,&mFINAL,&aFINAL);
    printf("A wordlist sera gerada apatir do dia %02d/%02d/%04d à %02d/%02d/%04d\n",dINICIAL,mINICIAL,aINICIAL,dFINAL,mFINAL,aFINAL);
    getch();
    switch(escolha)
    {
    case 1:
        geradortxt(dINICIAL,mINICIAL,aINICIAL,dFINAL,mFINAL,aFINAL);
    case 2:
         geradortela(dINICIAL,mINICIAL,aINICIAL,dFINAL,mFINAL,aFINAL);
    case 0:
        system("exit");
    }
    printf("\n");

system("pause");
};
