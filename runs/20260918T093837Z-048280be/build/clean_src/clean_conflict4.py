import sys

def clean_file(in_path):
    with open(in_path, 'r') as f:
        lines = f.readlines()
    
    with open(in_path, 'w') as f:
        state = 0 # 0: normal, 1: in HEAD, 2: in incoming
        for line in lines:
            if line.startswith('<<<<<<<'):
                state = 1
                continue
            elif line.startswith('======='):
                state = 2
                continue
            elif line.startswith('>>>>>>>'):
                state = 0
                continue
            
            if state == 0 or state == 2:
                f.write(line)

for file in sys.argv[1:]:
    clean_file(file)
