//
//  HTMLTreeWalker.h
//  HTMLKit
//
//  Created by Iska on 05/06/15.
//  Copyright (c) 2015 BrainCookie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTMLNodeFilter.h"

@class HTMLNode;

@interface HTMLTreeWalker : NSObject

@property (nonatomic, strong, readonly) HTMLNode *root;
@property (nonatomic, assign, readonly) HTMLNodeFilterShowOptions whatToShow;
@property (nonatomic, strong, readonly) id<HTMLNodeFilter> filter;
@property (nonatomic, strong) HTMLNode *currentNode;

- (instancetype)initWithNode:(HTMLNode *)node;
- (instancetype)initWithNode:(HTMLNode *)node
					  filter:(id<HTMLNodeFilter>)filter;
- (instancetype)initWithNode:(HTMLNode *)node
				 showOptions:(HTMLNodeFilterShowOptions)showOptions
					  filter:(id<HTMLNodeFilter>)filter;

- (HTMLNode *)parentNode;
- (HTMLNode *)firstChild;
- (HTMLNode *)lastChild;
- (HTMLNode *)previousSibling;
- (HTMLNode *)nextSibling;
- (HTMLNode *)previousNode;
- (HTMLNode *)nextNode;

@end