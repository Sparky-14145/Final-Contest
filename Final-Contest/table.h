#ifndef TABLE_H
#define TABLE_H

#include <QObject>
#include <QFile>
#include "trip.h"

class table
{
    Q_OBJECT

public:
    table();

public slots:
    void read_from(QFile &source);
    void save_to(QFile &source);
    const std::vector<trip>& get_all_trips() const;

private:
    std::vector<trip> __trips;
};

extern table main_table;

#endif // TABLE_H
