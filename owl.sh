#!bin/bash
echo "what is your Name"
read Name
mkdir $Name
cd $Name
for i in 1 2 3 4 5
do
	touch $Name$i.cpp
done  
