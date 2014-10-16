// OGElement.h
//
// Copyright 2014 Programming Thomas
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "OGNode.h"
#import "OGTypes.h"

/**
 OGElement instances represent HTML tags, which can contain child elements or text nodes.
 */
@interface OGElement : OGNode

@property (readonly) OGTag tag;
@property (readonly) OGNamespace tagNamespace;

@property (readonly) NSArray * children;
@property (readonly) NSArray * classes;
@property (readonly) NSDictionary * attributes;

- (NSArray*)elementsWithAttribute:(NSString *)attribute andValue:(NSString *)value;

@end
