
test : test.o mpi.o
	../utils/mpicc -o $@ $< 


mpi.o : mpi.c
	gcc -c $< 


%.o  : %.c
	../utils/mpicc -c $<

clean :
	$(RM) mpi.o 
