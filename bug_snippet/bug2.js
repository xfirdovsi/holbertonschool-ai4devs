function calculateTotal(price, tax) {
    // Məntiqi xəta: Vergini qiymətə əlavə etmək əvəzinə çıxır
    return price - tax;
}

let result = calculateTotal(100, 18);
console.log("Ümumi qiymət: " + result);
