#include<stdio.h>
#include <string.h>



int main(){ // 1
		
	
	
	int agua; //1
	printf("cuantos litros de agua consumes al dia:");//1
	scanf("%i",&agua);//1
	

	
	if (agua<2){ //1
		printf("usted debe tomar minimo dos litros de agua al dia .\n");//1
	}
	else if (agua<7){//1
		printf("usted toma la suficiente agua, siga asi .\n");//1
	}
	else if (agua > 7){//1
		printf("usted debe tomar maximo 7 litros de agua al dia .\n");//1
	}
	
	int ejercicio;//1
	printf("cuanto ejercicio realizas al dia: ");//1
	scanf("%i",&ejercicio);//1
	
	if (ejercicio<30){//1
		printf("deberias realizar mas ejercicio.\n");//1
	}
	else if (ejercicio == 30){//1
			printf ("usted hace suficiente ejercicio, siga asi .\n");//1
	}
	else if (ejercicio >30<60){//1
		printf("usted hace un excelente tiempo de ejercicio,felicidades.\n");//1
	}
	else if (ejercicio>60){//1
		printf("usted esta haciendo demasiado ejercicio intente reducir el tiempo de ejercicio para evitar tener da�os a su salud.\n");//1
	}
	
	int descanso;//1
	printf("cuantas horas duermes al dia: ");//1
	scanf("%i",&descanso);//1
	
	if (descanso <8){//1
		printf("usted debe dormir 8 horas diarias.\n");//1
	}
	else if (descanso == 8){//1
		printf("usted esta durmiendo las horas adecuadas siga asi .\n");//1
	}
	else {//1
		printf("usted se esta excediendo de sue�o y puede perjudicar su salud .\n");//1
	}
	
	float altura, peso, IMC;//1
	
	printf("calcula tu imc .\n");//1

    printf("Introduce tu altura (en metros): ");//1
    scanf("%f", & altura);//1

    printf("Introduce tu peso (en kilogramos): ");//1
    scanf("%f", & peso);//1

    IMC = peso/(altura*altura);//1

    printf("Tu indice de masa corporal es: ", IMC );//1

    if (IMC<20)//1
        printf("Peligro, estas bajo de peso.\n");//1
        else
     if (20<IMC&&IMC<=25)//1
        printf("Felicidades estas en tu peso.\n");//1
        else
     if (25<IMC&&IMC<30)//1
        printf("Tienes sobrepeso.\n"); //1
        else
     if (30<IMC&&IMC<35)//1
        printf("tienes obesidad.\n"); //1
        else
     if (35<=IMC)//1
        printf("Tienes obesidad morbida.\n"); //1
        
        printf("adicionalmente te proporcionamos una rutina de acuerdo a tus necesidades, presiona el numero que se adapte a ti.\n");//
        
        printf("1.-jovenes y adultos.\n");//1
        printf("2.-adultos mayores.\n");//1
        printf("3.-ni�os.\n");//1
        
        int rutina;//1
        printf("presiona el numero que quieres: ");//1
        scanf("%i",&rutina);//1
        
        if (rutina == 1){//1
        	printf("1. Comer con moderaci�n e incluir alimentos variados en cada comida.\nConsumir todos los d�as leche, yogures o quesos. es necesario en todas las edades.\n Comer diariamente frutas y verduras de todo tipo y color.\nComer una amplia variedad de carnes rojas y blancas, retirando la grasa visible.\nPreparar las comidas con aceite preferentemente crudo y evitar la grasa para cocinar.\n Disminuir los consumos de az�car y sal.\nConsumir variedad de panes, cereales, pastas, harinas, f�culas y legumbres.\nDisminuir el consumo de bebidas alcoh�licas y evitarlo en ni�os, adolescentes,embarazadas y madres lactantes.\nTomar abundante cantidad de agua potable durante todo el d�a.\nAprovechar el momento de las comidas para el encuentro y dialogo con otros..\n");
        	printf("Squat. Agacharse doblando las rodillas, sin que estas sobrepasen las puntas de los pies, y sin doblar la espalda. Se puede a�adir algo de peso cogiendo botellas de agua, botes o paquetes de legumbres o pasta en los brazos.\nAbdominales. Con las piernas flexionadas y la espalda apoyada en el suelo, levantar la pelvis, haciendo fuerza con los gl�teos y el abdomen. Mantener en esa posici�n unos segundo y volver a bajar lentamente. Se puede a�adir peso colocando objetos sobre la pelvis.\nSuperman. Tumbado boca abajo, levantar las cuatro extremidades, mantener unos segundos y volver a bajar. Si resulta complicado se pueden levantar de una en una o de dos en dos.\nPlanchas. Boca abajo, apoyado solo sobre los antebrazos y las puntas de los pies, mantener 30 segundos. Es importante que los hombros est�n a la altura de los codos..\n");
		}
        else if(rutina == 2){//1
        	printf("Comer alimentos que le entregan muchos nutrientes sin demasiadas calor�as extra.\nEvite las calor�as vac�as o huecas.\nPrefiera alimentos bajos en colesterol y grasas.\nTome suficientes l�quidos.\n");
        printf("Las actividades de resistencia, o aer�bicas, aumentan la respiraci�n y la frecuencia card�aca. Algunos ejemplos son las caminatas o correr, bailar, nadar y andar en bicicleta.\nLos ejercicios de fuerza fortalecen los m�sculos. Levantar pesas o usar bandas el�sticas puede fortalecerle.\nLos ejercicios de equilibrio ayudan a prevenir ca�das.\nLos ejercicios de flexibilidad estiran los m�sculos y pueden ayudar a que su cuerpo permanezca relajado.\n");
		}
        else if(rutina == 3){//1
        	printf("Incluye frutas y verduras, al menos 5 porciones al d�a..\nDales carbohidratos de preferencia complejos e integrales, pues son la fuente de energ�a principal. Ejemplo: tortillas de ma�z, pan integral, arroz, galletas integrales, barritas de cereal, entre otros..\nIncluye productos de origen animal, pues son esenciales para su crecimiento y formaci�n de tejidos como el m�sculo. Ejemplo: huevo, pollo, carnes, pescado, l�cteos. Asimismo, puedes incluir leguminosas que tambi�n son fuente de prote�na como frijol, lentejas, garbanzos, habas, etc. .\nTen opciones de snacks saludables. Ejemplo: trocitos de manzana con yogur y granola, zanahoria y j�cama rallada, almendras y nueces, galletitas saladas con queso fresco..\nLimitar el consumo de alimentos industrializados o altamente procesados que sean densamente cal�ricos..\nOfr�celes para hidratarse agua natural y bebidas naturales limitando el az�car a�adida..\nPrepara 5 tiempos de comida. Los ni�os necesitan meriendas para mantenerse con energ�a durante el d�a.");
        	printf("Poner m�sica. No es necesario hacer una coreograf�a (aunque tambi�n se puede hacer). Basta con poner algo de m�sica y bailar al ritmo, saltar y divertirse. Es una forma sencilla de activar el cuerpo, mover todas las extremidades y quemar calor�as..\nProponer juegos con movimiento. Jugar al escondite o a las estatuas puede ser una buena f�rmula para entretenerles y mantenerles activos..\nInvolucrarles en las tareas del hogar. Adem�s de aprender nuevas tareas y de aprender a hacerse cargo de responsabilidades, gestos sencillos como barrer o meter los platos y vasos al lavavajillas les llevan a realizar un esfuerzo que aunque para los adultos no lo sea tanto, para ellos es un buen ejercicio f�sico.");
		}
        else {//1
        	printf("inserte un numero valido");//1
        	
		}
		
		system("pause");//1
		return 0;//1
	
        
        
	






}


