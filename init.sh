#!/bin/bash

echo "initialize folder for $1"

if [ -d "$1" ]; then
    echo "Warning: $1 does exist."
    exit 1
fi

mkdir $1
touch $1/Makefile
touch $1/run
chmod +x $1/run
touch $1/input.txt
touch $1/output.txt
mkdir $1/build

for x in ${@:2}
do
    cp template.cpp $1/$x.cpp
    printf "$x: $x.cpp\n\tg++ --std=c++20 -Wall -Wextra -O2 -g $x.cpp -o build/$x\n\n" >> $1/Makefile
done

# run script
printf "#!/bin/bash\n" >> $1/run
printf "make \$1\n" >> $1/run
printf "echo  \"--------------------------------------------------\"\n" >> $1/run
printf "./build/\$1 < input.txt | tee output.txt\n" >> $1/run
