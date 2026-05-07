# Bug Descriptions

## Bug 1 - bug1.py
**Intended Behavior:** Funksiya "Salam" və daxil edilən adı çap etməlidir.
**Issue Type:** Syntax error.
**Notes:** Funksiya tərifində (def) `:` simvolu unudulub, bu proqramın işə düşməsinə mane olur.

## Bug 2 - bug2.js
**Intended Behavior:** Qiymətin üzərinə vergini əlavə edib ümumi məbləği qaytarmalıdır.
**Issue Type:** Logical error.
**Notes:** Kodda vergi məbləği toplanmaq əvəzinə çıxılır (`price - tax`), nəticə yanlış olur.

## Bug 3 - bug3.py
**Intended Behavior:** Siyahıdakı hər bir rəqəm üçün 100-ü həmin rəqəmə bölüb nəticəni çap etməlidir.
**Issue Type:** Runtime exception.
**Notes:** Siyahıda `0` rəqəmi olduğu üçün proqram icra zamanı "ZeroDivisionError" xətası ilə dayanır.

## Bug 4 - bug4.cpp
**Intended Behavior:** 5 elementli massivin bütün üzvlərini ekrana çıxarmalıdır.
**Issue Type:** Off-by-one error.
**Notes:** Dövr `i <= 5` şərti ilə işləyir, lakin massiv 5 elementlidir (indekslər 0-4). Bu proqramın massiv sərhədlərindən kənara çıxmasına səbəb olur.
