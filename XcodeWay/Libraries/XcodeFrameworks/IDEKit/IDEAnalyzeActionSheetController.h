/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class IDEAnalyzeSchemeAction, IDEScheme, IDEWorkspace, NSBox;

@interface IDEAnalyzeActionSheetController : IDEViewController
{
    IDEScheme *_runContext;
    IDEWorkspace *_workspace;
    IDEAnalyzeSchemeAction *_runPhase;
    NSBox *_box;
}

+ (void)initialize;
- (id)dvtExtraBindings;
- (void)loadView;
@property IDEScheme *runContext; // @synthesize runContext=_runContext;
@property IDEAnalyzeSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property IDEWorkspace *workspace;
- (void)updateBoundContent;
- (void)updateBoundIDERunContextBinding;
- (void)updateBoundIDEWorkspaceBinding;

@end
