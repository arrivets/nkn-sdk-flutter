#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html.
# Run `pod lib lint nkn_sdk_flutter.podspec' to validate before publishing.
#
Pod::Spec.new do |s|
  s.name             = 'nkn_sdk_flutter'
  s.version          = '0.0.1'
  s.summary          = 'nkn-sdk-flutter'
  s.description      = <<-DESC
nkn-sdk-flutter
                       DESC
  s.homepage         = 'https://github.com/iheron/nkn-sdk-flutter'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'Heron' => 'heron.roman@gmail.com' }
  s.source           = { :path => '.' }
  s.source_files = 'Classes/**/*'
  s.dependency 'Flutter'
  s.platform = :ios, '8.0'

  s.vendored_frameworks = 'Frameworks/*.framework'

  # Flutter.framework does not contain a i386 slice.
  s.pod_target_xcconfig = { 'DEFINES_MODULE' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
  s.swift_version = '5.0'
end
