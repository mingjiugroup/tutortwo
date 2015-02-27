api = 2
core = 7.x

projects[drupal][version] = 7.34

; For building dev.
projects[opigno_lms][type]               = profile
projects[opigno_lms][download][type]     = git
projects[opigno_lms][download][branch]   = "7.x-1.x"
projects[opigno_lms][download][url]      = "http://git.drupal.org/project/opigno_lms.git"
projects[opigno_lms][download][revision] = e2f5de811b19d4df5e1db8f720454d0a52be6b01

; For building a precise release.
;projects[opigno_lms][version] = 1.18