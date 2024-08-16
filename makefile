compile:
	g++ -o Program.exe program.cpp

execute:
	./Program.exe

clean:
	rm -f ./Program.exe

run: clean compile execute