#import "NSObject.h"

#import "NSMenuDelegate.h"

@class BCBonjourController, MSArtboardGroup, MSDocument, NSMenu, NSMutableDictionary, NSString;

@interface MSIOSConnectionController : NSObject <NSMenuDelegate>
{
    BOOL _hadActiveConnection;
    NSString *_lastUsedIP;
    BCBonjourController *_bonjourController;
    NSMenu *_connectionMenu;
    MSDocument *_currentDocument;
    MSArtboardGroup *_currentArtboard;
    unsigned long long _numberOfClientsKnownByUI;
    NSMutableDictionary *_artboardSequenceNumbers;
}

+ (BOOL)sketchPlayDebugEnabled;
+ (BOOL)sketchPlayEnabled;
@property(retain, nonatomic) NSMutableDictionary *artboardSequenceNumbers; // @synthesize artboardSequenceNumbers=_artboardSequenceNumbers;
@property(nonatomic) BOOL hadActiveConnection; // @synthesize hadActiveConnection=_hadActiveConnection;
@property(nonatomic) unsigned long long numberOfClientsKnownByUI; // @synthesize numberOfClientsKnownByUI=_numberOfClientsKnownByUI;
@property(retain, nonatomic) MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
@property(retain, nonatomic) MSDocument *currentDocument; // @synthesize currentDocument=_currentDocument;
@property(retain, nonatomic) NSMenu *connectionMenu; // @synthesize connectionMenu=_connectionMenu;
@property(retain, nonatomic) BCBonjourController *bonjourController; // @synthesize bonjourController=_bonjourController;
@property(retain, nonatomic) NSString *lastUsedIP; // @synthesize lastUsedIP=_lastUsedIP;
- (void).cxx_destruct;
- (void)handleCommandErrorWithReceiver:(id)arg1 message:(id)arg2;
- (void)handleCommandShowingWithReceiver:(id)arg1 message:(id)arg2;
- (void)handleCommandSystemWithReceiver:(id)arg1 message:(id)arg2;
- (void)connectoToDefaultDeviceWithDocument:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)sendDebug:(id)arg1;
- (void)resetArtboards:(id)arg1;
- (void)refreshArtboards:(id)arg1;
- (void)disconnectAll:(id)arg1;
- (void)connectAll:(id)arg1;
- (void)connectToDevice:(id)arg1;
- (void)setCurrentDocumentFromActionSender:(id)arg1;
- (void)populateConnectionMenu:(id)arg1;
- (void)sendListOfPagesAndSlicesForDocument:(id)arg1;
- (unsigned long long)pixelLimitForDevice:(id)arg1;
- (id)sliceSizeMetadataFromRect:(struct CGRect)arg1 slice:(id)arg2;
- (void)sendSlice:(id)arg1 page:(id)arg2 artboard:(id)arg3;
- (id)dictionaryForArtboard:(id)arg1 page:(id)arg2 sequenceNumber:(id)arg3 scale:(id)arg4 boardSizeString:(id)arg5;
- (id)incrementSequenceNumberForArtboard:(id)arg1;
- (void)clientsChangedNotification:(id)arg1;
- (void)documentWillCloseNotification:(id)arg1;
- (void)documentChangedNotification:(id)arg1;
- (void)artboardSelectedNotification:(id)arg1;
- (void)artboardsChangedNotification:(id)arg1;
- (void)pagesChangedNotification:(id)arg1;
- (void)stopListeningForNotifications;
- (void)listenForNotifications;
- (void)connectToClientAtIndex:(unsigned long long)arg1;
- (BOOL)isClientConnected:(unsigned long long)arg1;
- (void)addClientWithIP:(id)arg1 port:(unsigned long long)arg2;
- (id)imageForClient:(unsigned long long)arg1;
- (id)nameForClient:(unsigned long long)arg1;
- (unsigned long long)numberOfClients;
- (BOOL)hasActiveConnections;
- (BOOL)hasMultipleClients;
- (BOOL)hasClients;
- (BOOL)hasConnections;
- (void)setupBonjourController;
- (void)didShowNewDevices;
- (BOOL)showNewDevicesIndicatorInUI;
- (void)dealloc;
- (id)init;
- (void)setSketchPlayUsed;
- (BOOL)sketchPlayUsed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

