class Node:
    def __init__(self, name):
        self.name = name
        self.neighbors = []

    def add_neighbor(self, neighbor):
        self.neighbors.append(neighbor)

    def is_visited(self):
        return self.visited

    def set_visited(self):
        self.visited = True

class Graph:
    def __init__(self):
        self.nodes = {}

    def add_node(self, node):
        self.nodes[node.name] = node

    def get_node(self, name):
        return self.nodes[name]

    def perform_dfs(self, start_node, end_node):
        stack = [start_node]
        visited = set()

        while stack:
            current_node = stack.pop()

            if current_node == end_node:
                return True

            if current_node not in visited:
                visited.add(current_node)

                for neighbor in current_node.neighbors:
                    stack.append(neighbor)

        return False

    def find_shortest_path(self, start_node, end_node):
        queue = [(start_node, [])]
        visited = set()

        while queue:
            current_node, path = queue.pop(0)

            if current_node == end_node:
                return path

            if current_node not in visited:
                visited.add(current_node)

                for neighbor in current_node.neighbors:
                    new_path = list(path)
                    new_path.append(neighbor)

                    queue.append((neighbor, new_path))

        return None

def illustrate_graph(graph):
    for node in graph.nodes.values():
        print(f'{node.name} -> {[neighbor.name for neighbor in node.neighbors]}')

def main():
    graph = Graph()

    node_a = Node('A')
    node_b = Node('B')
    node_c = Node('C')
    node_d = Node('D')
    node_e = Node('E')
    node_f = Node('F')
    node_g = Node('G')

    node_a.add_neighbor(node_b)
    node_a.add_neighbor(node_c)
    node_b.add_neighbor(node_d)
    node_c.add_neighbor(node_e)
    node_d.add_neighbor(node_f)
    node_e.add_neighbor(node_g)
    node_f.add_neighbor(node_g)

    graph.add_node(node_a)
    graph.add_node(node_b)
    graph.add_node(node_c)
    graph.add_node(node_d)
    graph.add_node(node_e)
    graph.add_node(node_f)
    graph.add_node(node_g)

    illustrate_graph(graph)

    start_node = input('Enter the starting node: ')
    end_node = input('Enter the ending node: ')

    shortest_path = graph.find_shortest_path(graph.get_node(start_node), graph.get_node(end_node))

    if shortest_path is not None:
        print(f'The shortest path from {start_node} to {end_node} is: {[node.name for node in shortest_path]}')
    else:
        print(f'There is no path from {start_node} to {end_node}.')

if __name__ == '__main__':
    main()
