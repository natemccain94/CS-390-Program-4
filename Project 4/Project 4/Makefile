# Nate McCain
# CS 390
# 10/25/2017
#
# Makefile
#
# Usage:
# 	make -f Makefile	by default make will find this file and
#				build its first target
#
#	make -f Makefile clean	build the clean target
#	make -f Makefile tar	build the tar target
#
########################################################################

main: main.o ProjectFourFunctions.o
	gcc -o main main.o ProjectFourFunctions.o

main.o: main.c ProjectFourFunctions.h
	gcc -c main.c

ProjectFourFunctions.o: ProjectFourFunctions.c ProjectFourFunctions.h
	gcc -c ProjectFourFunctions.c

clean: 
	rm *.o

tar: 
	tar -cvf main.tar *.c *.h