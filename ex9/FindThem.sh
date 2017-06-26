#!/bin/bash
c1()
{
    echo "           _^____      "
    echo "   |    __/    []\\     "
    echo "  -O-===_         \\    "
    echo "   |     \\_________]   "
    echo "           I   I       "
    echo "          -------/     "
    sleep 0.1
}
c2()
{
    echo "           _^____      "
    echo "  \ /   __/    []\\     "
    echo "   O====_         \\    "
    echo "  / \    \\_________]   "
    echo "           I   I       "
    echo "          -------/     "
    sleep 0.1
}
echo -e "\n\n\n\n\n\n\n\n\n\033[8F\033[s"
while [ 1 = 1 ]
do  echo -e "\033[u   =========:========= " ; c1
    echo -e "\033[u     =======:=======   " ; c2
    echo -e "\033[u        ====:====      " ; c1
    echo -e "\033[u            :         " ; c2
    echo -e "\033[u        ====:====      " ; c1
    echo -e "\033[u     =======:=======   " ; c2

done