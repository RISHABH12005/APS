class J:
    def __init__(self, jid, dl, p):
        self.jid = jid
        self.dl = dl
        self.p = p
def sq(js):
    js.sort(key=lambda j: j.p, reverse=True)
    mdl = max(j.dl for j in js)
    ss = [None] * mdl
    tp = 0
    for j in js:
        for s in range(min(j.dl, mdl) - 1, -1, -1):
            if ss[s] is None:
                ss[s] = j.jid
                tp += j.p
                break
    print("Scheduled Jobs:", ss)
    print("Total Profit:", tp)
ej = [
    J('J1', 2, 60),
    J('J2', 1, 100),
    J('J3', 3, 20),
    J('J4', 2, 40),
    J('J5', 1, 20),
]
sq(ej)
