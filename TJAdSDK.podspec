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
  s.summary          = 'AD'
  s.description      = <<-DESC
  聚合广告聚合广告聚合广告聚合广告聚合广告聚合广告聚合广告
                       DESC

  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'FM' => 'TJ' }
  s.homepage         = 'https://github.com/FMTJYG/TJAdSDK'
  s.source           = { :git => 'https://github.com/FMTJYG/TJAdSDK.git', :tag => s.version.to_s }
  s.platform         = :ios, "9.0"
  s.vendored_frameworks = 'SDK/TJAdSDK.framework'
end
