import unittest
import HIndex

class TestHIndex(unittest.TestCase):
    def setUp(self):
        pass
    def test_edge_case1(self):
        #small number
        output = HIndex.process_input("1 5")
        self.assertEqual(output, 1)

        #big number

        #generate_1e5 function will generate 1e5 numbers 
        output = HIndex.process_input(generate_1e5())
        #using hindex implemented linearly will make the result more reliable so that we can test out how other algos work
        self.assertEqual(output, Linear_Algo_HIndex(HIndex.input))
        
        # a ton of 0 times referenced articles
        output = HIndex.process_input("7 0 0 0 0 0 0 0")
        self.assertEqual(output, 0)

        #duplicate
        output = HIndex.process_input("6 4 4 4 4 4 4")
        self.assertEqual(output, 4)

    def test_normal_case(self):
        output = HIndex.process_input("5 8 5 3 4 10")
        self.assertEqual(output, 4)
        
        for i in range(0, 1000):
            output = HIndex.process_input(Random_Number_Generator_For_HIndex())
            self.assertEqual(output, Linear_Algo_HIndex(HIndex.input))
    
if __name__ == "__main__":
    suite = unittest.TestLoader().LoadTestsFromTestCase(TestHIndex)
    runner = unittest.TextTestRunner(verbosity = 2)
    runner.run(suite)
