import libsimple_api_python

def test():
    node = libsimple_api_python.Node()
    node.SetVal(1)
    node.IncrementVal()

    libsimple_api_python.IncrementNode(5)

if __name__ == '__main__':
    test()
