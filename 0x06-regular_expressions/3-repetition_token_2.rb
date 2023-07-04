#!/usr/bin/env ruby
# Match "hbtn, hbttn, hbtttn, hbttttn" and not "hbn"

puts ARGV[0].scan(/hbt+n/).join
