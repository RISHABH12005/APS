class Job:
    def __init__(self, job_id, deadline, profit):
        self.job_id = job_id
        self.deadline = deadline
        self.profit = profit
def sequenc(jobs):
    jobs.sort(key=lambda job: job.profit, reverse=True)
    max_deadline = max(job.deadline for job in jobs)
    slots = [None] * max_deadline
    total_profit = 0
    for job in jobs:
        for slot in range(min(job.deadline, max_deadline) - 1, -1, -1):
            if slots[slot] is None:
                slots[slot] = job.job_id
                total_profit += job.profit
                break
    print("Scheduled Jobs:", slots)
    print("Total Profit:", total_profit)
example_jobs = [
    Job('J1', 2, 60),
    Job('J2', 1, 100),
    Job('J3', 3, 20),
    Job('J4', 2, 40),
    Job('J5', 1, 20),
]
sequenc(example_jobs)