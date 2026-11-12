/*
1. Se consideră un tablou de N elemente întregi (N fiind citit de la tastatură). Să se realizeze următoarele operații asupra elementelor tabloului:
- să se citească elementele tabloului
- să se afișeze elementele tabloului
- să se afișeze suma elementelor pare respectiv suma elementelor impare
- să se afișeze mimimul elementelor tabloului
- să se calculeze produsul elementelor tabloului
- să se afișeze elementele tabloului sortat descrescător
*/
/*
2. Să se scrie un program care citește de la tastatură un număr N natural, apoi citește cele N elemente ale unui șir de numere naturale. Programul va calcula și afișa media aritmetică a numerelor prime ale șirului,
respectiv media aritmetică a numerelor pare.
*/
/*
3. Să se scrie un program care citește de la tastatură un număr N natural, apoi citește cele N elemente ale unui șir de numere naturale. Programul va determa minimul dintre elementele negative aflate pe poziții
pare din cadrul tabloului, respectiv maximul dintre elementele pozitive aflate pe poziții impare.
*/
/*
4. Scrieți un program în C care realizează următoarele operații asupra unei matrici pătratice M de ordin N (N fiind declarată ca și constantă), având elemente întregi. Pentru fiecare operație asupra elementelor
matricei se va defini o funcție fără parametri:
- void citire(void) - citește elementele matricii (se va introduce numărul de linii și coloane de la tastatură)
- void afisare(void) - afișează matricea pe linii și coloane
- void modifica(void) - scade valoarea fiecărui element al matricii cu suma indicilor elementului respectiv; se afișează apoi matricea modificată prin apelul funcției afisare.
- void transpusa(void) - calculează și afișează transpusa matricei
- void linia_suma_min(void) - determină linia din matrice care are suma minimă a elementelor, afișând indicele liniei și suma
- void calc_suma(void) - calculează și afiseaza suma elementelor matricei
*/
/*
5. Să se scrie un program care citește de la tastatură un șir N de numere întregi și afișează elementele cu proprietatea că suma cifrelor lor este divizibilă cu o valoare V dată.
*/
/*
6. Să se scrie un program care citește de la tastatură doi vectori a și b cu câte n elemente fiecare. Programul va calcula și afișa valoarea expresiei E = a[1]b[1] + a[2]b[2] +…….+ a[N]b[N]
*/
/*
7. Să se scrie un program care citește de la tasatură doi vectori a și b cu câte n elemente fiecare. Programul va calcula și afișa valoarea expresiei E = min(a[1],b[1]) + min(a[2],b[2] )+…….+ min(a[N],b[N]).
*/
/*
8. Să se scrie un program care citește de la tastatură un șir N de numere întregi și inserează la mijlocul șirului media aritmetică a elementelor sale.
*/
/*
9. Să se scrie un program care citește de la tastatură doi vectori a și b cu câte n respectiv m elemente și inserează vectorul b în vectorul a începând de la poziția k (k citit de la tastatură).
*/
/*
10. Să se caute un caracter într-un şir dat şi să se returneze indexul primei apariţii a caracterului în şir.
*/
/*
11. Scrieţi un program care să acţioneze ca un dicţionar electronic. Când utilizatorul introduce un cuvânt în dicţionar, programul să afişeze înţelesul său. Folosiţi un tablou tridimensional de tip char, care să
conţină cuvintele şi înţelesul lor.
*/
/*
12. Scrieţi un program care să numere spaţiile, virgulele şi punctele care apar într-un şir (Folosiţi o instrucţiune switch).
*/
/*
13. Să se scrie un program interactiv care gestionează un dicționar de cuvinte, inițial vid; pentru fiecare cuvânt se reține echivalentul său într-o limbă străină (de exemplu engleză). Programul va citi de la
tastatură un caracter și va realiza următoarele comenzi:
- A - adaugă un cuvânt în dictionar (cuvântul și echivalentul său in limba străină)
- L - listează dicționarul în ordinea alfabetică a cuvintelor
- C - citește de la tastatură un cuvânt și caută în dicționar cuvântul, în cazul în care îl găsește afișează traducerea acestuia, iar în caz contrar afișează un mesaj (Cuvânt inexistent)
- X - terminare program
*/
/*
14. Scrieţi un program interactiv care realizează gestionarea unei agende telefonice. Programul va crea agenda telefonică și va permite căutarea unei persoane și afișarea numărului de telefon corespunzător, precum
și afișarea agendei în ordine alfabetică.
*/
/*
15. Se dă un şir de caractere care se termină cu caracterul EOF. Să se scrie un program C care converteşte un şir de caractere cifră în întregul corespunzător, restul caracterelor sunt neglijate.
	Ex: Şirul ",ab 15 cd1;489$%"
	Numerele: 15 1 489
*/
/*
16. Se citește de la tastatură un şir de cuvinte separate prin spații, şir care e terminat cu caracterul EOF. Să se tipărească toate palindroamele care apar în text. Un palindrom este un cuvânt care e identic citit
de la început şi de la sfârşit. Se cere să se afişeze palindroamele în ordine crescătoare.
*/
/*
17. Se citește de la tastatură un text care se termină cu EOF. Să se prelucreze textul astfel: se elimină toate caracterele nealfanumerice. Identificatorii şi numerele sunt tipărite separat. Întâi numerele în
ordinea apariţiei lor, după care identificatorii în ordine alfabetică.
*/
/*
18. Să se scrie un program care citește șiruri de la tastatură, fiecare pe un rând nou, până la apăsarea CTRL+Z, apoi realizează următoarele operații asupra șirurilor:
a. tipărește șirurile inversate;
b. afișează numărul de vocale din fiecare șir;
c. afișează numărul de șiruri care conțin numai cifre, respectiv numai litere.
*/

