#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "dbrequests.h"
#include "datamodel.h"
#include <list>
#include "menuitem.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif


    QGuiApplication app(argc, argv);
    dbRequests requests;
    DataModel myModel;

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    QQmlContext * rootContext = engine.rootContext();
    rootContext->setContextProperty("backend", &requests);
    rootContext->setContextProperty("_myModel", &myModel);

    return app.exec();
}
