api = 2
core = 7.x

projects[drupal][version] = 7.27

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = f9ecc3f4d05628786e9bc018753ca3667ed06661

; For building a precise release.
;projects[opigno_lms][version] = 1.9
