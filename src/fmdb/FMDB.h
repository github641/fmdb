/* lzy171013注:
 主头文件
 */

#import <Foundation/Foundation.h>
FOUNDATION_EXPORT double FMDBVersionNumber;// 对外公开，FMDBVersionNumber类型，实际它是double类型
FOUNDATION_EXPORT const unsigned char FMDBVersionString[];// 对外公开 FMDBVersionString[]数组类型，是字符串数组
// 相关类的头文件，fmdb文件形式很简单，都是必要类
#import "FMDatabase.h"
#import "FMResultSet.h"
#import "FMDatabaseAdditions.h"
#import "FMDatabaseQueue.h"
#import "FMDatabasePool.h"
