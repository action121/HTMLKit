//
//  HTMLStackOfOpenElements.h
//  HTMLKit
//
//  Created by Iska on 08/03/15.
//  Copyright (c) 2015 BrainCookie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HTMLElement.h"

@interface HTMLStackOfOpenElements : NSObject <NSFastEnumeration>

- (HTMLElement *)currentNode;
- (HTMLElement *)firstNode;
- (HTMLElement *)lastNode;

- (id)objectAtIndexedSubscript:(NSUInteger)index;
- (void)setObject:(id)obj atIndexedSubscript:(NSUInteger)idx;
- (NSUInteger)indexOfElement:(id)node;

- (void)pushElement:(HTMLElement *)element;
- (void)removeElement:(id)element;
- (BOOL)containsElement:(id)element;
- (BOOL)containsElementWithTagName:(NSString *)tagName;

- (void)insertElement:(HTMLElement *)element atIndex:(NSUInteger)index;
- (void)replaceElementAtIndex:(NSUInteger)index withElement:(HTMLElement *)element;

- (void)popCurrentNode;
- (void)popElementsUntilElementPoppedWithTagName:(NSString *)tagName;
- (void)popElementsUntilAnElementPoppedWithAnyOfTagNames:(NSArray *)tagNames;
- (void)popElementsUntilElementPopped:(HTMLElement *)element;
- (void)popElementsUntilTemplateElementPopped;
- (void)clearBackToTableContext;
- (void)clearBackToTableBodyContext;
- (void)clearBackToTableRowContext;
- (void)popAll;

- (HTMLElement *)hasElementInScopeWithTagName:(NSString *)tagName;
- (HTMLElement *)hasAnyElementInScopeWithAnyOfTagNames:(NSArray *)tagNames;
- (HTMLElement *)hasElementInListItemScopeWithTagName:(NSString *)tagName;
- (HTMLElement *)hasElementInButtonScopeWithTagName:(NSString *)tagName;
- (HTMLElement *)hasElementInTableScopeWithTagName:(NSString *)tagName;
- (HTMLElement *)hasElementInTableScopeWithAnyOfTagNames:(NSArray *)tagNames;
- (HTMLElement *)hasElementInSelectScopeWithTagName:(NSString *)tagName;
- (HTMLElement *)furthestBlockAfterIndex:(NSUInteger)index;

- (NSUInteger)count;
- (BOOL)isEmpy;

- (NSEnumerator *)enumerator;
- (NSEnumerator *)reverseObjectEnumerator;

@end
