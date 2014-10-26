//
//  Setup.h
//  CoreDataTools
//
//  Created by Timo Kabsch on 27.09.12.
//  Copyright (c) 2012 Timo Kabsch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface CDTModel : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSString *modelName;

- (id)initWithModelName:(NSString *)modelName;
- (void)deleteModelFile;
- (void)save;
- (NSArray *)fetch:(NSString *)fetchRequestName;
- (NSArray *)fetchByName:(NSString *)entityName withPredicate:(NSPredicate *)predicate;
- (NSArray *)executeFetchRequest:(NSFetchRequest *)fetchRequest;

+ (NSURL *)applicationDocumentsDirectory;
+ (NSURL *)getModelUrlFromMainBundle:(NSString*)modelName;

@end
