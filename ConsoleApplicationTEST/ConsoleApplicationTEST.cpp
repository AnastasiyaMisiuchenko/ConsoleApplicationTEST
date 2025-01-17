﻿#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

#pragma region MyRegion
void date16_06_2024() {
    std::cout << "Сколько вам лет?\n";
    int age;
    std::cin >> age;
    if (age < 18) {
        std::cout << "Вам тут не рады!\n";
    }
    else {
        std::cout << "Добро пожаловать в клуб престарелых!\n";

    }
    if (age < 18) {
        int dif = 18 - age;
        std::cout << "Вам не  достает " << dif << std::endl;

    }
}

void date17_06_2024() {
    std::cout << "Введите число\n";
    int namber;
    std::cin >> namber;
    if (namber % 2 == 0) {
        std::cout << "Число четное\n";
    }
    else {
        std::cout << "Число нечетное\n";
    }
}

void date17_06_2024_1() {
    int x, y, select; // я объявила три переменных типа int: x, y, select
    do {
        std::cout << "x="; // вывела в консоль "x="
        std::cin >> x;     //запросила ввод с консоли, значение сохранмла в переменную x
        std::cout << std::endl << "y=";  //перенос строки, вывела текст "у=" в консоль
        std::cin >> y;   //запросила ввод с консоли, значение сохранилa переменную у
        do {
            std::cout << std::endl << "Выберите действие:\n 1 - сложение\n 2 - вычитание\n Ваш ввыбор:"; // перенос строки, запросила ввод в консоль
            std::cin >> select;
       
            std::cout << std::endl;
            if (select == 1) {
                std::cout << x + y;
            }
            if (select == 2) {
                std::cout << x - y;
            }
            std::cout << std::endl;
            std::cout << "Хотите вернуться к выбору операции? ( 1.Yes || 2.No )\n";
            std::cin >> select;
        } while (select == 1);
    
        std::cout << "Посчитать что-то еще (1) или выйти (2)?";
        std::cin >> select;
    } while (select != 2);
  
}
void date20_06_2024() {
    // ВЫВЕСТИ В КОНСОЛЬ СУММУ Всех чеьных чисел от 0 до 100 используя цикл for 
    int x = 0, sum = 0;
    for (x = 0; x <= 100; x += 2) {
        sum += x;
    }
    std::cout << sum << std::endl;
}
#pragma endregion

void date20_06_2024_2() {
    // вывести в консоль факториал числа которое вводит пользователь с клавы если оно положительное
    int f, a = 1;
    std::cout << "f="; // вывелав консоль f
    std::cin >> f; // запросила ввод значение f
    if (f > 0) {
        for (; f > 1; f = f - 1 ){
            a *= f;
        }
    }
 std::cout << a << std::endl;
}

void date21_06_2024_1_1_1() {
    // проверить число отрицательное или положительное. вывести инф в консоль 
    std::cout << "Введите число\n";
    int num;
    std::cin >> num;
    if (num < 0) {
        std::cout << "Число отрицательное\n";
    }
    else {
        std::cout << "Число положительное\n";
    }
}

void date21_06_2024_1_1_7() {
    // дано число. поврьте что оно находится в диапазоне от 1 до 100
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    if (num > 0 && num <= 100) {
        std::cout << "Число ";
        std::cout << num;
        std::cout << " находится в диапазоне от 1 до 100\n";
    }
}
void date22_06_2024_1_1_2() {
    // Дана строка. Выведите в консоль длину этой строки.
    std::string s = "Hello, world! It's me!\n";
    std::cout << s.length();
    std::cout << std::endl;

}
//1.1
void date22_06_2024_1_1_3() {
    //Дана строка. Выведите в консоль последний символ строки.
    std::string s = "Как дела с французким, Владик";
   // std::cout << s[1] << std::endl;
  //  std::cout << s[4] << std::endl;
    std::cout << s[s.length() - 1] << std::endl;


}

void date22_06_2024_1_1_4() {
    //Даны два слова. Проверьте, что первые буквы этих слов совпадают.
    std::string txt1;
    std::string txt2;

    std::cin >> txt1;
    std::cin >> txt2;
    //txt1[0];//читаем значение элемента массива под индексом 0 
   // txt2[0];
    if (txt1[0] == txt2[0]) {
        std::cout << "Первые буквы этих слов совпадают.\n";
    }
    else {
        std::cout << "Первые буквы этих слов не совпадают.\n";
    }


}
void date22_06_2024_1_1_5() {
     //Дано слово. Получите его последнюю букву. Если слово заканчивается на r, то получите предпоследнюю букву.
    std::string s;
    std::cin >> s;
    int dlina = s.length();
    int ind = dlina - 1;
    if (s[ind] == 'r') {
        std::cout << s[dlina - 2] << std::endl;
    }
    else {
        std::cout << s[ind] << std::endl;
    }
    
}

