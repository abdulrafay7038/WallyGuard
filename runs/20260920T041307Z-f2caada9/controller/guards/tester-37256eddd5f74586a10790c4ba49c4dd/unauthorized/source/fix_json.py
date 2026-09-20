import json
import sys

with open(sys.argv[1], 'r') as f:
    text = f.read()

# quick and dirty fix for trailing commas: use regex or just load and save if not too broken
import re
text = re.sub(r',\s*]', ']', text)
text = re.sub(r',\s*}', '}', text)

data = json.loads(text)
with open(sys.argv[1], 'w') as f:
    json.dump(data, f, indent=2)
