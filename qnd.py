VOY = "aeiouy"

def strlow (s) :
    return s.lower()

def strup (s) :
    return s.upper()

def strswap (s) :
    return s.swapcase()

def strcup (s) :
    return "".join(c.upper() if c not in VOY else c for c in s)

def strclow (s) :
    return "".join(c.lower() if c not in VOY else c for c in s)

def strcswap (s) :
    return "".join(c.swapcase() if c not in VOY else c for c in s)

def strvup (s) :
    return "".join(c.upper() if c in VOY else c for c in s)

def strvlow (s) :
    return "".join(c.lower() if c in VOY else c for c in s)

def strvswap (s) :
    return "".join(c.swapcase() if c in VOY else c for c in s)
