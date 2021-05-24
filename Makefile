.PHONY: clean
Code2: main.o Calc_V.so Calc_P.a 
	gcc -o Code2 main.o Calc_V.so Calc_P.a 
main.o: main.c Calc_V.h Calc_P.h
	gcc -c main.c 
Calc_P.o: Calc_P.c
	gcc -c Calc_P.c
Calc_P.a: Calc_P.o
	ar rs Calc_P.a Calc_P.o
Calc_V.o: Calc_V.c
	gcc -fPIC -c Calc_V.c
Calc_V.so: Calc_V.o
	gcc -shared -o Calc_V.so Calc_V.o
clean: 
	rm *.o *.a *.so Code2
