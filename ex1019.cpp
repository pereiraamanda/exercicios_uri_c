 #include <stdio.h>
 
 int main(){
 	int tpSegundos;
 	printf("");
 	scanf("%i",&tpSegundos);
 	
 	int tpHora = tpSegundos / 3600;
 	int tpMinutos = ((tpSegundos % 3600) / 60);
 	tpSegundos = tpSegundos % 60;
 	
 	printf("%i:%i:%i\n",tpHora, tpMinutos, tpSegundos);
 }
 

