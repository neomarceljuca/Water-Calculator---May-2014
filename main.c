#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define aguatotal  pessoas*dias*110
#define limpatela system("cls")


float areatotal(double qtotal,float ip){
float areatotal;
areatotal=(qtotal*1000)/ip;
return areatotal;}

int main(){
    int pessoas,dias,cidade,i,j,cidades[10],carrospipa;
    float indice,carrospipadia,area,aguab;
    long agua;
    double magua,Magua,dinheiro;
    char c1,c2;
    cidades[0]=2551806;cidades[1]=344936;cidades[2]=261289;cidades[3]=217922;cidades[4]=201103;cidades[5]=129591;cidades[6]=122220;cidades[7]=120405;
    cidades[8]=100053;cidades[9]=83990;
    printf("-----Calculadora de Necessidade de agua-----\n \a");
    printf("Voce deseja escolher cidades predefinidas?(10 mais populosas)\n s para sim, n para inserir os dados manualmente.\n");
    scanf("%c",&c1);
    switch (c1) {
      case 's':
      limpatela;
      printf("Escolher Cidade\n Qual cidade voce deseja observar? Digite:\n\a");
      printf("1)Fortaleza \n2) Caucaia \n3)Juazeiro do Norte \n4)Macaranau \n5)Sobral \n6)Crato \n7)Itapipoca \n8)Maranguape \n9)Iguatu \n10)Quixada\n\n");
      scanf("%d",&cidade);
      pessoas=cidades[cidade-1];
      limpatela;
      printf("\n Agora digite a quantidade de dias que voce desejados para calcular as necessidades de agua dessas pessoas\n\a");
      scanf("%d",&dias);
      limpatela;
      printf("Otimo!Por ultimo, digite a quantidade de chuva em milimetros nesses dias.\n\a");
      scanf("%f",&indice);

      agua=0.11*pessoas*dias;
      magua=agua;
      Magua=magua/1000;
      aguab=2*pessoas*dias;
      carrospipa=(aguab/10000)+1;
      carrospipadia=carrospipa/dias;
      dinheiro=carrospipa*34;
      limpatela;
      area=areatotal(magua,indice)/1000000;
      if (Magua>0){
          printf("quantidade de agua necessaria para a populacao em metros cubicos:\n %d,ou %.2f milhoes de litros \n\n\a\a\a\a",agua,Magua);
      }
      else{
      printf("quantidade de agua necessaria para a populacao em metros cubicos:\n %.d, menos de 1 milhao de litros \n\n",agua);}
      printf("quantidade de carros pipa necessarios para abastecer a cidade:%d",carrospipa);
      if(dias>1) printf("\n\n ou em media %.2f carros por dia",carrospipadia);
      printf("\n\n os quais demandariam, em media, %.2f Reais pelo servico.\n\n",dinheiro);
      printf("area de coleta de chuva de um reservatorio para abastecer a cidade: %.2f kilometros quadrados.",area);
      break;
  case 'n':
      limpatela;
      printf("Inserir Manualmente\n Primeiro, digite a quantidade de pessoas desejada.\a");
      scanf("%d",&pessoas);
      limpatela;
      printf("\n\aAgora digite a quantidade de dias que voce desejados para calcular as necessidades de agua dessas pessoas\n");
      scanf("%d",&dias);
      limpatela;
      printf("\aOtimo!Por ultimo, digite a quantidade de chuva em milimetros nesses dias.\n");
      scanf("%f",&indice);

      agua=0.11*pessoas*dias;
      magua=agua;
      Magua=magua/1000;
      aguab=2*pessoas*dias;
      carrospipa=(aguab/10000)+1;
      carrospipadia=carrospipa/dias;
      dinheiro=carrospipa*34;
      limpatela;
      area=areatotal(magua,indice)/1000000;
      if (Magua>0){
          printf("quantidade de agua necessaria para a populacao em metros cubicos:\n %d,ou %.2f milhoes de litros \n\n\a\a\a\a",agua,Magua);}
      else{   printf("quantidade de agua necessaria para a populacao em metros cubicos:\n %.d, menos de 1 milhao de litros \n\n",agua);}
      printf("quantidade de carros pipa necessarios para abastecer a cidade:%d",carrospipa);
      if(dias>1) printf("\n\n ou em media %.2f carros por dia",carrospipadia);
      printf("\n\n os quais demandariam, em media, %.2f Reais pelo servico.\n\n",dinheiro);
      if(area>0.1){
          printf("area de coleta de chuva de um reservatorio para abastecer a cidade: %.2f kilometros quadrados.\n\n",area);}
      else{
              area=area*1000000;
              printf("area de coleta de chuva de um reservatorio para abastecer a cidade: %.2f metros quadrados.\n\n",area);}
          break;
      }
      return 0;
}
