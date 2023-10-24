Задание 3. Реестр данных на шаблонах

Что нужно сделать

С помощью шаблонов реализуйте простой класс реестра, хранящий произвольные типы значений по ключам произвольного типа. Ключи при этом могут повторяться.

Реестр должен поддерживать следующие операции: добавление элемента с ключом, удаление элементов с заданным ключом, вывод всех значений с ключами в консоль, поиск элементов по ключу.

Для тестирования программы предусмотрите ввод данных и команд из стандартной консоли: 

add — добавить элемент с ключом;
remove — удалить все элементы с заданным ключом;
print — напечатать на экране все элементы с их ключами;
find — найти все элементы по их ключу.
Данный словарь должен работать на значениях и ключах следующих типов: int, double, std::string.

Рекомендации

Для реализации можете использовать стандартный шаблон std::vector, который в свою очередь уже будет хранить ваши пары ключей и значений.
Сама пара ключа и значения как раз и будет классом (или струкурой), шаблонизированным двумя типами: типом значения и типом ключа. 
При желании вы можете создать отдельную шаблонизированную функцию с вводом команд и их данных.
