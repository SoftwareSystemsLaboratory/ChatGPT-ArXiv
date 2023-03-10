def partition(n):
    """
    This function generates all the partitions of a given integer n
    """
    if n == 0:
        return [[]]
    partitions = []
    for p in partition(n-1):
        for i, q in enumerate(p):
            partitions.append(p[:i] + [q+1] + p[i+1:])
        partitions.append(p + [1])
    return partitions
