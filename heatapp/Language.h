@interface Language

+ (void)initialize;
+ (NSString *)getLanguage;
+ (void)setLanguage:(NSString *)l;
+ (NSString *)getLocalizedString:(NSString *)key;

@end