#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>

#define MIN(a, b)   ((a) < (b) ? (a) : (b))
#define MAX(a, b)   ((a) > (b) ? (a) : (b))

void read_array_integer(int arr[], int* size_of_arr)
{
	printf("Dati dimensiunea tabloului: ");
	scanf("%d", size_of_arr);

	printf("Dati un tablou de %d elemente: ", *size_of_arr);
	for (int i = 0; i < *size_of_arr; i++)
		scanf("%d", &arr[i]);
	return;
}

void read_array_float(float arr[], int* size_of_arr)
{
	printf("Dati dimensiunea tabloului: ");
	scanf("%d", size_of_arr);

	printf("Dati un tablou de %d elemente: ", *size_of_arr);
	for (int i = 0; i < *size_of_arr; i++)
		scanf("%f", &arr[i]);
	return;
}

void read_array_2d_integer(int arr[256][256], int* size_of_arr)
{
	printf("Dati dimensiunea tabloului: ");
	scanf("%d", size_of_arr);

	printf("Dati un tablou de %d elemente:\n", *size_of_arr * *size_of_arr);
	for (int i = 0; i < *size_of_arr; i++)
		for (int j = 0; j < *size_of_arr; j++)
			scanf("%d", &arr[i][j]);
	return;
}

void read_array_2d_float(float arr[256][256], int* size_of_arr)
{
	printf("Dati dimensiunea tabloului: ");
	scanf("%d", size_of_arr);

	printf("Dati un tablou de %d elemente:\n", *size_of_arr * *size_of_arr);
	for (int i = 0; i < *size_of_arr; i++)
		for (int j = 0; j < *size_of_arr; j++)
			scanf("%f", &arr[i][j]);
	return;
}

void read_array_char(char arr[], int* size_of_arr)
{
	printf("Dati un sir de charactere: ");
	getchar();
	int i = 0;
	do {
		arr[i++] = getchar();
	} while (arr[i - 1] != '\n');
	*size_of_arr = i - 1;
	return;
}

