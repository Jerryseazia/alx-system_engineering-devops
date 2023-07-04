#!/usr/bin/env ruby
# Match "hbtn, htn" and not "hbbtn"

puts ARGV[0].scan(/hb?tn/).join
