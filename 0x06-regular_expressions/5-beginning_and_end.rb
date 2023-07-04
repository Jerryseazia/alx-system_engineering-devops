#!/usr/bin/env ruby
# Match a string that will start with "h" and ends with "n" with single char

puts ARGV[0].scan(/h.n/).join
