test=input()

for t in range(test):
    inp=raw_input()
    signs=""
    for c in inp:
        if not c=='=':
            signs+=c
    n=len(signs)
    if n==0:
        print 1
        continue
    ints=[0]*(n+1)
    big,small=0,0
    for i in range(n-1):
        big=max(big,ints[i])
        small=min(small,ints[i])
        if signs[i]=='<' and signs[i+1]=='<':
            ints[i+1]=ints[i]+1
        if signs[i]=='>' and signs[i+1]=='>':
            ints[i+1]=ints[i]-1
        if signs[i]=='>' and signs[i+1]=='<':
            ints[i+1]=small
            if small==ints[i]:
                ints[i+1]=ints[i]-1
        if signs[i]=='<' and signs[i+1]=='>':
            ints[i+1]=big
            if big==ints[i]:
                ints[i+1]=ints[i]+1
    i=n-1
    big=max(big,ints[i])
    small=min(small,ints[i])
    if signs[i]=='<':
        ints[i+1]=big
        if big==ints[i]:
            ints[i+1]=ints[i]+1
    if signs[i]=='>':
        ints[i+1]=small
        if small==ints[i]:
            ints[i+1]=ints[i]-1
    print len(set(ints))