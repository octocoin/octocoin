from distutils.core import setup
setup(name='btcspendfrom',
      version='1.0',
      description='Command-line utility for octocoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@octocoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
