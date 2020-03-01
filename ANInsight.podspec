Pod::Spec.new do |spec|

  spec.name          = "ANInsight"
  spec.version       = "0.0.9"
  spec.summary       = "Insight Tracking framework."
  spec.description   = "This is a Insight Tracking framework that was made by ANTS"
  spec.homepage      = "https://antsprogrammatic.com"
  spec.author        = { "Khoi Viet" => "vietvk@antsprogrammatic.com" }
  spec.platform      = :ios, "10.0"
  spec.source = { :http => "https://github.com/vietvk92/ANInsight/archive/#{spec.version}.zip" }
  spec.vendored_frameworks = "ANInsight-#{spec.version}/InsightSDK.framework"
  spec.swift_version = "4.0"
  spec.license      = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
     Version 1.0
   
   Created by ANTS Programmatic on 20/1/2020.
   Copyright 2020 ANTS Programmatic

  This code is distributed under the terms and conditions of the MIT license.

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
   LICENSE
   }
end
