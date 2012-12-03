//
//  NSString+RNAttributedMarkdown.h
//  RNMDParser
//
//  Created by Ryan Nystrom on 11/12/12.
//  Copyright (c) 2012 Ryan Nystrom. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (RNAttributedMarkdown)

- (NSAttributedString*)markdownAttributedString;

- (NSString *)generatePDFFromMarkdownInDocumentsDirectory;

- (BOOL)generatePDFFromMarkdownAtPath:(NSString *)path;

@end
