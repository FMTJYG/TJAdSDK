#
# Be sure to run `pod lib lint TJAdSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'TJAdSDK'
  s.version          = '0.1.0'
  s.summary          = 'TJAdSDK'
  s.description      = <<-DESC
  聚合广告
                       DESC

  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'FM' => 'TJ' }

  s.homepage         = 'https://github.com/FMTJYG/TJAdSDK.git'
  s.source           = { :git => 'https://github.com/FMTJYG/TJAdSDK.git', :tag => s.version.to_s }
  s.platform         = :ios, "9.0"  
  s.frameworks       = 'StoreKit', 'SafariServices', 'MessageUI', 'CoreMedia', 'CoreMotion', 'SystemConfiguration', 'CoreLocation', 'CoreTelephony', 'AVFoundation', 'AdSupport'
  s.libraries        = 'c++'
  s.weak_frameworks = "WebKit"
  
  s.vendored_frameworks = 'SDK/TJAdSDK.framework'
  s.resources = ['SDK/*.{bundle}']
  valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']
  s.xcconfig = {
    'VALID_ARCHS' =>  valid_archs.join(' '),
  }
end
