
import Logger

def logInfo(fmt, *p):
    Logger.logInfo("$[PyLog] " + fmt.format(*p))

def logError(fmt, *p):
    Logger.logInfo("$[PyLog] " + fmt.format(*p))

def logDebug(fmt, *p):
    Logger.logInfo("$[PyLog] " + fmt.format(*p))
