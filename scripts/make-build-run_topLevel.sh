# bash script for building and running top level main.cpp in interview-practice/code/

cd ~/*/interview-practice
mkdir builds
cd builds
mkdir topLevelProjectBuild
cd topLevelProjectBuild
cmake ../../code/CMakeLists.txt
make -j
./InterviewPrep
