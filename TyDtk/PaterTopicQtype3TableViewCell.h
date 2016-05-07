//
//  PaterTopicQtype3TableViewCell.h
//  TyDtk
//
//  Created by 天一文化 on 16/5/3.
//  Copyright © 2016年 天一文化.王可佳. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "paterTopicQtype1and2TableViewCell.h"
@interface PaterTopicQtype3TableViewCell : UITableViewCell
//试题编号
@property (weak, nonatomic) IBOutlet UILabel *labNumber;
//试题编号宽度
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *labNumberWidth;
//试题类型
@property (weak, nonatomic) IBOutlet UILabel *labTopicType;
//收藏图片
@property (weak, nonatomic) IBOutlet UIImageView *imageCollect;
//收藏按钮
@property (weak, nonatomic) IBOutlet UIButton *buttonCollect;
//收藏按钮宽度
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *buttonCollectWidth;
//试题标题
@property (weak, nonatomic) IBOutlet UIWebView *webViewTitle;
//试题标题宽度
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *webViewTitleHeight;
//对号按钮
@property (weak, nonatomic) IBOutlet UIButton *buttonRight;
//错号按钮
@property (weak, nonatomic) IBOutlet UIButton *buttonWrong;
//是否是第一次加载
@property (nonatomic,assign) BOOL isFirstLoad;
//试题信息
@property (nonatomic,strong) NSDictionary *dicTopic;
//试题索引
@property (nonatomic,assign) NSInteger indexTopic;
//已经做过的试题
@property (nonatomic,strong) NSDictionary *dicSelectDone;
//已经收藏过的试题
@property (nonatomic,strong) NSDictionary *dicCollectDone;
@property (nonatomic,assign) id <TopicCellDelegateTest> delegateCellClick;
- (CGFloat)setvalueForCellModel:(NSDictionary *)dic topicIndex:(NSInteger)index;
@end