std::string intToString(int number) {

    bool isPlus = true;

    if (number < 0) {
        isPlus = false;
        number = abs(number);
    }

    std::string result = "";

    while (number / 10 > 0) {
        int tmpNum = number % 10 + 48;

        result =  (char)tmpNum + result;
        number /= 10;
    }
    result = (char) (number + 48) + result;

    if (!isPlus) {
        result = "-" + result;
    }

    return result;
}

void date22_06_2024_1_1_6() {
    //Дано число. Преобразуйте его в строку
    int c = 123;
    std::string myStr = intToString(c);
    std::cout << myStr;
    

}

//1.2
void date22_06_2024_1_2_1() {
    //Расскажите, в чем отличие типа int от типа unsigned int.
    // unsigned int - целочисленный тип, положительное число. int - целочисленный тип со значение от ~ -2млрд до 2 млрд. ( 4 байта).
}
void date22_06_2024_1_2_2() {
    //Дано целое число. Выведите в консоль последнюю цифру этого числа.
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    int o = num % 10;
    std::cout << o << std::endl;
    }
void date22_06_2024_1_2_3() {
    //Дано целое число. Выведите в консоль первую цифру этого числа.
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    while (num >= 10) {
           num /= 10;
    }
    std::cout << num << std::endl;
   
}
void date22_06_2024_1_2_4() {
    //Дано целое число. Выведите в консоль сумму первой и последней цифры этого числа.
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    int last = num % 10;
    while (num >= 10) {
           num /= 10;
    }
    int sum = num + last;
    std::cout << sum << std::endl;

}
void date22_06_2024_1_2_5() {
    //Дано целое число. Выведите количество цифр в этом числе.
    int num, counter = 0;
    std::cout << "Введите число\n";
    std::cin >> num;
    while (num != 0) {
        num /= 10;
        counter += 1;
    }
    std::cout << counter << std::endl;
}
void date25_06_2024_1_2_6() {
    //Дано целое число. Проверьте, четное оно или нет.
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    if (num % 2 == 0) {
        std::cout << "Число четное\n";
    }
    else {
        std::cout << "Число нечетное\n";
    }
}
void date25_06_2024_1_2_7() {
    //Даны две строки. Проверьте, что первые символы этих строк совпадают.
    std::string ln1;
    std::string ln2;
    std::cout << "Введите первое предложение\n";
    std::cin >> ln1;
    std::cout << "Введите второе предлоджение\n";
    std::cin >> ln2;
    if (ln1[0] == ln2[0]) {
        std::cout << "Первые символы строк совпадают\n";
    }
    else {
        std::cout << "Первые символы строк не совпадают\n";
    }

}
void date25_06_2024_1_2_8() {
    //Проверьте, что это число двухзначное.
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    if (num > 9 && num < 100) {
        std::cout << "Число двухзначное\n";
    }
    else {
        std::cout << "Число не двухзначное\n";
    }
}
void date25_06_2024_1_3_1() {
    //Расскажите, в чем отличие типа short от типа int. 
    // Short тоже представляет собой целочисленный тип данных, но диапазон значений может быть только от -3к~ до 3к. (16 бит).
}
void date25_06_2024_1_3_2() {
    // Выведите в консоль все целые числа от 1 до 100
    int x = 1;
    for (; x <= 100; x += 1) {//vlad todo: первая конструкция лишняя, там выполняются действия перед началом итераций и обычно они испольщзуются для инициализации переменных
        std::cout << x << std::endl;
    }
}
void date25_06_2024_1_3_3() {
    //Дана строка. Если в этой строке более одного символа, выведите в консоль предпоследний символ этой строки.
    std::string txt;
    std::cout << "Введите предложение\n";
    std::cin >> txt;
    if (txt.length() > 1) {
        std::cout << txt[txt.length() - 2] << std::endl;
    }
    else {
        std::cout << "Введен только только один символ\n"; 
    }
}
void date25_06_2024_1_3_4() {
    //Дано целое число. Проверьте, что первая и последняя цифры этого числа совпадают.
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    int last = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    if (num == last) {
        std::cout << "Первая и последняя цифры числа совпадают\n";
    }
    else {
        std::cout << "Первая и последняя цифры числа не совпадают\n";
    }
}
void date25_06_2024_1_3_5() { //vlad todo: перестала писать комментарии к заданиям)))
    int num1, num2;
    std::cout << "Введите первое число\n";
    std::cin >> num1;//vlad todo: если num1 = 5, а num2 = 1 то пишет что числа равны
    std::cout << "Введите второе число\n";
    std::cin >> num2;
    if (num1 > num2) {
        std::cout << num1 << std::endl;
    }
    else {
         if (num1 < num2) {
             std::cout << num2 <<std::endl; 
         }
         else {
             std::cout << "Числа равны\n";
         }
    }
   
}

