CC=cc
FLAGS=-Wall -Wextra -Werror

all: compile

compile:
	${CC} ${FLAGS} *.c -o ${NAME}.out
	./${NAME}.out ${param1} ${param2} ${param3}
	rm -rf *.out

*.c:
	${CC} ${FLAGS} $@ -o $*.out
	./$*.out ${param1} ${param2} ${param3} 
	rm -rf *.out

clean:
	rm -rf *.out