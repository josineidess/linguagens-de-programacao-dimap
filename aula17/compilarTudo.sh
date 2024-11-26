gcc -c func1.c -o func1.o
gcc -c func2.c -o func2.o
gcc -c main.c -o main.o
clear
gcc -o programa main.o func1.o func2.o
rm *.o
./programa 