void date25_06_2024_1_3_7() {
    unsigned int num;
    std::cout << "Введите номер месяца (от 1 до 12)\n";
    std::cin >> num;
    if (num == 1 || num == 2 || num == 12) {
        std::cout << "Зима\n";
    }
    if (num == 3 || num == 4 || num == 5) {
        std::cout << "Весна\n";
    }
    if (num == 6 || num == 7 || num == 8) {
        std::cout << "Лето\n";
    }
    if (num == 9 || num == 10 || num == 11) {
        std::cout << "Осень\n";
    }
}

void date25_06_2024_1_3_6() {
    //Дана строка, содержащая целое число. Преобразуйте эту строку в число.
    std::string str = "123328754";
    
    int x = 0;

    for (int i = 0; i < str.length(); i++)
    {
        x = x * 10;
        x = x + str[i] - 48;
    }
    std::cout << x;
   

}
void date25_06_2024_1_byVlad() {
    int a = 18;
    int b = 6;

    a = a + b;//15

    b = a - b;//5

    a = a - b;


    std::cout << b;//5
    std::cout << a;//10

}

void date26_06_2024_1_4_1(){
    // Расскажите, в чем отличие типа int от типа float.
    // Float тип данных с плавающей точкой .
    }

void date26_06_2024_1_4_2() {
// Выведите в консоль все четные числа из промежутка от 2 до 1000.
   
    for (int x = 2; x <= 1000; x += 2) {
        std::cout << x << std::endl;
    }
}
void date26_06_2024_1_4_3() {
    //Переберите и выведите в консоль по очереди все ее символы
    std::string i;
    std::cout << "Введите предложение\n";
    std::cin >> i;
    for (int n = 0; n < i.length(); n++) {
        std::cout << i[n] << std::endl;
    }
}
void date26_06_2024_1_4_4() {
    // Получите остаток деления первого числа на второе.
    int x = 52, y = 5;
    int i = x % y;
    std::cout << i << std::endl;
}
void date26_06_2024_1_4_5() {
    // Определите, в какую четверть часа попадает это значение.
    unsigned int min;
    std::cout << "Введите число (от 1 до 60)\n";
    std::cin >> min;
    if (min < 16) {
        std::cout << "Первая четверть часа\n";
    }
    else {
        if (min > 15 && min < 31) {
            std::cout << "Вторая четверть часа\n";
        }
        else {
            if (min > 30 && min < 46) {
                std::cout << "Третья четверть часа\n";
            }
            else {
                if (min > 45 && min < 61) {
                    std::cout << "Четвертая четверть часа\n";
                }
                else {
                    std::cout << "Введено недопустимое значение\n";
                }
            }
        }
    }
}
void date26_06_2024_1_4_6() {
    // Дано двухзначное число. Проверьте, что в нем вторая цифра больше первой.
    int num;
    std::cout << "Введите число\n";
    std::cin >> num;
    int last = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    if (num < last) {
        std::cout << "Вторая цифра числа больше\n";
    }
    else {
        if (num == last) {
            std::cout << "Циры числа равны\n";
        }
        else {
            std::cout << "Первая цифра числа больше\n";
        }
    }

}
void date26_06_2024_1_5_1() {
    // Расскажите, сколько байтов занимает число типа int.
    // 4 байта 
}
void date26_06_2024_1_5_2() {
    // Выведите в консоль все числа кратные 7 в промежутке от -100 до 100.
    int num = 7;
    int x;
    for (x = -100; x <= 100; x++) {
        int y = x % num;
        if (y == 0) {
            std::cout << x << std::endl;
        }
    }
}
void date26_06_2024_1_5_3() {
    // Даны два целых числа. Проверьте, что первые цифры этих чисел совпадают.
    int num1, num2;
    std::cout << "Введите первое число\n";
    std::cin >> num1;
    std::cout << "Введите второе число\n";
    std::cin >> num2;
    while (num1 >= 10) {
        num1 /= 10;
    }
    while (num2 >= 10) {
        num2 /= 10;
    }
    if (num1 == num2) {
        std::cout << "Первые цифры чисел совпадают\n";
    }
    else {
        std::cout << "Первые цифры чисел не совпадают\n";
    }
}
void date26_06_2024_1_5_4() {
    // Даны два целых числа. Проверьте, что первое число без остатка делится на второе.
    int x, y;
    std::cout << "Введите первое число\n";
    std::cin >> x;
    std::cout << "Введите второе число\n";
    std::cin >> y;
    int a = x % y;
    if (a == 0) {
        std::cout << "Первое число делится на второе без остатка\n";
    }
    else {
        std::cout << "Первое число делится на второе с остатком\n";
    }
}
void date26_06_2024_1_5_5() {
    // Дана некоторая строка. Переберите и выведите в консоль по очереди все символы с конца строки.
    std::string str;
    std::cout << "Введите предложение\n";
    std::cin >> str;
    
    for (int i = str.length(); i >= 0; i -= 1) {
        std::cout << str[i] << std::endl;
    }
}
void date26_06_2024_1_5_6() {
    // Даны три целых числа. Выведите в консоль большее из этих чисел.
    int x, y, n;
    std::cout << "Введите первое число\n";
    std::cin >> x;
    std::cout << "Введите второе число\n";
    std::cin >> y;
    std::cout << "Введите третье число\n";
    std::cin >> n;
    if (x > y && x > n) {
        std::cout << x << std::endl;
    }
    if (y > x && y > n) {
        std::cout << y << std::endl;
    }
    if (n > x && n > y){
        std::cout << n << std::endl;
    }
}
void date26_06_2024_1_5_7() {
    // Даны три символа. Слейте эти символы в строку
    char a = 'a', b = 'b', c = 'c';
    std::string x;
   // x[0] = a;
    //x[1] = b;
   // x[2] = c;
   // std::cout << x << std::endl;
}
void date26_06_2024_1_5_8() {
    // Дано целое число, содержащее количество килобайт. Переведите это значение в байты
    int kb;
    std::cout << "Введите число\n";
    std::cin >> kb;
    int b = kb * 1000;
    std::cout << b << std::endl;
}
void date26_06_2024_1_5_9() {
    // Дано целое число, содержащее номер дня от 1 до 31
    unsigned int num;
    std::cout << "Введите дату\n";
    std::cin >> num;
    if (num > 0 && num < 11) {
        std::cout << "Первая декада месяца\n";
    }
    if (num > 10 && num < 21) {
        std::cout << "Вторая декада месяца\n";
    }
    if (num > 20 && num < 32) {
        std::cout << "Третья декада месяца\n";
    }
}
void date26_06_2024_1_6_1() {
    // Расскажите, сколько байтов занимает число типа long.
    // 8 
}
void date26_06_2024_1_6_2() {
    // Найдите сумму всех целых чисел от 1 до 100.
    int x = 1, sum = 0;
    for (; x <= 100; x++) {
        sum += x;
    }
    std::cout << sum << std::endl;
}

