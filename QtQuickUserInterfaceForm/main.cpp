#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>


int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    QQuickView view;
    //view.setSource(QUrl("qrc:/mainwindow.ui.qml"));
    view.setSource(QUrl("qrc:/qml/ProgressBar.ui.qml"));
    if (!view.errors().isEmpty())
        return -1;
    view.show();


    /*QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/mainwindow.ui.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);*/

    return app.exec();
}
