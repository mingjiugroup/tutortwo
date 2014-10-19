api = 2
core = 7.x

projects[drupal][version] = 7.32

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 09a6b63bced1af3b708a3b550ca472a65f36e091

; For building a precise release.
;projects[opigno_lms][version] = 1.16
