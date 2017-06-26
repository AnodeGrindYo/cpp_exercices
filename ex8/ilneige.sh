#!/bin/bash
 
LIGNES=$(tput lines)
COLONNES=$(tput cols)
 
declare -A flocon
declare -A dernierflocon
 
clear
 
function bouger_flocon() {
  i="$1"
   
  if [ "${flocon[$i]}" = "" ] || [ "${flocon[$i]}" = "$LIGNES" ]; then
    flocon[$i]=0
  else
    if [ "${dernierflocon[$i]}" != "" ]; then
      printf "\033[%s;%sH \033[1;1H " ${dernierflocon[$i]} $i
    fi
  fi
   
  printf "\033[%s;%sH*\033[1;1H" ${flocon[$i]} $i
   
  dernierflocon[$i]=${flocon[$i]}
  flocon[$i]=$((${flocon[$i]}+1))
}
 
while :
do
  i=$(($RANDOM % $COLONNES))
 
  bouger_flocon $i
 
  for x in "${!dernierflocon[@]}"
  do
    bouger_flocon "$x"
  done
sleep 0.1
done