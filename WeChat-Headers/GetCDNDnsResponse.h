//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseResponse, CDNDnsInfo, SKBuiltinBuffer_t;

@interface GetCDNDnsResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) CDNDnsInfo *appDnsInfo; // @dynamic appDnsInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) SKBuiltinBuffer_t *cdndnsRuleBuf; // @dynamic cdndnsRuleBuf;
@property(retain, nonatomic) CDNDnsInfo *dnsInfo; // @dynamic dnsInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *fakeCdndnsRuleBuf; // @dynamic fakeCdndnsRuleBuf;
@property(retain, nonatomic) CDNDnsInfo *fakeDnsInfo; // @dynamic fakeDnsInfo;
@property(retain, nonatomic) CDNDnsInfo *snsDnsInfo; // @dynamic snsDnsInfo;

@end
