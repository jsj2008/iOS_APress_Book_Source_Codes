//
//  InterestingnessTableViewController.h
//  Interestingness - Version 2
//
//  Created by Danton Chin on 3/24/10.
//  Copyright 2010  http://iphonedeveloperjournal.com/. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InterestingnessTableViewController : UITableViewController {
	
	NSMutableArray *imageTitles;
	NSMutableArray *imageURLs;
}
-(void)loadInterestingnessList;

@end
