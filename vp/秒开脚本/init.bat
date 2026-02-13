@echo off
copy template.cpp A.cpp
copy template.cpp B.cpp
copy template.cpp C.cpp
copy template.cpp D.cpp
copy template.cpp E.cpp
copy template.cpp F.cpp
type nul > in.txt
type out > out.txt
echo [Success] Done
pause