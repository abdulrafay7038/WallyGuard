import sys

def clean_file(in_path):
    with open(in_path, 'r') as f:
        lines = f.readlines()
    
    with open(in_path, 'w') as f:
        for line in lines:
            if line.startswith('<<<<<<<') or line.startswith('=======') or line.startswith('>>>>>>>'):
                continue
            f.write(line)

for file in sys.argv[1:]:
    clean_file(file)
