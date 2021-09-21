#ifndef TIME_H
#define TIME_H

using namespace std;

class Time {
    int hours{};
    int minutes{};

public:
    Time();

    Time(int hours, int minutes);

    [[maybe_unused]] [[nodiscard]] char *toCharArray() const;

    [[nodiscard]] string toString() const;

    [[nodiscard]] int getHours() const;

    [[nodiscard]] int getMinutes() const;

    [[maybe_unused]] void setHours(int hours);

    [[maybe_unused]] void setMinutes(int minutes);

    void setTime(int hours, int minutes);
};

#endif // TIME_H