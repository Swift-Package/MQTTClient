//
//  MQTTClient.h
//  MQTTClient
//
//  Created by Christoph Krey on 13.01.14.
//  Copyright © 2013-2017 Christoph Krey. All rights reserved.
//

/**
 Include this file to use MQTTClient classes in your application
 
 @author Christoph Krey c@ckrey.de
 @see http://mqtt.org
 */

/**
 原版本头文件👇
 */

//#import <Foundation/Foundation.h>
//
//#import "MQTTSession.h"
//#import "MQTTDecoder.h"
//#import "MQTTSessionLegacy.h"
//#import "MQTTSessionSynchron.h"
//#import "MQTTProperties.h"
//#import "MQTTMessage.h"
//#import "MQTTTransport.h"
//#import "MQTTCFSocketTransport.h"
//#import "MQTTCoreDataPersistence.h"
//#import "MQTTSSLSecurityPolicyTransport.h"
//#import "MQTTLog.h"
//
//#if __has_include(<MQTTClient/MQTTSessionManager.h>)
//#import <MQTTClient/MQTTSessionManager.h>
//#endif
//
////! Project version number for MQTTClient.
//FOUNDATION_EXPORT double MQTTClientVersionNumber;
//
////! Project version string for MQTTClient&lt;.
//FOUNDATION_EXPORT const unsigned char MQTTClientVersionString[];

/**
 原版本头文件👆
 */

#import <Foundation/Foundation.h>

#import "MQTTSession.h"
#import "MQTTDecoder.h"
#import "MQTTSessionLegacy.h"
#import "MQTTSessionSynchron.h"
#import "MQTTProperties.h"
#import "MQTTMessage.h"
#import "MQTTTransport.h"
#import "MQTTCFSocketTransport.h"
#import "MQTTCoreDataPersistence.h"
#import "MQTTSSLSecurityPolicyTransport.h"
#import "MQTTInMemoryPersistence.h"
#import "ForegroundReconnection.h"
#import "GCDTimer.h"
#import "ReconnectTimer.h"
#import "MQTTSSLSecurityPolicyDecoder.h"
#import "MQTTSSLSecurityPolicyEncoder.h"
#import "MQTTStrict.h"
#import "MQTTLog.h"
#import "MQTTSessionManager.h"

#if __has_include(<MQTTClient/MQTTSessionManager.h>)
#import <MQTTClient/MQTTSessionManager.h>
#endif

//! Project version number for MQTTClient.
FOUNDATION_EXPORT double MQTTClientVersionNumber;

//! Project version string for MQTTClient&lt;.
FOUNDATION_EXPORT const unsigned char MQTTClientVersionString[];
