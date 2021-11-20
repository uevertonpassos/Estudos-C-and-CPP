#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* ----------------------- Declara��o de Vari�veis --------------------------------*/

    int seg;                 //  Vari�vel que representa os segundos
    int mim;                //   Vari�vel que representa os minutos
    int ms = 1;            //    Vari�vel que representa a "velocidade" do cronometro.
    int hor;              //     Vari�vel que representa as horas
//-------------------------------------------------------------------------------------------


//----------------------Entrada de dados do usu�rio-----------------------


        printf("Digite o n�mero de horas: ");
        scanf("%d",&hor);
        printf("\n\nDigite o n�mero de minutos: ");
        scanf("%d",&mim);
        printf("\n\nDigite o n�mero de segundos: ");
        scanf("%d",&seg);

//-------------------------------------------------------------------------------------------

// ---------------------------Se o usu�rio digitar um valor acima de 60 para os segundos, este ser� enviado para os minutos transformando-o em valor equivalente ----------
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
//----------------------------Se o usu�rio digitar um valor acima de 60 para os minutos, este ser� enviado para as horas transformando-a em valor equivalente-------------
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
/* -----------------------------------------------------------------------   In�cio do c�digo do cronometro  --------------------------------------------------------*/
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
           


/* ------- Quando (segundos) chega a 59,seguindo a sequencia do la�o 'for', (segundos) vai igualar a 60, ent�o, incrementa-se +1 para (minutos) e zera a parte dos segundos -----------*/
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

/* --------------------------------------------------------------------------- Fim do c�digo do cronometro ------------------------------------------------------------------ */
        }

    return 0;
}

