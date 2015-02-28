#include "qgshelloworld.h"


QgsHelloWorld::QgsHelloWorld(const QString &name)
    : mName(name)
    , mLang(English)
{

}

void QgsHelloWorld::setLanguage(QgsHelloWorld::Language lang)
{
    mLang = lang;
}

QgsHelloWorld::Language QgsHelloWorld::language() const
{
    return mLang;
}

QString QgsHelloWorld::sayHello()
{
    switch (mLang)
    {
        case English: return "Hello" + mName;
        case Indonesian: return "Halo mas/mbak/bu/pak " + mName;
        case Slovak: return "Ahoj " + mName;
        default:return "Hello" + mName;
    }
}
