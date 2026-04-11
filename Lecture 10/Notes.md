# Real world useage

## 1. Logger System

IF we keep making a different object just to log, then there will be tooo many objects
if notication service, network service, payment services

Now if we make too many ojects problem will be -

1. then they will be hard to maintain too many objects
2. also if there are too many ojbects (different obj for different services)
   then they will not print in correct sequence, (different class - can't do locking)

## 2. Database Connection

If we don't make it a singleton class - then too many instance will get created
and db connection uses lot of memory, making many instances - which is unecessay

as same instance can be sheared in complete application,
not like different users needs different db instance

## 3. Configuration Manager

configuration class - consists of config of app (db link, page_result_limit, etc.)
I want all the serives should hold only object of single class

I want single source of truth - and hence we must make single class

# When to use singleton

_Avoid using singleton_ - as u need to _use locks_, and the code will be complex
but if you are sure that u want - _single src of truth_ and need only one instance
and the cases like above where you were _saving lot of memory_
