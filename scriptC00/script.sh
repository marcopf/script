cd mains
cp main1.c ../ex00
cp main2.c ../ex01
cp main3.c ../ex02
cp main4.c ../ex03
cp main5.c ../ex04
cp main6.c ../ex05
cp main7.c ../ex06
cp main8.c ../ex07
cp main9.c ../ex08

cd ..


gcc -Wall -Wextra -Werror ex00/main1.c ex00/ft_putchar.c
./a.out
echo -e "\n"
gcc -Wall -Wextra -Werror ex01/main2.c ex01/ft_print_alphabet.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex02/main3.c ex02/ft_print_reverse_alphabet.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex03/main4.c ex03/ft_print_numbers.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex04/main5.c ex04/ft_is_negative.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex05/main6.c ex05/ft_print_comb.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex06/main7.c ex06/ft_print_comb2.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex07/main8.c ex07/ft_putnbr.c
./a.out 
echo -e "\n"
gcc -Wall -Wextra -Werror ex08/main9.c ex08/ft_print_combn.c
./a.out 
echo -e "\n"