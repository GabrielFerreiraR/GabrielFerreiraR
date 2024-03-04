#include<stdio.h>

int main () {
    float n1, n2, media, exame;
    printf("Digite a ptimeira nota\n");
    scanf("%f", &n1);

    printf("Digte a segunda nota\n");
    scanf("%f", &n2);

    media = (n1+n2)/2;
    printf("MEDIA:%2.f\n", media);
    media = (n1+n2)/2;

    if(media >=7.0) {
        printf("Aluno aprovado.\n");
    }
    else  {
         printf("Aluno em exame.\n");
    }

    printf("Digite a nota do exame: ");
    scanf("%f", &exame);

    if(exame>=5.0) {
        printf("Aluno aprovado no exame.\n");
    }
    else {
        printf("Aluno reprovado no exame.\n");
    }

    return 0;


}
