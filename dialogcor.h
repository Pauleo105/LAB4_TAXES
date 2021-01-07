/*!
\file
\brief Заголовочный файл с описанием переменных, функций и методов, необходимых для диалоговой программы коррекции элемента

Данный файл содержит в себе определения переменных, функций и методов, используемых при коррекции элемента
*/
#ifndef _DIALOGCOR_H_
#define _DIALOGCOR_H_
#include "tax.h"
#include "supportfunc.h"

/**
 * @brief Вспомогательная функция для вывода диалогового меню по коррекции элемента в консоль
 * 
 * @param ptr Ссылка на элемент, который корректируется
 */
void showsub(taxes::Budget&);
/**
 * @brief Функция для вывода в консоль меню для коррекции элемента 
 * 
 * @param submenu Массив из описаний доступных пользователю функций для коррекции элемента
 * @param ptr Ссылка на элемент, который корректируется
 * @return Индекс выбранной функции
 */
int choise_s(const char*, taxes::Budget&);
/**
 * @brief Диалоговая функция для изменения фамилии
 * 
 * @param ptr Ссылка на элемент, который корректируется
 * @return 1
 */
int surname_s(taxes::Budget&);
/**
 * @brief Диалоговая функция для изменения имени
 * 
 * @param ptr Ссылка на элемент, который корректируется
 * @return 1
 */
int name_s(taxes::Budget&);
/**
 * @brief Диалоговая функция для изменения отчества
 * 
 * @param ptr Ссылка на элемент, который корректируется
 * @return 1
 */
int lastname_s(taxes::Budget&);
/**
 * @brief Диалоговая функция для изменения места работы
 * 
 * @param ptr Ссылка на элемент, который корректируется
 * @return 1
 */
int work_s(taxes::Budget&);
/**
 * @brief Диалоговая функция для изменения должности
 * 
 * @param ptr Ссылка на элемент, который корректируется
 * @return 1
 */
int post_s(taxes::Budget&); 
/**
 * @brief Диалоговая функция для добавления выплаты
 * 
 * @param ptr Ссылка на элемент, который корректируется
 * @return 1
 */
int payment_s(taxes::Budget&);
/**
 * @brief Диалоговая функция для изменения номера контракта
 * 
 * @param ptr Ссылка на элемент, который корректируется
 * @return 1
 */
int contract_s(taxes::Budget&);

extern const char* submenu[8];///< Массив из описаний доступных пользователю функций для коррекции элемента
extern int (*fptrsub[])(taxes::Budget&);///< Массив из указателей на функции для коррекции элемента

#endif