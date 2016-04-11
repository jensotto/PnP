/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Corporation. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHSERVICEDRIVEFETCHER_H
#define MSGRAPHSERVICEDRIVEFETCHER_H

#import "MSGraphServiceModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphServiceIdentitySetFetcher;
@class MSGraphServiceQuotaFetcher;
@class MSGraphServiceDriveItemCollectionFetcher;
@class MSGraphServiceDriveItemFetcher;
@class MSGraphServiceDriveItemCollectionFetcher;
@class MSGraphServiceDriveItemFetcher;
@class MSGraphServiceDriveItemFetcher;
@class MSGraphServiceDriveOperations;


/** MSGraphServiceDriveFetcher
 *
 */
@interface MSGraphServiceDriveFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphServiceDriveOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphServiceDrive *, MSOrcError *))callback;
- (void)update:(MSGraphServiceDrive *)drive callback:(void (^)(MSGraphServiceDrive *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphServiceDriveFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphServiceDriveFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphServiceDriveFetcher *)select:(NSString *)params;
- (MSGraphServiceDriveFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=items) MSGraphServiceDriveItemCollectionFetcher *items;

- (MSGraphServiceDriveItemFetcher *)itemsById:(id)identifier;

@property (strong, nonatomic, readonly, getter=special) MSGraphServiceDriveItemCollectionFetcher *special;

- (MSGraphServiceDriveItemFetcher *)specialById:(id)identifier;


@property (strong, nonatomic, readonly, getter=root) MSGraphServiceDriveItemFetcher *root;

@end

#endif