void createArray() {
  //  int a, b, c;
    
    int sotrudniki[]{ 2, 3, 1 };
    int positionsY[]{ 123, 123, 123, 123, 123 };



    /*
    std::cout << sizeof(arr)/ sizeof(arr[0]) << std::endl; //узнаем какой размер у нашего массива
    
    int sizeArray = sizeof(arr) / sizeof(arr[0]);


    for (int i = 0; i < sizeArray; i++) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    */
}
void date27_06_2024_2_1_1() {
    // Дан массив с целыми числами. Выведите в консоль количество элементов в этом массиве.
    int arr[] = { 1, 2, 3, 4, 5 };
    int s = sizeof(arr) / sizeof(arr[0]); // s = длина массива / длина одного элемента = кол-во элементов 
   //  std::cout << sizeof(arr) << std::endl; // объем всего массива 
    std::cout << s << std::endl; // кол-во элементов
    // std::cout << sizeof(arr) / s << std::endl; // объем одного элемента 
}
void date27_06_2024_2_1_2() {
    // Дан массив с целыми числами. Выведите в консоль элементы этого массива.
    int arr[] = { 1, 2, 3, 4, 5 };
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++) {
        std::cout << arr[i];
    }
}
void date27_06_2024_2_1_3() {
    // Дан массив со строками. Выведите в консоль первые символы каждого элемента этого массива
    std::string arr[] = { "123", "456", "789" };
    //std::cout << arr[0][0]; // 1
    int s = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < s; i++) {
        std::cout << arr[i][0] << std::endl;
    }
}
void date27_06_2024_2_1_4() {
    // Дано некоторое целое число.Найдите сумму всех его четных цифр.
    int num = 12345, sum = 0;

    while(num / 10 > 0){
        if ((num%10) % 2 == 0) sum = sum + num % 10;
        num = num / 10;
    }
    if ((num % 10) % 2 == 0) sum = sum + num % 10;
    num = num / 10;
    std::cout << sum;
    
}
void date27_06_2024_2_1_5() {//topay
    // Дано некоторое целое число. Найдите факториал этого числа
    unsigned int n = 12;
    int a = 1;
    if (n > 0) {
        for (; n > 1; n = n - 1) {
            a *= n;
        }
    }
    std::cout << a << std::endl;
}
void date28_06_2024_2_2_1() {//topay
    // Найдите среднее арифметическое всех целых чисел от 1 до 100.
    int x = 0;
    for (int i = 0; i <= 100; i++){
        x += i;
    }
    std::cout << x / 100 << std::endl;
}
void date28_06_2024_2_2_2() {//topay
    //Дан массив с целыми числами. Выведите в консоль количество байт, занимаемых этим массивом.
    int arr[] = { 1, 2, 3, 4, 5 };
    std::cout << sizeof(arr) << std::endl;
}
void date28_06_2024_2_2_3() {//topay
    //Дано число. Найдите сумму первой и последней цифры этого числа
    int num = 12345;
    int last = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    std::cout << num + last << std::endl;
}
void date28_06_2024_2_2_4() {//topay
    // Дан массив с целыми числами. Найдите сумму элементов этого массива.
    int arr[] = { 1, 2, 3, 4, 5 };
    int s = sizeof(arr) / sizeof(arr[0]); // кол-во элементов
    int sum = 0;
    for (int i = 0; i < s; i++) {
        sum =+ arr[i];
    }
    std::cout << sum << std::endl;
}
void date28_06_2024_2_2_5() { // ДОДЕЛАТЬ
    // Дано некоторое целое число.Выведите в консоль все его цифры с конца.
    int num = 12345;
    while (num >= 1) {
        int last = num % 10;
        num /= 10;
        std::cout << last << std::endl;
    }
}
void date28_06_2024_2_3_1(){//topay
    //Дан массив с целыми числами. Найдите сумму квадратов элементов этого массива.
    int arr[] = { 1, 2, 3, 4, 5, };
    int s = sizeof(arr) / sizeof(arr[0]); // кол-во элементов
    int y = 0;
    for (int i = 0; i < s; i++) {
        y += arr[i]*arr[i];
    }
    std::cout << y << std::endl;
 }
