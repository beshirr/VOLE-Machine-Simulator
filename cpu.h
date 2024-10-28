#ifndef CPU_H
#define CPU_H


#include <vector>
#include <QString>
#include <QChar>

using namespace std;


class cpu {
public:
    cpu();
    static void execute();
    static vector<QChar> decode(const QString& instruction);
};

#endif // CPU_H