// Copyright (c) 2011-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_MACDOCKICONHANDLER_H
#define BITCOIN_QT_MACDOCKICONHANDLER_H

#include <QAbstractNativeEventFilter>
#include <QObject>

/** macOS-specific Dock icon handler.
 */
class MacDockIconHandler : public QObject
{
    Q_OBJECT

public:
    static MacDockIconHandler *instance();
    static void cleanup();

Q_SIGNALS:
    void dockIconClicked();

private:
    MacDockIconHandler();
};

class MyCocoaEventFilter : public QAbstractNativeEventFilter
{
public:
    bool nativeEventFilter(const QByteArray &eventType, void *message, long *) override;
};

#endif // BITCOIN_QT_MACDOCKICONHANDLER_H
