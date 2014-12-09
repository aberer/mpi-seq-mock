mpi-seq-mock
============

a mock mpi compiler that creates a sequential executable from MPI code 


compile with 
autoreconf -vfi && ./configure && make 

then use ./utils/mpicc as your mpi compiler (e.g., pass it as CC=.. to further configure scripts). 

Current drawback: 
do NOT change the location of the mpicc.  
