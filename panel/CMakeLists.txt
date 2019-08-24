set(PROJECT ukui-panel)

set(PRIV_HEADERS
    panelpluginsmodel.h
    windownotifier.h
    ukuipanel.h
    ukuipanelapplication.h
    ukuipanelapplication_p.h
    ukuipanellayout.h
    plugin.h
    pluginsettings_p.h
    ukuipanellimits.h
    popupmenu.h
    pluginmoveprocessor.h
    ukuipanelpluginconfigdialog.h
    config/configpaneldialog.h
    config/configpanelwidget.h
    config/configpluginswidget.h
    config/addplugindialog.h
)

# using ukui namespace in the public headers.
set(PUB_HEADERS
    ukuipanelglobals.h
    pluginsettings.h
    iukuipanelplugin.h
    iukuipanel.h
)

set(SOURCES
    main.cpp
    panelpluginsmodel.cpp
    windownotifier.cpp
    ukuipanel.cpp
    ukuipanelapplication.cpp
    ukuipanellayout.cpp
    plugin.cpp
    pluginsettings.cpp
    popupmenu.cpp
    pluginmoveprocessor.cpp
    ukuipanelpluginconfigdialog.cpp
    config/configpaneldialog.cpp
    config/configpanelwidget.cpp
    config/configpluginswidget.cpp
    config/addplugindialog.cpp
)

set(UI
    config/configpanelwidget.ui
    config/configpluginswidget.ui
    config/addplugindialog.ui
)

set(LIBRARIES
    lxqt
)

file(GLOB CONFIG_FILES resources/*.conf)

############################################

add_definitions(-DCOMPILE_ukui_PANEL)

set(PLUGIN_DESKTOPS_DIR "${CMAKE_INSTALL_FULL_DATAROOTDIR}/ukui/${PROJECT}")
add_definitions(-DPLUGIN_DESKTOPS_DIR=\"${PLUGIN_DESKTOPS_DIR}\")

message("------------------")
message(${PLUGIN_DESKTOPS_DIR})
message("------------------")
if (WITH_SCREENSAVER_FALLBACK)
    message(STATUS "Building with conversion of deprecated 'screensaver' plugin")
    add_definitions(-DWITH_SCREENSAVER_FALLBACK "-Dukui_LOCK_DESKTOP=\"${CMAKE_INSTALL_FULL_DATAROOTDIR}/applications/ukui-lockscreen.desktop\"")
endif ()

project(${PROJECT})

set(QTX_LIBRARIES Qt5::Widgets Qt5::Xml Qt5::DBus)

# Translations
lxqt_translate_ts(QM_FILES SOURCES
    UPDATE_TRANSLATIONS
        ${UPDATE_TRANSLATIONS}
    SOURCES
        ${PUB_HEADERS}
        ${PRIV_HEADERS}
        ${SOURCES}
        ${UI}
    INSTALL_DIR
        "${ukui_TRANSLATIONS_DIR}/${PROJECT_NAME}"
    PULL_TRANSLATIONS
        ${PULL_TRANSLATIONS}
    CLEAN_TRANSLATIONS
        ${CLEAN_TRANSLATIONS}
    TRANSLATIONS_REPO
        ${TRANSLATIONS_REPO}
    TRANSLATIONS_REFSPEC
        ${TRANSLATIONS_REFSPEC}
    REPO_SUBDIR
        "${PROJECT_NAME}/panel"
)

lxqt_app_translation_loader(SOURCES ${PROJECT_NAME})

add_executable(${PROJECT}
    ${PUB_HEADERS}
    ${PRIV_HEADERS}
    ${QM_FILES}
    ${SOURCES}
    ${UI}
)

target_link_libraries(${PROJECT}
    ${LIBRARIES}
    ${QTX_LIBRARIES}
    KF5::WindowSystem
    ${STATIC_PLUGINS}
)

install(TARGETS ${PROJECT} RUNTIME DESTINATION bin)
install(FILES ${CONFIG_FILES} DESTINATION ${CMAKE_INSTALL_DATADIR}/ukui)
install(FILES ${PUB_HEADERS} DESTINATION include/ukui)
install(FILES
    man/ukui-panel.1
    DESTINATION "${CMAKE_INSTALL_MANDIR}/man1"
    COMPONENT Runtime
)