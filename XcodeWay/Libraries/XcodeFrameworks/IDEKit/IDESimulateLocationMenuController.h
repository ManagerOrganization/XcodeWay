/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSMenuDelegate-Protocol.h"

@class IDEWorkspaceTabController, NSMenu;

@interface IDESimulateLocationMenuController : NSObject <NSMenuDelegate>
{
    BOOL _validateMenuItems;
    int _extraItems;
    IDEWorkspaceTabController *_tabController;
    id _selectActionHandler;
    id _configurationBlock;
    id _contextBlock;
    NSMenu *_menu;
}

- (id)_buildLocationSimulationMenu;
- (unsigned long long)_indexOfDontSimulateItem;
- (unsigned long long)_indexOfIconItem;
- (unsigned long long)_indexOfNoneItem;
- (id)_locationScenarioWithFilePath:(id)arg1;
- (void)_selectLocationScenario:(id)arg1 withContext:(id)arg2;
- (void)_updateMenu:(id)arg1;
- (void)addGPXFile:(id)arg1;
@property(copy) id addGPXFileContextBlock; // @synthesize addGPXFileContextBlock=_contextBlock;
- (void)attachToMenu:(id)arg1;
@property(copy) id configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property int extraItems; // @synthesize extraItems=_extraItems;
- (id)init;
- (void)menuNeedsUpdate:(id)arg1;
- (void)newGPXFile:(id)arg1;
@property(copy) id selectActionHandler; // @synthesize selectActionHandler=_selectActionHandler;
- (void)selectLocationScenarioItem:(id)arg1;
@property IDEWorkspaceTabController *tabController; // @synthesize tabController=_tabController;
@property BOOL validateMenuItems; // @synthesize validateMenuItems=_validateMenuItems;
- (BOOL)validateMenuItem:(id)arg1;

@end
