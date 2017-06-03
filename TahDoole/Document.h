//
//  Document.h
//  TahDoole
//
//  Created by zxm on 17/6/3.
//  Copyright © 2017年 Zhang Xinmiao. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument
<NSTableViewDataSource>

@property (nonatomic) NSMutableArray *tasks;


// IBOutlet 会被彻底移除 （#define OBOutlet）
@property (nonatomic) IBOutlet NSTableView *taskTable;


// 告诉xocde addtask同行或interface builder而不是编码进行赋值 正式编译前会被替换为void （#define IBAcion void）
- (IBAction)addTask:(id)sender;


@end

