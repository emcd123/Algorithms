class Array:
    items = []
    def __init__(self, size):
        self.size = size
        for value in range(0, self.size):
            Array.items.append(0)

    def size_array():
        return self.size;

    def array_push(index, element):
        Array.items[index] = element

    def array_delete_byIndex(index):
        Array.items[index] = 0

    def array_delete_byElement(element):
        for value in range(0, size_array()):
            if element == Array.items[value]:
                Array.items[value] = 0

    def get_element(index):
        return Array.items[index]

    def get_all_elements():
        str = ''
        iter = 0
        for val in Array.items:
            str = iter + ': ' + val + ' '
            iter += 1
        return str


arr = Array(10)
print(arr.size_array)
