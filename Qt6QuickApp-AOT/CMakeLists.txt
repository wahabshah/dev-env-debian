cmake_minimum_required(VERSION 3.14)

project(Qt6QuickApp VERSION 0.1 LANGUAGES CXX)

# https://doc.qt.io/qt-6/qtqml-tool-qmltc.html
# Use "my_qmltc_example" as an application name:
set(application_name my_qmltc_example)

# Create a CMake target, add C++ source files, link libraries, etc...

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6  REQUIRED COMPONENTS Core Quick)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Quick)

set(PROJECT_SOURCES
        main.cpp
        qml.qrc
)

# Specify a list of QML files to be compiled:
set(application_qml_files
    main.qml
)

# Make the application into a proper QML module:
qt6_add_qml_module(${application_name}
    VERSION 1.0
    URI QmltcExample
    QML_FILES ${application_qml_files}

    # Compile qml files (listed in QML_FILES) to C++ using qmltc and add these
    # files to the application binary:
    ENABLE_TYPE_COMPILER
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Qt6QuickApp
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Qt6QuickApp APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Qt6QuickApp SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Qt6QuickApp
          ${PROJECT_SOURCES}
        )
    endif()
endif()

# (qmltc-specific) Link *private* libraries that correspond to QML modules:
target_link_libraries(${application_name} PRIVATE Qt::QmlPrivate Qt::QuickPrivate)

target_link_libraries(Qt6QuickApp
  PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick)

set_target_properties(Qt6QuickApp PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Qt6QuickApp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_import_qml_plugins(Qt6QuickApp)
    qt_finalize_executable(Qt6QuickApp)
endif()
