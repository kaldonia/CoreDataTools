Pod::Spec.new do |s|
  s.name         = "CoreDataTools"
  s.version      = "0.0.1"
  s.summary      = "A simple conveniance layer to access core data content."
  s.homepage     = "http://www.kaldonium.de/CoreDataTools"
  s.license      = {
    :type => 'Private use only.',
    :text => <<-LICENSE
                Copyright (C) 2013 Timo Kabsch
                All rights reserved.
                LICENSE
    }
  s.author       = { "Timo Kabsch" => "timo.kabsch@me.com" }
  s.source       = { :git => "kabsch@mili:git/CoreDataTools.git", :tag => '0.0.1' }
  s.platform     = :ios, '5.0'
  s.source_files = 'CoreDataTools/**/*.{h,m}'
  s.frameworks   = 'CoreData', 'Foundation'
  s.requires_arc = true
end
