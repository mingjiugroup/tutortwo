api = 2
core = 7.x

projects[drupal][version] = 7.28

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = ae50baaf44dfc720d080b83c11d6483b1feb1e07

; For building a precise release.
;projects[opigno_lms][version] = 1.11
