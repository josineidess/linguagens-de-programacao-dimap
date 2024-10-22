# if [ $# -gt 5 ] 
# then 
#   echo "o máximo de parametros é 5, você colocou $#"
# else 
#   echo "argumentos validos $*"
# fi

# var=$1
# if [ $var -gt 10 ] 
# then 
#    echo "$var é maior que 10."
# else 
#    echo "$var não é maior que 10."
# fi   

# num=$1
# if [ $num -eq 2 ] 
# then 
#    echo 'Igual a 2'
# elif [ $num  -eq 3 ]; then
#    echo 'Igual a 3'
# else
#    echo 'Diferente de 2 e 3'   
# fi  

num=$1

case $num in 
     1) echo "Um 1 foi digitado." ;;
     2) echo "Um 2 foi digitado." ;;
     3) echo "Isso foi um três." ;;
     *) echo "Só sei contar até 3" ;;
esac     
