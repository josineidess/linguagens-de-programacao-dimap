CC = gcc #escolha do compilador
CFLAGS = -Wall #habilitar avisos do compilador (opção)
all: programa
programa: main.o func1.o func2.o #Regra de compilação final
		$(CC) $(CFLAGS) -o programa main.o func1.o func2.o
main.o: main.c func1.h func2.h #regras de compilação para .c
		$(CC) $(CFLAGS) -c main.c	
func1.o: func1.c func1.h
		$(CC) $(CFLAGS) -c func1.c				
func2.o: func2.c func2.h
		$(CC) $(CFLAGS) -c func2.c	
clean: #digitar make clean executa essa regra abaixo
	   rm -f *.o programa 						
