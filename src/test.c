#include <mpi.h>
#include <stdio.h>


int main(int argc, char **argv)
{
  MPI_Init(argc, argv);

  printf("it works!\n"); 
  
  MPI_Finalize();
}
