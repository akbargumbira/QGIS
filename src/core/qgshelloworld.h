#ifndef QGSHELLOWORLD_H
#define QGSHELLOWORLD_H

#include <QString>

/**
 * @brief The QgsHelloWorld class does not do anything particularly useful.
 */

class CORE_EXPORT QgsHelloWorld
{
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
    void setLanguage(Language lang);

    //! Find out the current language
    Language language() const;

    //! Return the greeting string
    QString sayHello();

private:
    QString mName;
    Language mLang;

};

#endif // QGSHELLOWORLD_H
