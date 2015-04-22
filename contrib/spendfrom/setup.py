from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for blackhat "coin control"',
      author='Gavin Andresen',
      author_email='gavin@blackhatfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
