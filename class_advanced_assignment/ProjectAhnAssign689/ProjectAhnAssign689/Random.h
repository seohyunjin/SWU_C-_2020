#pragma once

class Random {
public:
    static void seed();
    static int nextInt(int min = 0, int max = 32767);
    static char nextAlphabet();
    static double nextDouble();
};
