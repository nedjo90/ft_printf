rm -rf testoutput reeloutput
make re;
gcc -w testvalid/testcharR.c libftprintf.a -I includes;./a.out > reeloutput;
gcc -w testvalid/testcharT.c libftprintf.a -I includes;./a.out > testoutput;
gcc -w testvalid/teststrR.c libftprintf.a -I includes;./a.out >> reeloutput;
gcc -w testvalid/teststrT.c libftprintf.a -I includes;./a.out >> testoutput;
gcc -w testvalid/testhexR.c libftprintf.a -I includes;./a.out >> reeloutput;
gcc -w testvalid/testhexT.c libftprintf.a -I includes;./a.out >> testoutput;
gcc -w testvalid/testintR.c libftprintf.a -I includes;./a.out >> reeloutput;
gcc -w testvalid/testintT.c libftprintf.a -I includes;./a.out >> testoutput;
gcc -w testvalid/testuintR.c libftprintf.a -I includes;./a.out >> reeloutput;
gcc -w testvalid/testuintT.c libftprintf.a -I includes;./a.out >> testoutput;
gcc -w testvalid/testpR.c libftprintf.a -I includes;./a.out >> testoutput;
gcc -w testvalid/testmix.c libftprintf.a -I includes;./a.out >> testoutput;
make fclean;
rm a.out;
diff -a testoutput reeloutput
