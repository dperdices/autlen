BIN = afnd
OBJ = afnd.o afnd1O.o alfabeto.o relacion.o ftrans.o estado.o tools.o main.o
CFLAGS = -Wall -ansi -pedantic -g
ZIPNAME = autlen_1401_p3_fuentes_perdices.zip

all: ${BIN}

${BIN}:%: ${OBJ}
	gcc ${CFLAGS} -o $@ $^

${OBJ}:%.o: %.c
	gcc ${CFLAGS} -c -o $@ $<

dot:
	for i in $$(ls *.dot); do \
		dot -Tpng "$$i" > $${i:0:(-4)}.png; \
	done

.PHONY: clean

clean:
	rm -fv ${BIN} ${OBJ} *.dot *.png

zip:
	zip $(ZIPNAME) *.c *.h makefile autores.txt readme.txt
