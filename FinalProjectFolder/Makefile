# ---- source file sections ----
main-1: main-1-1.cpp
	@clang++ -g -Wall -Wextra Animals.cpp Carrots.cpp Chickens.cpp Cows.cpp Crops.cpp Farm.cpp Farmland.cpp main-1-1.cpp Potatoes.cpp Produce.cpp Sheep.cpp Textbased.cpp Wheat.cpp -o main 
	@./main

# test sections
test_wheat: testWheat.cpp
	@g++ testWheat.cpp Wheat.cpp Crops.cpp Produce.cpp -o testWheat
	@./testWheat

test_potatoes: testCarrots.cpp
	@g++ testCarrots.cpp Carrots.cpp Crops.cpp Produce.cpp -o testCrops
	@./testPotatoes

test_carrots: testPotatoes.cpp
	@g++ testPotatoes.cpp Potatoes.cpp Crops.cpp Produce.cpp -o testCrops
	@./testCarrots

test_all:
	@g++ test.cpp superTest.cpp Produce.cpp Crops.cpp -o test 
	@./test

# ---- clean sections----
# clean sources
clean-source:
	@rm -rf main

# Clean test files
clean-t-wheat:
	@rm -rf testWheat
	
clean-t-potatoes:
	@rm -rf testPotatoes

clean-t-carrots:
	@rm -rf testCarrots

clean-all-tests:
	@rm -rf testWheat testPotatoes testCarrots