void print_array_integer(int arr[], int size_of_arr)
{
	printf("Tabloul este:");
	for (int i = 0; i < size_of_arr; i++)
		printf(" %d", arr[i]);
	printf("\n");
	return;
}

void print_array_float(float arr[], int size_of_arr)
{
	printf("Tabloul este:");
	for (int i = 0; i < size_of_arr; i++)
		printf(" %.2f", arr[i]);
	printf("\n");
	return;
}

void print_array_2d_integer(int arr[256][256], int size_of_arr)
{
	printf("Tabloul este:\n");
	for (int i = 0; i < size_of_arr; i++)
	{
		for (int j = 0; j < size_of_arr; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
	return;
}

void print_array_2d_float(float arr[256][256], int size_of_arr)
{
	printf("Tabloul este:\n");
	for (int i = 0; i < size_of_arr; i++)
	{
		for (int j = 0; j < size_of_arr; j++)
			printf("%f ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
	return;
}

int compare(const void* elem1, const void* elem2)
{
	int el_1 = *((int*)elem1);
	int el_2 = *((int*)elem2);
	if (el_1 < el_2)
		return  1;
	else
		return -1;
}

bool prime(int numar)
{
	if (numar <= 1)
		return false;
	if (numar == 2)
		return true;

	if (numar % 2 == 0)
		return false;

	for (int i = 3; i * i <= numar; i += 2)
		if (numar % i == 0)
			return false;

	return true;
}

void modify(int arr[256][256], int size_of_arr)
{
	for (int i = 0; i < size_of_arr; i++)
		for (int j = 0; j < size_of_arr; j++)
			arr[i][j] = arr[i][j] - ((i + 1) + (j + 1));

	print_array_2d_integer(arr, size_of_arr);
	return;
}

void transpose(int arr[256][256], int size_of_arr)
{
	int temp_arr[256][256];

	for (int i = 0; i < size_of_arr; i++)
		for (int j = 0; j < size_of_arr; j++)
			temp_arr[j][i] = arr[i][j];

	for (int i = 0; i < size_of_arr; i++)
		for (int j = 0; j < size_of_arr; j++)
			arr[i][j] = temp_arr[i][j];

	print_array_2d_integer(arr, size_of_arr);
	return;
}

void line_min_sum(int arr[256][256], int size_of_arr)
{
	int min_sum = INT_MAX;
	for (int i = 0; i < size_of_arr; i++)
	{
		int sum = 0;
		for (int j = 0; j < size_of_arr; j++)
			sum += arr[i][j];

		min_sum = MIN(min_sum, sum);
	}

	printf("Suma minima este: %d\n", min_sum);
	return;
}

void calc_sum(int arr[256][256], int size_of_arr)
{
	int sum = 0;
	for (int i = 0; i < size_of_arr; i++)
		for (int j = 0; j < size_of_arr; j++)
			sum += arr[i][j];

	printf("Suma elementelor este: %d\n", sum);
	return;
}

void problema_01()
{
	int size_of_arr;
	int arr[256];

	read_array_integer(arr, &size_of_arr);
	print_array_integer(arr, size_of_arr);

	int sum_even = 0, sum_odd = 0, prod_el = 1;

	int minimum = INT_MAX, maximum = INT_MIN;

	for (int i = 0; i < size_of_arr; i++)
	{
		if (arr[i] % 2)
			sum_odd += arr[i];
		else
			sum_even += arr[i];

		prod_el *= arr[i];

		minimum = MIN(minimum, arr[i]);
		maximum = MAX(maximum, arr[i]);
	}

	printf("Suma elementelor pare este: %d\nSuma elementelor impare este: %d\nMinimul este: %d\nMaximul este: %d\nProdusul elementelor este: %d\n", sum_even, sum_odd, minimum, maximum, prod_el);

	qsort(arr, size_of_arr, sizeof(int), compare);

	print_array_integer(arr, size_of_arr);

	return;
}

void problema_02()
{
	int size_of_arr;
	float arr[256];

	read_array_float(arr, &size_of_arr);

	float aritm_avg_prime = 0.0, prime_count = 0.0;
	float aritm_avg_even = 0.0, even_count = 0.0;

	for (int i = 0; i < size_of_arr; i++)
	{
		if ((int)arr[i] % 2 == 0)
			aritm_avg_even += arr[i], even_count++;

		if (prime((int)arr[i]))
			aritm_avg_prime += arr[i], prime_count++;
	}

	printf("Media aritmetica a numerelor prime este: %.2f\nMedia aritmetica a numerelor pare este: %.2f", aritm_avg_prime / prime_count, aritm_avg_even / even_count);

	return;
}

void problema_03()
{
	int size_of_arr;
	int arr[256];

	read_array_integer(arr, &size_of_arr);

	int minimum = INT_MAX, maximum = INT_MIN;

	for (int i = 0; i < size_of_arr; i += 2)
		if (arr[i] >= 0)
			maximum = MAX(maximum, arr[i]);

	for (int i = 1; i < size_of_arr; i += 2)
		if (arr[i] <= 0)
			minimum = MIN(minimum, arr[i]);

	printf("Maximul elementelor pozitive de pe pozitii impare este: %d\nMinimul elementelor negative de pe pozitii pare este: %d", maximum, minimum);

	return;
}

void problema_04()
{
	int size_of_arr;
	int arr[256][256];

	read_array_2d_integer(arr, &size_of_arr);
	print_array_2d_integer(arr, size_of_arr);
	modify(arr, size_of_arr);
	transpose(arr, size_of_arr);
	line_min_sum(arr, size_of_arr);
	calc_sum(arr, size_of_arr);

	return;
}

void problema_05()
{
	int size_of_arr;
	int arr[256];

	read_array_integer(arr, &size_of_arr);

	int value_v;
	printf("Dati o valoare v: ");
	scanf("%d", &value_v);

	printf("Numerele cu proprietate ca suma cifrelor este divizibila cu valoare v din tablou sunt:");
	for (int i = 0; i < size_of_arr; i++)
	{
		int sum = 0;
		int temp = arr[i];
		do
		{
			sum += temp % 10;
			temp /= 10;
		} while (temp);

		if (sum % value_v == 0)
			printf(" %d", arr[i]);
	}

	return;
}

void problema_06()
{
	int size_of_arr;
	int arr_a[256], arr_b[256];

	read_array_integer(arr_a, &size_of_arr);
	read_array_integer(arr_b, &size_of_arr);

	int expression_E = 0;

	for (int i = 0; i < size_of_arr; i++)
		expression_E += arr_a[i] * arr_b[i];

	printf("Valoarea expresiei E este: %d", expression_E);
	return;
}

void problema_07()
{
	int size_of_arr;
	int arr_a[256], arr_b[256];

	read_array_integer(arr_a, &size_of_arr);
	read_array_integer(arr_b, &size_of_arr);

	int expression_E = 0;

	for (int i = 0; i < size_of_arr; i++)
		expression_E += MIN(arr_a[i], arr_b[i]);

	printf("Valoarea expresiei E este: %d", expression_E);
	return;
}

void problema_08()
{
	int size_of_arr;
	int arr[256];

	read_array_integer(arr, &size_of_arr);

	int avg = 0;
	for (int i = 0; i < size_of_arr; i++)
		avg += arr[i];

	avg /= size_of_arr + 1;

	for (int i = size_of_arr; i > size_of_arr / 2; i--)
		arr[i] = arr[i - 1];

	arr[size_of_arr / 2] = avg;

	print_array_integer(arr, size_of_arr + 1);
	return;
}

void problema_09()
{
	int size_of_arr_a, size_of_arr_b;
	int arr_a[256], arr_b[256];

	read_array_integer(arr_a, &size_of_arr_a);
	read_array_integer(arr_b, &size_of_arr_b);

	int starting_point;
	printf("Dati valoarea k: ");
	scanf("%d", &starting_point);
	starting_point--;

	for (int i = size_of_arr_a - 1; i >= starting_point; i--)
		arr_a[i + size_of_arr_b] = arr_a[i];

	for (int i = 0; i < size_of_arr_b; i++)
		arr_a[i + starting_point] = arr_b[i];

	print_array_integer(arr_a, size_of_arr_a + size_of_arr_b);

	return;
}

void problema_10()
{
	int size_of_arr;
	char arr[256];

	read_array_char(arr, &size_of_arr);

	char wanted_char;
	printf("Dati un caracter: ");
	scanf("%c", &wanted_char);

	bool found = false;
	int i = 0;

	do {
		if (arr[i] == wanted_char)
		{
			found = true;

			printf("Prima aparitie a caracterului este pe pozitia: %d", i + 1);
		}

		i++;
	} while (!found && i < size_of_arr);

	if (found == false)
		printf("Caracterul nu apare in sir");
	return;
}

void problema_11()
{
	char dictionary[10][2][256] = {
	"ecuatie"   , "o egalitate care contine cel putin o necunoscuta: x + 2 = 5 (unde x = 3).",
	"functie"   , "o egalitate matematica intre doua expresii care contine una sau mai multe necunoscute (variabile).",
	"polinom"   , "o sumă de monoame (ex. 2x^2 + 3x - 1).",
	"vector"    , "o marime matematica si fizica definita complet prin trei elemente: directie, sens si modul (lungime).",
	"matrice"   , "un tabel dreptunghiular de numere, simboluri sau expresii, organizate pe linii (orizontal) si coloane (vertical).",
	"variabila" , "o litera care tine locul unui numar necunoscut (ex. x, y, z).",
	"coeficient", "numarul care sta in faaa unei variabile: in expresia 4x, coeficientul este 4.",
	"multime"   , "o colectie de obiecte bine determinate (ex. multimea cifrelor: (A = {0, 1, 2, ..., 9})).",
	"axioma"    , "o afirmatie considerata adevarata fara a fi nevoie de demonstratie (ex. printr-un punct exterior unei drepte trece o singura paralela).",
	"modul"     , "distanta unui numar fata de zero, notata cu bare verticale: |-5| = 5."
	};

	printf("Cuvintele definite in dictionar sunt:");
	for (int i = 0; i < 10; i++)
		printf("\n%d) %s", i + 1, dictionary[i][0]);

	char word[256];
	do {
		printf("\nDati un cuvant, sau scrieti exit pentru a iesi: ");

		scanf("%255s", word);
		for (int i = 0; i < 10; i++)
			if (!strcmp(dictionary[i][0], word))
				printf("%s: %s\n", dictionary[i][0], dictionary[i][1]);
	} while (strcmp(word, "exit"));

	return;
}

void problema_12()
{
	char arr[256];
	int size_of_arr;

	read_array_char(arr, &size_of_arr);

	int space = 0, comma = 0, dot = 0;

	for (int i = 0; i < size_of_arr; i++)
		switch (arr[i]) {
		case ' ': space++; break;
		case ',': comma++; break;
		case '.': dot++; break;
		default: break;
		}

	printf("Sunt: %d puncte, %d virgule si %d spatii.", dot, comma, space);

	return;
}

void add_word(char dictionary[256][2][256], int* size_of_dict)
{
	char temp_entry[2][256];
	printf("Introduceti un cuvant nou: ");
	scanf("%255s", temp_entry[0]);

	getchar();

	printf("Introduceti sinonimul lui: ");
	scanf("%255[^\n]", temp_entry[1]);

	int position = *size_of_dict;

	for (int i = 0; i < *size_of_dict; i++)
		if (strcmp(temp_entry[0], dictionary[i][0]) == 0)
		{
			printf("Cuvantul deja exista in dictionar!\n");
			return;
		}
		else if (strcmp(temp_entry[0], dictionary[i][0]) < 0)
		{
			position = i;
			break;
		}

	for (int i = *size_of_dict; i > position; i--)
	{
		strcpy(dictionary[i][0], dictionary[i - 1][0]);
		strcpy(dictionary[i][1], dictionary[i - 1][1]);
	}

	strcpy(dictionary[position][0], temp_entry[0]);
	strcpy(dictionary[position][1], temp_entry[1]);

	*size_of_dict = *size_of_dict + 1;
	return;
}

void print_dictionary(char dictionary[256][2][256], int size_of_dict)
{
	for (int i = 0; i < size_of_dict; i++)
		printf("%s: %s\n", dictionary[i][0], dictionary[i][1]);
	return;
}

void read_word(char dictionary[256][2][256], int size_of_dict)
{
	char word[256];
	bool found = false;

	printf("Introduceti cuvantul pe care doriti sa il adaugati: ");
	scanf("%255s", word);

	for (int i = 0; i < size_of_dict; i++)
		if (strcmp(word, dictionary[i][0]) == 0)
		{
			printf("%s: %s\n", dictionary[i][0], dictionary[i][0]);
			found = true;
		}

	if (!found)
		printf("Cuvant inexistent!");
	return;
}

void problema_13()
{
	char dictionary[256][2][256] = {};
	int size_of_dict = 0;

	char word[256];
	do {
		char operations[3][256] = { "adauga","listeaza","citeste" };
		int operation = 3;

		printf("Introduceti operatia pe care doriti sa o faceti: ");
		scanf("%s", word);

		for (int i = 0; i < 3; i++)
			if (!strcmp(word, operations[i]))
				operation = i;
		switch (operation) {
		case 0: add_word(dictionary, &size_of_dict); break;
		case 1: print_dictionary(dictionary, size_of_dict); break;
		case 2: read_word(dictionary, size_of_dict); break;
		default: break;
		}

	} while (strcmp(word, "exit"));
	return;
}

void add_entry(char phonebook[256][3][256], int* size_of_phone)
{
	char temp_entry[3][256];
	printf("Introduceti un numele: ");
	scanf("%255s", temp_entry[0]);

	printf("Introduceti un prenumele: ");
	scanf("%255s", temp_entry[1]);

	printf("Introduceti numarul de telefon: ");
	scanf("%255s", temp_entry[2]);

	int position = *size_of_phone;

	for (int i = 0; i < *size_of_phone; i++)
		if (strcmp(temp_entry[0], phonebook[i][0]) == 0)
		{
			if (strcmp(temp_entry[1], phonebook[i][1]) == 0)
			{
				printf("Cuvantul deja exista in dictionar!\n");
				return;
			}
			else if (strcmp(temp_entry[1], phonebook[i][1]) < 0)
			{
				position = i;
				break;
			}
		}
		else if (strcmp(temp_entry[0], phonebook[i][0]) < 0)
		{
			position = i;
			break;
		}

	for (int i = *size_of_phone; i > position; i--)
	{
		strcpy(phonebook[i][0], phonebook[i - 1][0]);
		strcpy(phonebook[i][1], phonebook[i - 1][1]);
		strcpy(phonebook[i][2], phonebook[i - 1][2]);
	}

	strcpy(phonebook[position][0], temp_entry[0]);
	strcpy(phonebook[position][1], temp_entry[1]);
	strcpy(phonebook[position][2], temp_entry[2]);

	*size_of_phone = *size_of_phone + 1;
	return;
}

void print_phonebook(char phonebook[256][3][256], int size_of_phone)
{
	for (int i = 0; i < size_of_phone; i++)
		printf("%s %s - %s\n", phonebook[i][0], phonebook[i][1], phonebook[i][2]);
	return;
}

void read_name(char phonebook[256][3][256], int size_of_phonebook)
{
	char name[2][256];
	bool found = false;

	printf("Introduceti numele de familie sau '-' daca nu il stiti: ");
	scanf("%255s", name[0]);
	printf("Introduceti numele sau '-' daca nu il stiti: ");
	scanf("%255s", name[1]);

	int ignore = 0;

	if (name[0][0] == '-')
		ignore = 1;
	if (name[1][0] == '-')
		ignore = 2;

	if (name[0][0] == '-' && name[1][0] == '-')
	{
		printf("Nu ati introdus nici un nume!\n");
		return;
	}

	for (int i = 0; i < size_of_phonebook; i++)
	{
		if (ignore == 0 && strcmp(name[0], phonebook[i][0]) == 0 && strcmp(name[1], phonebook[i][1]) == 0)
		{
			printf("%s %s - %s\n", phonebook[i][0], phonebook[i][1], phonebook[i][2]);
			found = true;
		}
		if (ignore == 1 && strcmp(name[1], phonebook[i][1]) == 0)
		{
			printf("%s %s - %s\n", phonebook[i][0], phonebook[i][1], phonebook[i][2]);
			found = true;
		}
		if (ignore == 2 && strcmp(name[0], phonebook[i][0]) == 0)
		{
			printf("%s %s - %s\n", phonebook[i][0], phonebook[i][1], phonebook[i][2]);
			found = true;
		}
	}

	if (!found)
		printf("Persoana inexistent!\n");
	return;
}

void problema_14()
{
	char phonebook[256][3][256] = {};
	int size_of_phone = 0;

	char word[256];
	do {
		char operations[3][256] = { "add","list","search" };
		int operation = 3;

		printf("Introduceti operatia pe care doriti sa o faceti: ");
		scanf("%s", word);

		for (int i = 0; i < 3; i++)
			if (!strcmp(word, operations[i]))
				operation = i;
		switch (operation) {
		case 0: add_entry(phonebook, &size_of_phone); break;
		case 1: print_phonebook(phonebook, size_of_phone); break;
		case 2: read_name(phonebook, size_of_phone); break;
		default: break;
		}

	} while (strcmp(word, "exit"));
	return;
}

void problema_15()
{
	char character;
	int result;
	int number = 0;
	bool found = false;

	getchar();

	printf("Dati un sir de caractere: ");

	result = scanf("%c", &character);
	while (result != EOF)
	{
		if ('0' <= character && character <= '9')
		{
			number *= 10;
			number += character - '0';
			found = true;
		}
		else if (found)
		{
			printf("%d ", number);
			number = 0;
			found = false;
		}
		result = scanf("%c", &character);
	}
	return;
}

void problema_16()
{
	char arr[256];
	char palindrome_arr[256][256];
	int palindromes = 0;
	int result = 0;

	printf("Dati un sir de caractere:");

	while (1)
	{
		result = scanf("%255s", arr);
		if (result == EOF)
			break;

		char temp_arr[256];
		bool found = false;
		int length = strlen(arr);

		for (int i = 0; i < length; i++)
			temp_arr[length - i - 1] = arr[i];

		temp_arr[length] = '\0';

		found = (strcmp(arr, temp_arr) == 0);

		if (found)
		{
			int position = palindromes;
			bool exists = false;

			for (int i = 0; i < palindromes; i++)
				if (strcmp(arr, palindrome_arr[i]) == 0)
				{
					exists = true;
					break;
				}
				else if (strcmp(arr, palindrome_arr[i]) < 0)
				{
					position = i;
					break;
				}
			if (!exists)
			{
				for (int i = palindromes; i > position; i--)
				{
					strcpy(palindrome_arr[i], palindrome_arr[i - 1]);
				}

				strcpy(palindrome_arr[position], arr);

				palindromes++;
			}
		}

	}

	printf("Palindroamele sunt:");
	for (int i = 0; i < palindromes; i++)
		printf(" %s", palindrome_arr[i]);

	return;
}

void problema_17()
{
	char identifier[256][256];
	int identifiers = 0;
	int number[256];
	int numbers = 0;
	int result = 0;

	printf("Dati un sir de caractere: ");

	while (1)
	{
		char arr[256];
		result = scanf("%255s", arr);
		if (result == EOF)
			break;

		int temp_number = 0;
		int length = strlen(arr);

		if ('a' <= arr[0] && arr[0] <= 'z')
		{
			int position = identifiers;
			bool exists = false;

			for (int i = 0; i < identifiers; i++)
				if (strcmp(arr, identifier[i]) == 0)
				{
					exists = true;
					break;
				}
				else if (strcmp(arr, identifier[i]) < 0)
				{
					position = i;
					break;
				}
			if (!exists)
			{
				for (int i = identifiers; i > position; i--)
				{
					strcpy(identifier[i], identifier[i - 1]);
				}
				strcpy(identifier[position], arr);

				identifiers++;
			}
		}
		else if ('0' <= arr[0] && arr[0] <= '9')
		{
			for (int i = 0; i < length; i++)
				temp_number *= 10, temp_number += arr[i] - '0';

			number[numbers] = temp_number;

			numbers++;
		}
	}

	printf("Identificatorii sunt:");
	for (int i = 0; i < identifiers; i++)
		printf(" %s", identifier[i]);
	printf("\nNumerele sunt:");
	for (int i = 0; i < numbers; i++)
		printf(" %d", number[i]);
	return;
}

void problema_18()
{
	int result = 0;
	char arr[256][256];
	int size = 0;

	int charac_only_str = 0;
	int number_only_str = 0;

	getchar();
	while (true)
	{
		char temp_arr[256] = "";

		result = scanf("%255[^\n]", temp_arr);
		getchar();
		if (result == EOF)
			break;

		int length = strlen(temp_arr);

		for (int i = 0; i < length; i++)
			arr[size][i] = temp_arr[length - i - 1];
		arr[size][length] = '\0';

		size++;
	}

	printf("Sirurile inversate sunt:");
	for (int i = 0; i < size; i++)
	{
		printf("\n%s", arr[i]);
		int length = strlen(arr[i]);

		bool numbers_only = true, characters_only = true;
		int vocal_count = 0;
		for (int j = 0; j < length; j++)
		{
			if (strchr("aeiou", arr[i][j]) != NULL)
				vocal_count++;

			if ('a' <= arr[i][j] && arr[i][j] <= 'z')
				numbers_only = false;
			if ('0' <= arr[i][j] && arr[i][j] <= '9')
				characters_only = false;
		}

		printf(" - %d vocale", vocal_count);

		if (numbers_only)
			number_only_str++;
		if (characters_only)
			charac_only_str++;
	}

	printf("\nThere are %d strings with only numbers, and %d strings with only characters,", number_only_str, charac_only_str);

	return;
}

int main()
{
	int problema;
	printf("Dati numarul problemei: ");
	scanf("%d", &problema);

	do {
		switch (problema)
		{
		case  0: return 0; break;
		case  1: problema_01(); break;
		case  2: problema_02(); break;
		case  3: problema_03(); break;
		case  4: problema_04(); break;
		case  5: problema_05(); break;
		case  6: problema_06(); break;
		case  7: problema_07(); break;
		case  8: problema_08(); break;
		case  9: problema_09(); break;
		case 10: problema_10(); break;
		case 11: problema_11(); break;
		case 12: problema_12(); break;
		case 13: problema_13(); break;
		case 14: problema_14(); break;
		case 15: problema_15(); break;
		case 16: problema_16(); break;
		case 17: problema_17(); break;
		case 18: problema_18(); break;
		default: printf("Nu exista problema numarul:%d", problema); break;
		}

		printf("\n\nDati numarul problemei:");
		scanf("%d", &problema);
	} while (problema);
}