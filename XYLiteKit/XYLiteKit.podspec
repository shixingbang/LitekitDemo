#
# Be sure to run `pod lib lint XYLiteKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XYLiteKit'
  s.version          = '0.1.1'
  s.summary          = 'A short description of XYLiteKit.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/renhao/XYLiteKit'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'renhao' => 'renhao@xiaohongshu.com' }
  s.source           = { :git => 'https://github.com/shixingbang/LitekitDemo', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'

  s.source_files = 'XYLiteKit/Classes/**/*'
  #s.vendored_libraries = 'XYLiteKit/Dependency/**/*.a'
  #s.vendored_frameworks = 'XYLiteKit/Dependency/**/*.framework'
  s.static_framework = true

 s.vendored_frameworks = 'XYLiteKit/Dependency/VideoSuperResolution/*.framework'
  #  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/VideoSuperResolution/"' }
   s.resource_bundles = {
     'Resource' => 'XYLiteKit/Dependency/VideoSuperResolution/LiteKitVideoSuperResolution.framework/VideoSuperResolution/*.mlm'
   }

   s.dependency 'LiteKitBaseDependency', '~> 0.2.0'
end
