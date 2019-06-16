array = list(input().split())
freq = dict()
for string in array:
    if freq.get(string) is not None:
        freq[string] = freq.get(string)+1
    else:
        freq[string] = 1
if len(freq)==0:
    print(-1)
    exit()
for string in freq:
    if freq[string] > 1:
        print('{0} {1}'.format(string, freq[string]))