void date28_06_2024_2_3_2() {//topay
    //Дан массив с целыми числами.Найдите среднее арифметическое этого массива.
    int arr[] = { 1, 2, 3 , 4, 5 };
    int s = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i < s; i++) {
        sum += arr[i];
    }
    std::cout << sum / s << std::endl;
}
void date28_06_2024_2_3_3() {//CДЕЛАТЬ 
    //Дано некоторое целое число. Выведите в консоль первые его три цифры.
    int num = 12345;
    while (num >= 1000) {
        num /= 10;
    }
    std::cout << num << std::endl;
}
void date28_06_2024_2_3_4() {//topay
    // Дан массив. С помощью цикла заполните этот массив целыми числами от 1 до 10.
    unsigned int arr[10];
    int i = 0;
    for (; i < 10; i++) {
        arr[i] = i + 1; 
        std::cout << arr[i] << std::endl;
    }  
}
void date28_06_2024_2_4_1() {// СДЕЛАТЬ
    // Дано некоторое целое число.Выведите в консоль его последние три цифры.
    int num = 12345;
    while (num >= 100){
        int last = num % 10;
        num /= 10;
        std::cout << last << std::endl;
    }

}
void date28_06_2024_2_4_2() {// СДЕЛАТЬ
    // Дан массив с числами. Найдите сумму квадратных корней элементов этого массива.
    int arr[] = { 1, 2, 3, 4, 5 };
    int i;
    double sum = 0;
    int s = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < s; i++) {
        sum += sqrt(arr[i]);
    }
    std::cout << sum << std::endl;

}
void date28_06_2024_2_4_3() {//topay
    // Дан массив с числами.Увеличьте каждый элемент этого массива в два раза:
    int arr[] {1, 2, 3, 4};
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++) {
        arr[i] *= 2;
        std::cout << arr[i] << std::endl;
    }
}
void date28_06_2024_2_4_4() {//topay
    //Дан массив. С помощью цикла заполните этот массив целыми числами от 10 до 1.
    unsigned int arr[10];
    int i = 0;
    int num = 11;
    for (; i < 10; i++) {
        arr[i] = num -= 1;
        std::cout << arr[i] << std::endl;
    }
    /*
    for (int j = 10; j > 0; j--) {
        arr[j - 1] = j;
        std::cout << arr[j - 1] << std::endl;
    }
    */
}
void date30_06_2024_2_5_1() {
    //Дан массив с числами. Найдите сумму положительных элементов этого массива.
    int arr[] = { 1, 2, -3, 4, -5 };
    int s = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for (int i = 0; i <= s; i++) {   
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    std::cout << sum << std::endl;
}
void date30_06_2024() {
    int size;
    std::cout << "Введите размер массива\n";
    std::cin >> size;
    int *arr = new int [size];
   // arr[5] = 555;
    //arr[1] = 555;
    //arr[2] = 777;
    //std::cout << "Введите значение элемента массива\n";
    //std::cin >> arr[0];
    for (int i = 0; i < size; i++) {
        std::cout << "Введите значение элемента массива\n";
        std::cin >> arr[i];
       // std::cout << arr[i] << std::endl;
    }
}
void date01_07_2024_1() {
    /* Создай одномерный динамический массив длиной N,
    пусть пользователь заполнит его с консоли. Вывести сумму всех элементов массива. */
    int n;
    std::cout << "Введите размер массива\n";
    std::cin >> n;
    int* arr = new int [n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        std::cout << "Введите значение элемента массива\n";
        std::cin >> arr[i];
        sum += arr[i];
    }
    std::cout << sum << std::endl;
}
void date01_07_2024_2() {
    /* Создай два одномерных массива. Оба с длиной N. 
    Первый массив заполняет пользователь, второй массив состоит из элементов первого во второй степени.*/
    int n;
    std::cout << "Введите размер массива\n";
    std::cin >> n;
    int* ar = new int[n];
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "arr[" << i<< "] = ";
        std::cin >> ar[i];
        std::cout << std::endl;

        arr[i] = ar[i] * ar[i];
    }
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }
}
void date01_07_2024_3() {
    /* Создай одномерный динамический массив длиной N, 
    пусть пользователь заполнит его с консоли. Потом отсортируй массив по убыванию и выведи его элементы.*/
    int n;
    std::cout << "Введите размер массива\n";
    std::cin >> n;
    int* arr = new int[n];
    //int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
        std::cout << std::endl;
    }

    bool needSort;

    do {
        needSort = false;
        for (int i = 0; i < n - 1; i++) {

            if (arr[i] > arr[i + 1]) {
                int a = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = a;
                needSort = true;
            }
        }

    } while (needSort);

    std::cout << "____________________________" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    
}
void date01_07_2024_4() {
    /* Создай статический двумерный массив и выведи его в консоль.*/
    const int size = 3;
    int arr[size][size] = {
        {1, 3, 4},
        {4, 5, 3},
        {3, 5, 1},
    };

    for (int a = 0; a < size; a++) {
        for (int b = 0; b < size; b++) {
            std::cout << arr[a][b] << " ";
        }
        std::cout << std::endl;
    }
}
void date01_07_2024() {
    const int size = 5;
    int arr[size][size] = {
        {5, 8, 1, 5, 7},
        {2, 4, 3, 6, 1},
        {1, 3, 4, 6, 1},
        {2, 3, 3, 1, 5},
        {3, 1, 5, 1, 2},
    };
    int sum = 0;
    for (int a = 0; a < size; a++) {
        for (int b = 0; b < size; b++) {
            sum += arr[a][b];
            std::cout << arr[a][b] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << sum << std::endl;
}
void date01_07_2024_5() {
    /* Создай двумерный динамический массив размером N на N и заполни его с консоли. 
    После выведи этот массив. Заполнение массива реализуй красиво, чтобы между вводом был пробел 
    где заполняешь строку и перенос строки когда "строка" массива заканчивается (все элементы строки введены).*/
    unsigned int n = 4;
    //int arr[10][20];
    int rows = n;
    int cols = n;
    int **arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "arr[" << i << "]" << "[" << j << "] = ";
            std::cin >> arr[i][j];
            std::cout << std::endl;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void date01_07_2024_6() {
    /* Создай двумерный динамический массив размером N на N и заполни его с консоли. 
    Спроси у пользователя на какой множитель нужно умножить все элементы массива, умножь и выведи массив 
    который у тебя получился. */
    unsigned int n = 5;
    //int *arr = new int[n][n];
    int rows = n;
    int cols = n;
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << "arr[" << i << "]" << "[" << j << "] = ";
            std::cin >> arr[i][j];
            std::cout << std::endl;
        }
    }
    int m;
    std::cout << "На какое число необходимо умножить элементы массива?\n";
    std::cin >> m;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] *= m;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
bool getTrue() {
   
    return true;
}
int getSum(int x, int y) {
    int sum = x + y;
    return sum;
}
int getLastDigital(int x) {
    int last = x % 10;
    return last;
}

int** createDoubleArray(int rows, int cols) {
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    return arr;
}

void printArray(int** arr, int rows, int cols) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void setFillArray(int** arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = rand() % 10;
        }
    }
}
void clearConsole() {
    system("CLS");
}
int umnojenie(int x, int y) {
    int umn = x * y;
    std::cout << umn << std::endl;
    return umn;
}
int sum(int x, int y) {
    int sum = x + y;
    std::cout << sum << std::endl;
    return sum;
}
int raznitca(int x, int y) {
    int razn = x - y;
    std::cout << razn << std::endl;
    return razn;
}
int delenie(int x, int y) {
    int delen = x / y;
    std::cout << delen << std::endl;
    return delen;
}
void date03_07_2024() {
    int x, y;
    int select;
    do {
        std::cout << "Введите первое значение\n";
        std::cin >> x;
        std::cout << "Введите второе значение\n";
        std::cin >> y;
        std::cout << "Вы хотите:\n 1. Найти произведение\n 2. Найти сумму\n 3. Найти разницу\n 4. Найти разность\n 5. Выйти\n";
        std::cin >> select;
        if (select == 1) {
            umnojenie(x, y);
        }
        if (select == 2) {
            sum(x, y);
        }
        if (select == 3) {
            raznitca(x, y);
        }
        if (select == 4) {
            delenie(x, y);
        }
        if (select == 5) {
            std::cout << "Все го хо ро ше го\n";
        }
    } while (select != 5);

}
void date04_07_2024_1() {
 /*Напишите программу, которая создает двумерный массив размером m x n(где m и n задаются пользователем),
 заполняет его значениями по умолчанию (например, нулями), и выводит его на экран. */
    int m = 0, n = 0;
  //  int rows = m;
   // int cols = n;
  
    do {
        std::cout << "Введите размер массива:\nСтроки = ";
        std::cin >> m;
    } while (m <= 0);
    do {
        std::cout << "Стоблцы = ";
        std::cin >> n;
    } while (m <= 0);
    
    int** arr = new int* [m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    

}

void date04_07_2024_2(){
 /* Напишите программу, которая создает двумерный массив размером m x n (где m и n задаются пользователем), 
  заполняет его случайными значениями от 0 до 99 и вычисляет сумму всех элементов массива.*/
    unsigned int n = 0, m = 0;
    std::cout << "Введите размер массива:\nСтроки = ";
    std::cin >> m;
    std::cout << "Столбцы = ";
    std::cin >> n;
    int** arr = new int* [m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
          

            arr[i][j] = rand() % 99 + 0;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }
    std::cout << sum << std::endl;

}
void date04_07_2024_3() { // не сделано
  /* Напишите программу, которая создает квадратный двумерный массив размером n x n (где n задается пользователем), 
  заполняет его значениями по возрастанию, начиная с 1, и выводит транспонированную матрицу.*/
    unsigned int n;
    std::cout << "Введите размер массива\n";
    std::cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    int x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            x++;
            arr[i][j] = x;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

}
void date04_07_2024_4() {
 /*Напишите программу, которая умножает две матрицы размером m x n и n x p. Размеры m, n и p задаются пользователем, 
  а элементы матриц вводятся с клавиатуры. */
}
void date04_07_2024_5() { // не сделано 
 /*Напишите программу, которая создает квадратный двумерный массив размером n x n (где n задается пользователем), 
 заполняет его значениями по возрастанию, начиная с 1, и поворачивает матрицу на 90 градусов по часовой стрелке. */
    unsigned int n;
    std::cout << "Введите размер массива\n";
    std::cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    int x = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            x++;
            arr[i][j] = x;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    //int a;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = arr[j][i];
           //arr[i][j] = arr[n - i - 1][j];
           //arr[n - i - 1][j] = arr[n - i - 1][n - j - 1];
         // arr[n - i - 1][n - j - 1] = arr[i][n - j - 1];
           //arr[j][n - i - 1] = a;
            std::cout << arr[j][i] << " ";
            
        }
        std::cout << std::endl;
    }
}
int max(int x, int y) {
    int max = 0;
    if (y > x) {
        max = y;
        std::cout << max << std::endl;
    }
    if (x > y) {
        max = x;
        std::cout << max << std::endl;
    }
    if (x == y) {
       std::cout << "Числа равны\n";
    }
    return max;
}
void date05_07_2024_6() {
    /* Напишите функцию max, которая принимает два целых числа и возвращает большее из них. 
    Напишите программу, которая использует эту функцию для поиска максимального значения из двух чисел, введенных пользователем.*/ 
    int x, y;
    std::cout << "Введите числа:\nx = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    max(x, y);
}



