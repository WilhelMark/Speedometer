#include <iostream>
#include <cstdio> // Для использования std::sprintf

int main() {
    // Начальная скорость автомобиля
    double speed = 0.0;
    
    // Буфер для хранения строки с текущей скоростью
    char speed_str[20];

    // Цикл для постоянного опроса пользователя
    do {
        // Запросить у пользователя изменение скорости
        double delta;
        std::cout << "Speed delta: ";
        std::cin >> delta;

        // Обновить текущую скорость
        speed += delta;

        // Ограничить скорость в диапазоне от 0 до 150 км/ч
        if (speed < 0) {
            speed = 0;
        } else if (speed > 150) {
            speed = 150;
        }

        // Форматировать строку с текущей скоростью
        std::sprintf(speed_str, "%.1f km/h", speed);

        // Вывести текущую скорость
        std::cout << "Speed: " << speed_str << std::endl;

    } while (speed > 0.01); // Продолжать до тех пор, пока скорость не станет меньше 0.01 км/ч

    return 0;
}
