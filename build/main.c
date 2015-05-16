#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#include "main.h"
#include "natural.h"
#include "integer.h"
#include "rational.h"
#include "polynom.h"
#include "inputs.h"

int main(int argc, char* argv[])
  {
  struct NATURAL An, Bn, Cn;
  struct INTEGER Ai, Bi, Ci;
  struct RATIONAL Ar, Br, Cr;
  struct POLYNOMIAL Ap, Bp, Cp;
  
  char ch = 0;
    
  bool repeat = true;

  while ( repeat )
    {
    system("cls");
    setlocale (LC_ALL, ".1251");

    /* Main menu */
    printf ("1. %s\n", "Действия с натуральными числами");
    printf ("2. %s\n", "Действия с целыми числами");
    printf ("3. %s\n", "Действия с рациональными числами");
    printf ("4. %s\n", "Действия с многочленами");
    printf ("5. %s\n", "Выход из программы");

    _uint16 menu_item = 0;
    while ( (menu_item < 1) || (menu_item > MENU_EXIT) )
      {
      printf ("%s", "Выберите пункт меню: ");
      scanf ("%d", &menu_item);

      if ( (menu_item < 1) || (menu_item > MENU_EXIT) )
        printf ("%s\n", "Неверный ввод!");
      }

    system ("cls");
    int item = -1;

    switch (menu_item)
      {
      case MENU_NATURAL:
        printf ("0. %s\n", "Ввод натуральных чисел");
        printf ("1. %s\n", "Сравнение чисел");
        printf ("2. %s\n", "Проверка на равенство нулю");
        printf ("3. %s\n", "Добавление единицы");
        printf ("4. %s\n", "Сложение");
        printf ("5. %s\n", "Вычитание");
        printf ("6. %s\n", "Умножение на цифру");
        printf ("7. %s\n", "Умножение на 10 в степени k");
        printf ("8. %s\n", "Умножение чисел");
        printf ("9. %s\n", "Вычитание числа, умноженного на цифру");
        printf ("10. %s\n", "Вычисления первой цифры деления большего \
                натурального на меньшее, домноженное на 10^k");
        printf ("11. %s\n", "Частное от деления");
        printf ("12. %s\n", "Остаток от деления");
        printf ("13. %s\n", "НОД двух чисел");
        printf ("14. %s\n", "НОК двух чисел");
        item = -1;
        while (item < 0 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 0 || item > 15)
            printf ("Неверный ввод!\n")
          }
        
        switch (item)
          {
          case 0:
          An=ENNAT();
          Bn=ENNAT();
          break;
          case 1:
          break;
          
          case 2:
          ch = 0;
          while (ch < 'A' || ch 'C')
            {
            printf ("Выберите проверяемое число (A, B или C): ");
            scanf ("%c", &ch);
            if (ch < 'A' || ch > 'C')
              printf ("Неверный ввод!\n");
            }
          switch (ch)
            {
            case 'A':
            printf ("Число А %sравно нулю", ( NZER_N_B(An) )? "" : "не ");
            break;
            
            case 'B':
            printf ("Число B %sравно нулю", ( NZER_N_B(Bn) )? "" : "не ");
            break;
            
            case 'C':
            printf ("Число C %sравно нулю", ( NZER_N_B(Cn) )? "" : "не ");
            break;
            }
          break;
          
          case 3:
          break;
                    
          case 4:
          break;
                    
          case 5:
          break;
                    
          case 6:
          break;
                    
          case 7:
          break;
                    
          case 8:
          Cn = MUL_NN(An, Bn);
          break;
                    
          case 9:
          break;
                    
          case 10:
          break;
                    
          case 11:
          break;
                    
          case 12:
          break;
                    
          case 13:
          break;
          
          case 14:
          Cn = LCM_NN_N (An, Bn);
          break;
          
          case 15:
          break;
          }
      break;

      case MENU_INTEGER:
        printf ("0. %s\n", "Ввод целых чисел");  
        printf ("1. %s\n", "Абсолютная величина числа");
        printf ("2. %s\n", "Определение положительности числа");
        printf ("3. %s\n", "Умножение числа на -1");
        printf ("4. %s\n", "Преобразование натурального в целое");
        printf ("5. %s\n", "Преобразование целого неотрицательного в натуральное");
        printf ("6. %s\n", "Сложение");
        printf ("7. %s\n", "Вычитание");
        printf ("8. %s\n", "Умножение");
        printf ("9. %s\n", "Частное от деления");
        printf ("10. %s\n", "Остаток от деления");
        printf ("11. %s\n", "Возврат в меню");
        item = -1;
        while (item < 0 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 0 || item > 15)
            printf ("Неверный ввод!\n")
          }
          
        switch (item)
          {
            case 0:
            Ai=ENINT();
            Bi=ENINT();
            break;
          case 1:
          break;
          
          case 2:
          break;
          
          case 3:
          break;
                    
          case 4:
          break;
                    
          case 5:
          Cn = TRANS_Z_N(Ci);
          break;
                    
          case 6:
          Ci = ADD_ZZ_Z (Ai, Bi);
          break;
                    
          case 7:
          Ci = SUB_ZZ_Z (Ai, Bi);
          break;
                    
          case 8:
          Ci = MUL_ZZ_Z (Ai, Bi);
          break;
                    
          case 9:
          Ci = DIV_ZZ_Z (Ai, Bi);
          break;
                    
          case 10:
          Ci = MOD_ZZ_Z (Ai, Bi);
          break;
                    
          case 11:
          break;
          }
      break;

      case MENU_RATIONAL:
      printf ("0. %s\n", "Ввод рациональных чисел");
        printf ("1. %s\n", "Сокращение дроби");
        printf ("2. %s\n", "Проверка на целое");
        printf ("3. %s\n", "Преообразование целого в дробное");
        printf ("4. %s\n", "Преобразование дробного в целое");
        printf ("5. %s\n", "Сложение");
        printf ("6. %s\n", "Вычитание");
        printf ("7. %s\n", "Умножение");
        printf ("8. %s\n", "Деление");
        printf ("9. %s\n", "Возврат в меню");
        item = -1;
        while (item < 0 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 0 || item > 15)
            printf ("Неверный ввод!\n")
          }
          
        switch (item)
          {
            case 0:
            Ar=ENRAT();
            Br=ENRAT();
            break;
          case 1:
          Ar = RED_Q_Q(Ar);
          break;
          
          case 2:
          break;
          
          case 3:
          break;
                    
          case 4:
          break;
                    
          case 5:
          break;
                    
          case 6:
          break;
                    
          case 7:
          Cr = MUL_QQ_Q(Ar, Br);
          break;
                    
          case 8:
          Cr = DIV_QQ_Q(Ar, Br);
          break;
                    
          case 9:
          break;
          }
      break;

      case MENU_POLYNOMS:
      printf ("0. %s\n", "Ввод полиномов");
        printf ("1. %s\n", "Сложение многочленов");
        printf ("2. %s\n", "Вычитание многочленов");
        printf ("3. %s\n", "Умножение многочлена на рациональное число");
        printf ("4. %s\n", "Умножение многочлена на x^k");
        printf ("5. %s\n", "Старший коэффициент многочлена");
        printf ("6. %s\n", "Степень многочлена");
        printf ("7. %s\n", "Вынесение из многочлена НОК знаменателей коэффициентов \
                            и НОД числителей");
        printf ("8. %s\n", "Умножение многочленов");
        printf ("9. %s\n", "Частное от деления многочленов");
        printf ("10. %s\n", "Остаток от деления многочленов");
        printf ("11. %s\n", "НОД многочленов");
        printf ("12. %s\n", "Производная многочлена");
        printf ("13. %s\n", "Преобразование многочлена - кратные корни в простые");
        printf ("14. %s\n", "Возврат в меню");
        item = -1;
        while (item < 0 || item > 15)
          {
          printf ("15. %s\n", "Возврат в меню");
          scanf ("%d", &item);
          if (item < 0 || item > 15)
            printf ("Неверный ввод!\n")
          }
          
        switch (item)
          {
            case 0:
            Ap=ENPOL();
            Bp=ENPOL();
            break;
          case 1:
          break;
          
          case 2:
          break;
          
          case 3:
          Ap = MUL_P_Q(Ap);
          break;
                    
          case 4:
          ch = 0;
          while (ch < '0' || ch > '9')
            {
            printf ("Введите k: ");
            scanf ("%c", &ch);
            if (ch < '0' || ch > '9')
              printf ("Неверный ввод!\n");
            }
          Ap = MUL_Px^k_P(Ap, (int)(ch - 48));
          break;
                    
          case 5:
          Cr = LED_P_Z(Ap);
          break;
                    
          case 6:
          printf ("Степень многочлена А: %d", DEG_P_N(Ap));
          break;
                    
          case 7:
          break;
                    
          case 8:
          Cp = MUL_PP_P (Ap, Bp);
          break;
                    
          case 9:
          break;
                    
          case 10:
          break;
                    
          case 11:
          break;
                    
          case 12:
          break;
                    
          case 13:
          break;
          
          case 14:
          break;
          }
      break;

      case MENU_EXIT:
        repeat = 0;
      break;
      }
    }
  printf ("Нажмите любую клавишу для выхода из программы");

  return 0;
  }