int factorial(int x) {
    //int factorial;
    int a = 1;
    if (x > 0) {
        for (; x > 1; x--) {
            a *= x;
        }
    }
    return a;
}
void date05_07_2024_7() {
    /* Напишите функцию factorial, которая принимает целое число и возвращает его факториал. Напишите программу, 
    которая вызывает эту функцию и выводит результат */
    int x;
    std::cout << "Введите число\n";
    std::cin >> x;
    std::cout << "Факториал числа равен: " << factorial(x) << std::endl;
}
int findMin(int** arr, int n) {
    int a = 1000;
    int i = 0;
    int j = 0;
         for (i = 0; i < n; i++) {
             for (j = 0; j < n; j++) {
                 if (a > arr[i][j]) {
                     a = arr[i][j];
                 }
             }
         }
    return a;
}
void date05_07_2024_8() {
    /*Напишите функцию findMin, которая принимает массив целых чисел и его размер, и возвращает минимальное значение в массиве. 
    Напишите программу, которая использует эту функцию для нахождения минимального значения в массиве, введенном пользователем.*/
    unsigned int n;
    std::cout << "Введите размер массива\n";
    std::cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "arr[" << i << "]" << "[" << j << "] = ";
            std::cin >> arr[i][j];
            std::cout << std::endl;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Наименьшее значение в массиве: " << findMin(arr, n) << std::endl;

}

