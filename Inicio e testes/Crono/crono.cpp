#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ----------------------- Declaração de Variáveis --------------------------------*/

    int seg;                 //  Variável que representa os segundos
    int mim;                //   Variável que representa os minutos
    int ms = 1;            //    Variável que representa a "velocidade" do cronometro.
    int hor;              //     Variável que representa as horas
//-------------------------------------------------------------------------------------------


//----------------------Entrada de dados do usuário-----------------------


        printf("Digite o número de horas: ");
        scanf("%d",&hor);
        printf("\n\nDigite o número de minutos: ");
        scanf("%d",&mim);
        printf("\n\nDigite o número de segundos: ");
        scanf("%d",&seg);

//-------------------------------------------------------------------------------------------

// ---------------------------Se o usuário digitar um valor acima de 60 para os segundos, este será enviado para os minutos transformando-o em valor equivalente ----------
        if(seg%60==0)
            {
               mim= ((mim+(seg/60)));
               seg=0;
            }
            else
            {
                if(seg>60)
                {
                    mim=((mim+(seg/60)));
                    seg=((seg%60));
                }
            }
//----------------------------Se o usuário digitar um valor acima de 60 para os minutos, este será enviado para as horas transformando-a em valor equivalente-------------
            if(mim%60==0)
            {
               hor = ((hor+(mim/60)));
               mim = 0;
            }
            else
            {
                if(mim>60)
                {
                    hor = ((hor+(mim/60)));
                    mim = ((mim%60));
                }
            }
/* -----------------------------------------------------------------------   Início do código do cronometro  --------------------------------------------------------*/
        for(seg,hor,mim;;seg--)
        {
            if(hor==0 && mim==0 && seg==0)
            {
                system("clear");
                printf("O tempo acabou !");
                return 0;
            }
            system("clear");
            printf("\n\n%02d:%02d:%02d",hor,mim,seg);
           


/* ------- Quando (segundos) chega a 59,seguindo a sequencia do laço 'for', (segundos) vai igualar a 60, então, incrementa-se +1 para (minutos) e zera a parte dos segundos -----------*/
            if(seg==0)
            {
                mim--;
                seg=seg+60;
            }
/* -------- Quando (minutos) chega a 60 incrementamos +1 para (horas) e zera a parte dos minutos ----------- */
            if(mim<0)
            {
                hor--;
                mim=mim+60;
            }

/* --------------------------------------------------------------------------- Fim do código do cronometro ------------------------------------------------------------------ */
        }

    return 0;
}

