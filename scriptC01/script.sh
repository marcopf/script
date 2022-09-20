cd mains
cp main0.c ../ex00
cp main1.c ../ex01
cp main2.c ../ex02
cp main3.c ../ex03
cp main4.c ../ex04
cp main5.c ../ex05
cp main6.c ../ex06
cp main7.c ../ex07
cp main8.c ../ex08

cd ..


gcc -Wall -Wextra -Werror ex00/main0.c ex00/ft_ft.c
./a.out
echo -e "\n"
gcc -Wall -Wextra -Werror ex01/main1.c ex01/ft_ultimate_ft.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex02/main2.c ex02/ft_swap.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex03/main3.c ex03/ft_div_mod.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex04/main4.c ex04/ft_ultimate_div_mod.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex05/main5.c ex05/ft_putstr.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex06/main6.c ex06/ft_strlen.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex07/main7.c ex07/ft_rev_int_tab.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex08/main8.c ex08/ft_sort_int_tab.c
./a.out 
echo -e "\n"
