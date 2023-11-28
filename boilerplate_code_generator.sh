#!/bin/bash
# dependencies: libcurl4-openssl-dev
DAYNAME=$2
FULL_PATH="$1/day$DAYNAME"
if ! [[ -d "$1/day$DAYNAME" ]]
then
    echo "day$DAYNAME doesn't exist on your filesystem. Generating code."
    mkdir -p "$1/day$DAYNAME"
    echo '#include "../AoCHelper/AoCHelper.h"
#include <vector>

void puzzle_one(std::vector<std::string> input)
{
    int answer{};
    for (std::string row : input)
    {

    }
    std::cout << "Puzzle one: " << answer << std::endl;
}

void puzzle_two(std::vector<std::string> input)
{
    int answer{};
    for (std::string row : input)
    {

    }
    std::cout << "Puzzle two: " << answer << std::endl;
}

int main()
{
    std::vector<std::string> exampleInput{"", "", "", "" ,""};
    AoCHelper a1{"2022", "'$DAYNAME'"};
    std::vector<std::string> result = a1.get_input();
    puzzle_one(result);
    puzzle_two(result);
}' >> "$FULL_PATH"/puzzle.cc
fi