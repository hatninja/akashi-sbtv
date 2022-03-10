#include <QTest>

#include <include/db_manager.h>

namespace tests {
namespace unittests {

/**
 * @brief Unit Tester class for the primary database-related functions.
 */
class DatabaseManager : public QObject
{
    Q_OBJECT
public :

    DBManager* m_db_manager;

private slots:
    /**
    * @brief Initialises every tests by creating a dummy DB to test the database interactions.
    */
    void init();


};

void DatabaseManager::init()
{

}

}
}

QTEST_APPLESS_MAIN(tests::unittests::DatabaseManager)

#include "tst_unittest_db_manager.moc"
