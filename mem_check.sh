var1=0
if ! grep -q "0 leaks for 0 total leaked bytes" leaks.txt; then
	echo -e "\033[0;91mMemory leaks detected:\033[0;39m";
	bat -P leaks.txt;
	var1=1;
else
	echo -e "\033[0;92mNo memory leaks detected!\033[0;39m";
fi
diff -a test reel > diff.txt
if [ -s diff.txt ]; then 
	echo -e "\033[0;91mft_printf != printf\033[0;39m"; 
	delta -s test reel
	var1=1;
else 
	echo -e "\033[0;92mft_printf == printf \033[0;39m"; 
fi
if [ $var1 -eq 0 ]; then
	echo -e "\033[0;92mSUCCESS!\033[0;39m";
else
	echo -e "\033[0;91mFAILED!\033[0;39m";
fi
