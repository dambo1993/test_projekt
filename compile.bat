gcc main.c -c -o main.o
gcc test_lib/libik.c -c -o libik.o
gcc main.o libik.o