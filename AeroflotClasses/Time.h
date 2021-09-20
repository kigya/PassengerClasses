#ifndef TIME_H
#define TIME_H

using namespace std;

class Time {
    int hours{};
    int minutes{};

public:
    Time();

    Time(int hours, int minutes);

    [[nodiscard]] char *toCharString() const;

    [[nodiscard]] string toString() const;

    [[nodiscard]] int getHours() const;

    [[nodiscard]] int getMinutes() const;

    void setHours(int hours);

    void setMinutes(int minutes);

};

#endif // TIME_H