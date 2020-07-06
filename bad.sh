BASE=$1
. "$BASE/bad.sh"
PROJ=$(basename "$BASE")

badass --record="$PROJ:good_decl" --base="$BASE" has "void $FUN (char* $ARG)@main.c"
badass --record="$PROJ:bad_decl" --base="$BASE" has "$FUN@main.c"

badass --record "$PROJ:for_if" --base="$BASE" xpath -c main.c  "//function_decl[@spelling='$FUN']//for_stmt//if_stmt"
badass --record "$PROJ:while_if" --base="$BASE" xpath -c main.c  "//function_decl[@spelling='$FUN']//while_stmt//if_stmt"
badass --record "$PROJ:do_if" --base="$BASE" xpath -c main.c  "//function_decl[@spelling='$FUN']//do_stmt//if_stmt"
badass --record "$PROJ:for_switch" --base="$BASE" xpath -c main.c  "//function_decl[@spelling='$FUN']//for_stmt//switch_stmt"
badass --record "$PROJ:while_switch" --base="$BASE" xpath -c main.c  "//function_decl[@spelling='$FUN']//while_stmt//switch_stmt"
badass --record "$PROJ:do_switch" --base="$BASE" xpath -c main.c  "//function_decl[@spelling='$FUN']//do_stmt//switch_stmt"

badass --record="$PROJ:known" --base="$BASE" run -r badass.h prepare.sh build.sh test.c run.c
badass --record="$PROJ:ascii" --base="$BASE" run -r badass.h prepare.sh build.sh test.c 
