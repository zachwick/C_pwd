PWD = /bin/pwd
PWDLOC = /bin
GNU_PREFIX = 'gnu_'
INSTALL_LOC = /usr/local/bin

build: pwd

clean:
	rm -f pwd pwd.o

doc:
	docco ./*.c

test: build
	valgrind --leak-check=full --show-leak-kinds=all ./pwd

pwd: pwd.o
	gcc -std=gnu99 -g $< -o $@ -Wall

main.o: pwd.c
	gcc -std=gnu99 -g -c $< -o $@ -Wall

install:
	rm -f $(INSTALL_LOC)/pwd
	cp pwd $(INSTALL_LOC)/pwd

replace_gnu: install
	mv $(PWD) $(PWDLOC)/$(GNU_PREFIX)pwd
