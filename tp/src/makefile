all: tp.bin clean

tp.bin: tp.cpp motor.o controlador.o util.o caixa_mensagem.o
	g++ tp.cpp motor.o controlador.o util.o caixa_mensagem.o -o tp.bin -W -Wall -Wextra -std=c++14 -pthread -lboost_system -lboost_date_time -lboost_thread

motor.o: Motor.cpp Motor.hpp
	g++ Motor.cpp -o motor.o -c -W -Wall -Wextra -ansi -pedantic -std=c++14

controlador.o: Controlador.cpp Controlador.hpp
	g++ Controlador.cpp -o controlador.o -c -W -Wall -Wextra -ansi -pedantic -std=c++14

util.o: Util.cpp Util.hpp
	g++ Util.cpp -o util.o -c -W -Wall -Wextra -std=c++14

caixa_mensagem.o: CaixaMensagem.cpp CaixaMensagem.hpp
	g++ CaixaMensagem.cpp -o caixa_mensagem.o -c -W -Wall -Wextra -std=c++14

clean:
	rm -rf *.o *~tp.bin