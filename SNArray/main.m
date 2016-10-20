//
//  main.m
//  SNArray
//
//  Created by Student P_05 on 19/10/16.
//  Copyright © 2016 Shriraj. All rights reserved.
//

#import <Foundation/Foundation.h>
int main(int argc, const char * argv[]) {
    @autoreleasepool {
    
    
    NSMutableArray *mutableArray = [[NSMutableArray alloc]init];

    [mutableArray addObject:@"Shriraj"];
    [mutableArray addObject:@"Hello World"];
    [mutableArray addObject:@"Hi"];
    [mutableArray addObject:@"Hello Earth"];
    [mutableArray addObject:@"Hacker rank"];
        
        NSLog(@"%@",mutableArray);
        
    
    
    }
    return 0;
}

    
    
    
    

