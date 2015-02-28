/**
 * @brief The QgsHelloWorld class does not do anything particularly useful.
 */

class QgsHelloWorld
{
%TypeHeaderCode
#include <qgshelloworld.h>
%End
public:
    //! Construct the class with the name of the person we will greet
    QgsHelloWorld(const QString& name);

    enum Language
    {
        English,
        Indonesian,
        Slovak
    };

    //! Set language of the greeing
    void setLanguage(QgsHelloWorld::Language lang);

    //! Find out the current language
    QgsHelloWorld::Language language() const;

    //! Return the greeting string
    QString sayHello();
};
