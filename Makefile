# ---- source file sections ----
main-1: main-1-1.cpp
	@clang++ Animals.cpp Carrots.cpp Chickens.cpp Cows.cpp Crops.cpp Farm.cpp Farmland.cpp main-1-1.cpp Potatoes.cpp Produce.cpp Sheep.cpp Textbased.cpp Wheat.cpp superTest.cpp -o main -Wall
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



# ---- clean sections----
# Seth: I don't think that abstract classes (although we are still unsure as to assign Produce, Crops and Animals as abstract or not...) need to be tested explicitly. 
# We will test their derived classes. And they will act as a proxy for their parents/super classes.
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