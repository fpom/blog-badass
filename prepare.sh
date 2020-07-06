. bad.sh
. run.sh

badass -o run.c patch main.c del main
badass p5 -l TEST="$TEST" -l STR="$STR" -l FUN="$FUN" -l RUN="$RUN" -l RESULT="$RESULT" test.c >> run.c

cat run.c