int power(int bace, int exponent) {
    int p = pow(bace, exponent);
    return p;
}
void date06_07_2024_9() {
    /*Напишите функцию power, которая принимает два целых числа base и exponent и возвращает значение base в степени exponent. 
    Напишите программу, которая использует эту функцию для вычисления степени числа, введенного пользователем. */
    int base, exponent;
    std::cout << "Введите число и степень:\n" << "Число = ";
    std::cin >> base;
    std::cout << "Степень = ";
    std::cin >> exponent;
    std::cout << power(base, exponent) << std::endl;
}
int averageArray(int** arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }
    int q = n * n;
    sum = sum / q;
    return sum;
}
void date06_07_2024_10() {
    /*Напишите функцию averageArray, которая принимает массив целых чисел и его размер, и возвращает среднее значение элементов массива. 
    Напишите программу, которая использует эту функцию для вычисления среднего значения элементов массива, введенного пользователем. */
    unsigned int n;
    std::cout << "Введите размер массива\n";
    std::cin >> n;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << "arr[" << i << "]" << "[" << j << "] = ";
            std::cin >> arr[i][j];
            std::cout << std::endl;
        }
    }
    std::cout << averageArray(arr, n) << std::endl;
}
int nod(int x, int y) {
    while (x != y) {
        if (x > y) {
            x -= y;
        }
        else { 
            y -= x;
        }
    }
    return x;
}
void date09_07_2024_1() {
    /* .Напишите функцию, которая принимает два целых числа a и b и возвращает их наибольший общий делитель (НОД) 
    с использованием алгоритма Евклида. */
    int x, y;
   
    do {
        std::cout << "Введите первое число: ";
        std::cin >> x;
    } while (x <= 0); 
    
    do {
        std::cout << "Введите второе число: ";
        std::cin >> y;
    } while (y <= 0);
    std::cout << "Наибольший общий делитель числа равен: " << nod(x, y) << std::endl;
}
int fib(int a) {
    int n = fabs(a);

    /*arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    int i;
    for (i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        std::cout << arr[i - 1] << std::endl;
    }*/
    /*int x = 1;
    int y = 0;
    std::cout << y << std::endl << x << std::endl;
    for (int i = 0; i <= n; i++) {
        int j = x + y;
        x = y;
        y = j;
        std::cout << y << std::endl;
    }*/
    int x = 0;
    int y = 1;
    int f;
    std::cout << x << std::endl << y << std::endl;
    for (int i = 0; i < n - 2; i++) {
        f = x + y;
        x = y;
        y = f;
        std::cout << f << std::endl;
    }
    return f;
}
void date09_07_2024_2() {
    /* Напишите функцию, которая принимает целое число n и выводит первые n чисел Фибоначчи. 
    Используйте цикл для генерации чисел Фибоначчи.*/
    int a;
    //int* arr = new int [a];
    std::cout << "Введите положительное число: ";
    std::cin >> a;
    a = fabs(a);
    fib(a);
}
int snum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
void date09_07_2024_3() {
    /* Напишите функцию, которая принимает целое число n и возвращает сумму его цифр. 
    Используйте цикл для сложения цифр числа. */
    int num; 
    std::cout << "Введите число: ";
    std::cin >> num;
    num = fabs(num);
    std::cout << snum(num) << std::endl;
}
int mnum(int num) {
    std::string txt;
    txt.resize(10000000);
    int i = 0;

        while (num > 0) {
            txt[i] = num % 10 + 48;
            num /= 10;
            std::cout << txt[i++] << std::endl;
        }
   // std::cout << txt << std::endl;
   /* for (int i = 0; i < txt.length(); i++) {
       //x = x * 10;
        x = x + txt[i] - 48;
        // int x = stoi(txt);
    }
    std::cout << x << std::endl; */
    int x = stoi(txt);
    return x;
}
void date09_07_2024_4() {
    /* Напишите функцию, которая принимает целое число n и возвращает число, составленное из его цифр в обратном порядке. 
    Используйте цикл для создания обратного числа. */
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;
    num = fabs(num);
    std::cout << mnum(num) << std::endl;
}
int main()
{
    setlocale(LC_ALL, "RU");
    date09_07_2024_4();

    /*int rows = 10, cols = 5;

    int** arr = createDoubleArray(rows, cols);
  
    setFillArray(arr, rows, cols);

    printArray(arr, rows, cols);

    clearConsole();

   // int result = getLastDigital(526);
    //std::cout << result;*/

    system("pause");
}






void exampleFor() { //неработоспособная функция - шпаргалка циклов

    while (true/*вместо этого пишем условие*/) { // тут указываем условие для цикла, пока оно истинно цикл будет повторяться
        std::cout << "+";
    }

    do {



    } while (true/*вместо этого пишем условие*/);

    for (/* действие которые выполнится перед началом цикла */; /* уловие которое будет запускать цикл снова и снова*/; /*действие котороые выполняется каждую итерацию цикла*/) {



    }

    for (int i = 0; i < 10; i++) {

    }

}