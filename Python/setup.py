from distutils.core import setup
import py2exe
import sys
sys.setrecursionlimit(1500)
setup(windows=[{"script":"MainGui.py"}], options={"py2exe":{"includes":["sip"]}})