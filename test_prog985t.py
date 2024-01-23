import random
import unittest
from time import perf_counter as current_time


class TestMergeSort(unittest.TestCase):
    def setUp(self):
        self.startTime = current_time()

    def tearDown(self):
        t = current_time() - self.startTime
        print(f"{self.id()}: {t:.6f}")

    # def test_one(self):
    #     self.assertEqual(methodcall, expectedvalue)


if __name__ == '__main__':
    suite = unittest.TestLoader().loadTestsFromTestCase(TestCalc)
    unittest.TextTestRunner(verbosity=0).run(suite)
  