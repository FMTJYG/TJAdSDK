#
# Be sure to run `pod lib lint TJAdSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TJAdSDK'
  s.version          = '0.1.1'
  s.summary          = 'AD'
  s.description      = <<-DESC
  聚合广告聚合广告聚合广告聚合广告聚合广告聚合广告聚合广告
                       DESC
  
  s.homepage         = 'https://github.com/FMTJYG/TJAdSDK'
  s.source           = { :git => 'https://github.com/FMTJYG/TJAdSDK.git', :tag => s.version.to_s }
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'FM' => 'TJ' }
  s.platform         = :ios, "9.0"
  s.vendored_frameworks = 'SDK/TJAdExampleLib.framework'
  
  valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']
  s.xcconfig = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }
  
  s.frameworks = 'StoreKit', 'SafariServices', 'MessageUI', 'CoreMedia', 'CoreMotion', 'SystemConfiguration', 'CoreLocation', 'CoreTelephony', 'AVFoundation', 'AdSupport', 'UIKit', 'MapKit', 'MediaPlayer', 'MobileCoreServices', 'Accelerate', "WebKit", 'Security', 'CoreFoundation', 'Foundation'
  s.libraries = 'c++', 'resolv', 'z', 'sqlite3', 'bz2', 'xml2', 'c++abi'
   
  s.dependency 'Ads-CN', '3.6.1.1'
  s.dependency 'BaiduMobAdSDK', '4.771'
  s.dependency 'GDTMobSDK', '4.12.61'
  
end
