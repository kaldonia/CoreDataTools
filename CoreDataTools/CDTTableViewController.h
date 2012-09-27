//
//  CDTTableViewController.h
//  CoreDataTools
//
//  Created by Kabsch on 28.09.12.
//  Copyright (c) 2012 Timo Kabsch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@class CDTModel;

@interface CDTTableViewController : UITableViewController <NSFetchedResultsControllerDelegate, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) CDTModel *model;
@property (nonatomic, strong) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, strong) NSString *cellIdentifier;
@property (nonatomic, strong) NSString *cacheName;
@property (nonatomic, strong) NSFetchRequest *fetchRequest;

- (void)configureCell:(UITableViewCell *)cell atIndexPath:(NSIndexPath *)indexPath;

- (void)addSwipeRecognition;
- (void)addSwipeTwoFingerRecognition;
- (void)addLongPressRecognition;
- (void)addPanRecognition;
- (void)addTapRecognition;

- (void)handleSwipeLeft:(UISwipeGestureRecognizer *)recognizer;
- (void)handleSwipeRight:(UISwipeGestureRecognizer *)recognizer;
- (void)handleLongPress:(UILongPressGestureRecognizer *)recognizer;
- (void)handlePan:(UIPanGestureRecognizer *)recognizer;
- (void)handleTap:(UITapGestureRecognizer *)recognizer;

@end
