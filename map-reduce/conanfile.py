from conans import ConanFile

class MapReduceConan(ConanFile):
    name = "MapReduce"
    version = "0.1"
    # No settings/options are necessary, this is header only
    exports_sources = "include/*"
    no_copy_source = True

    def package(self):
        self.copy("*.h")

    def build(self):
        self.output.info("milad building")
