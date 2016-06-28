//
//  NotesTopicViewController.m
//  TyDtk
//
//  Created by 天一文化 on 16/6/23.
//  Copyright © 2016年 天一文化.王可佳. All rights reserved.
//

#import "NotesTopicViewController.h"
#import "PaperLookViewController.h"
@interface NotesTopicViewController ()

@end

@implementation NotesTopicViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    self.title = @"笔记试题";
    NSLog(@"%@",_dicNoteTopic);
    [self addNoteTopicChildView];
}
- (void)addNoteTopicChildView{
    PaperLookViewController *paperLookVc = [[PaperLookViewController alloc]init];
    [self addChildViewController:paperLookVc];
    
    PaperLookViewController *paVc = (PaperLookViewController *)[self.childViewControllers firstObject];
    paVc.dicTopic = _dicNoteTopic;
    paVc.topicIndex = 1;
    paVc.isLastTopic = NO;
    paVc.isFromNote = YES;
    paVc.view.frame = CGRectMake(0, 0, Scr_Width, Scr_Height);
    [self.view addSubview:paVc.view];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end