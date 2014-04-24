api = 2
core = 7.x

projects[drupal][version] = 7.27

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = 62951de9047f8a03c0a9cd9af04a3cda99b91fea

; For building a precise release.
;projects[opigno_lms][version] = 1.9
