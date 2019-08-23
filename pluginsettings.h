#include <QObject>
#include <LXQt/Settings>

class PluginSettingsPrivate;

class PluginSettings : public QObject
{

    //Q_OBJECT
public:	
	PluginSettings(LXQt::Settings *settings, const QString &group, QObject *parent = nullptr);
	QScopedPointer<PluginSettingsPrivate> d_ptr;
	Q_DECLARE_PRIVATE(PluginSettings)

/*signals:
    void settingsChanged();*/
};

class PluginSettingsFactory
{
public:
    static PluginSettings * create(LXQt::Settings *settings, const QString &group, QObject *parent = nullptr);
};
