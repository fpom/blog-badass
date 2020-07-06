import pathlib, string, random, subprocess
import qnd
from badass.p5 import PrePreProcessor, String

random.seed(12345)

chars = list(string.ascii_letters + string.digits + "!#$%&()*+,-./:;<=>?@[]^_{|}~")
random.shuffle(chars)
STR = String("".join(chars))

for tgtdir in sorted(pathlib.Path("done").glob("*")) :
    project = tgtdir.name
    ppp = PrePreProcessor(f"todo/{project}.c")
    with open(tgtdir / "bad.sh", "w") as out :
        out.write(f"FUN='{ppp.top.cppenv['FUN']}'\n"
                  f"ARG='{ppp.top.cppenv['ARG']}'\n"
                  f"TEST='{ppp.top.cppenv['TEST']}'\n"
                  f"STR='{ppp.top.cppenv['STR']}'\n"
                  f"RESULT='{ppp.top.cppenv['RESULT']}'\n")
    RESULT = String(getattr(qnd, ppp.top.cppenv["algo"])(STR))
    with open(tgtdir / "run.sh", "w") as out :
        out.write(f"STR='{STR}'\n"
                  f"RESULT='{RESULT}'\n")
    subprocess.check_call(["sh", "bad.sh", str(tgtdir)])
