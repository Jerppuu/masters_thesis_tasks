from conan import ConanFile

class Master_thesis_tasks(ConanFile):
    generators = ("CMakeToolchain", "CMakeDeps")
    settings = ("os", "compiler", "build_type", "arch", "compiler")

    def requirements(self):
        self.requires("nlohmann_json/3.11.2") 
