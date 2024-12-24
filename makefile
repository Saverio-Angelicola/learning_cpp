build:
	cmake -S . -B build
	cmake --build build

run: 
	cmake -S . -B build
	cmake --build build
	./build/main
