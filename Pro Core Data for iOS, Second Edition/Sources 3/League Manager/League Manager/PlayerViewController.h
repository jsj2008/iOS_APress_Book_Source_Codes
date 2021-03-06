//
// From the book Pro Core Data for iOS, 2nd Edition
// Michael Privat and Rob Warner
// Published by Apress, 2011
// Source released under the Eclipse Public License
// http://www.eclipse.org/legal/epl-v10.html
// 
// Contact information:
// Michael: @michaelprivat -- http://michaelprivat.com -- mprivat@mac.com
// Rob: @hoop33 -- http://grailbox.com -- rwarner@grailbox.com
//

#import <UIKit/UIKit.h>

@class MasterViewController;

@interface PlayerViewController : UIViewController <UIActionSheetDelegate> {
  IBOutlet UITextField *firstName;
  IBOutlet UITextField *lastName;
  IBOutlet UITextField *email;
  NSManagedObject *team;
  NSManagedObject *player;
  MasterViewController *masterController;
}
@property (nonatomic, retain) UITextField *firstName;
@property (nonatomic, retain) UITextField *lastName;
@property (nonatomic, retain) UITextField *email;
@property (nonatomic, retain) NSManagedObject *team;
@property (nonatomic, retain) NSManagedObject *player;
@property (nonatomic, retain) MasterViewController *masterController;

- (IBAction)save:(id)sender;
- (IBAction)cancel:(id)sender;
- (IBAction)confirmDelete:(id)sender;
- (id)initWithMasterController:(MasterViewController *)aMasterController team: (NSManagedObject *)aTeam player:(NSManagedObject *)aPlayer;

@end
