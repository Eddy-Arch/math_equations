default: quadratic_formula 
all: quadratic_formula

smp.o: smp.c $(HEADERS)
	gcc -c quadratic_formula.c -o quadratic_formula.o

smp: smp.o
	gcc quadratic_formula.o -o quadratic_formula 

clean:
	-rm -f quadratic_formula.o
	-rm -f quadratic_formula 
