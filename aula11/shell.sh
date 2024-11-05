echo "Deseja buscar os dados do sistema? [s/n]"
read RESPOSTA
test "$RESPOSTA" = "n" && exit #test é como se fosse um if
echo "Buscando..."