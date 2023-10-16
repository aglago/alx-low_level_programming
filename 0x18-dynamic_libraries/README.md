# 0x18. C - Dynamic libraries
## Learning Objectives
### [What is a dynamic library, how does it work, how to create one, and how to use it](https://github.com/aglago/Sofware-Engineering/tree/master/0x02.%20Low-level%20programming%20%26%20Algorithm/Hatching%20out/0x09.%20C%20-%20Static%20libraries)
### What is the environment variable $LD_LIBRARY_PATH and how to use it
The `$LD_LIBRARY_PATH` environment variable is a system environment variable that specifies a list of directories where the system should look for dynamic/shared libraries before searching the standard locations. Dynamic/shared libraries are used by programs at runtime. This variable is typically used on Unix-like systems, such as Linux.

Here's how you can use `$LD_LIBRARY_PATH`:

1. **Viewing Current Value:**
   
   You can view the current value of `$LD_LIBRARY_PATH` by running the following command in your terminal:

   ```bash
   echo $LD_LIBRARY_PATH
   ```

   If it's not set, it will typically show an empty string.

2. **Setting `$LD_LIBRARY_PATH` Temporarily:**

   To set the variable temporarily for your current shell session, you can use a command like this:

   ```bash
   export LD_LIBRARY_PATH=/path/to/your/library:$LD_LIBRARY_PATH
   ```

   This command adds the directory `/path/to/your/library` to the `$LD_LIBRARY_PATH`. If `$LD_LIBRARY_PATH` already contains directories, you can use `:$LD_LIBRARY_PATH` to append to the existing value.

   Please note that this change is only effective for the current shell session. It won't persist across terminal sessions.

3. **Setting `$LD_LIBRARY_PATH` Permanently:**

   If you want to set `$LD_LIBRARY_PATH` permanently, you can add the export command to your shell's configuration file, such as `~/.bashrc` for the Bash shell. Here's an example of how to do it:

   ```bash
   echo 'export LD_LIBRARY_PATH=/path/to/your/library:$LD_LIBRARY_PATH' >> ~/.bashrc
   ```

   After making this change, `$LD_LIBRARY_PATH` will be set every time you open a new terminal session.

4. **Using It When Running Programs:**

   When running a program that depends on dynamic/shared libraries, the system uses the paths specified in `$LD_LIBRARY_PATH` to search for those libraries. For example:

   ```bash
   LD_LIBRARY_PATH=/path/to/your/library:$LD_LIBRARY_PATH your_program
   ```

   This sets `$LD_LIBRARY_PATH` temporarily for the `your_program` command. This is useful when you need to specify different library paths for specific applications.

It's important to use `$LD_LIBRARY_PATH` with caution, especially when setting it permanently, as it can affect the behavior of all programs that rely on dynamic/shared libraries. Misusing it can lead to library conflicts and system instability. Be sure to set it only when necessary and for the specific use case.

### [What are the differences between static and shared libraries]((https://github.com/aglago/Sofware-Engineering/tree/master/0x02.%20Low-level%20programming%20%26%20Algorithm/Hatching%20out/0x09.%20C%20-%20Static%20libraries)

### Basic usage `nm`, `ldd`, `ldconfig`
Here are some basic usages of the `nm`, `ldd`, and `ldconfig` commands in Unix-like systems, which are often used to inspect and manage libraries:

1. **`nm` (Symbol List):**

   The `nm` command is used to list the symbols (functions, variables, etc.) within a binary executable or a shared library.

   - To list the symbols of an executable or a shared library, simply run `nm` followed by the path to the binary:

     ```bash
     nm /path/to/binary
     ```

   - To filter the symbols (e.g., show only functions), you can use options like `-C` (demangle C++ symbols) and `-t` (display only the text section):

     ```bash
     nm -C -t /path/to/binary
     ```

2. **`ldd` (List Dynamic Dependencies):**

   The `ldd` command is used to list the shared libraries (dynamic dependencies) that an executable or shared library requires.

   - To list the shared libraries required by an executable, run `ldd` followed by the path to the executable:

     ```bash
     ldd /path/to/executable
     ```

   - To list the shared libraries required by a shared library, use `ldd` with the path to the library:

     ```bash
     ldd /path/to/shared/library.so
     ```

   This command will show the paths to the shared libraries that the binary depends on.

3. **`ldconfig` (Update Shared Library Cache):**

   The `ldconfig` command is used to update the cache of shared libraries. This is often necessary when you install a new shared library or update the library paths.

   - To update the cache, run `ldconfig` as the superuser (root) or with `sudo`:

     ```bash
     sudo ldconfig
     ```

   - To specify a custom library directory to update, use the `-n` option:

     ```bash
     sudo ldconfig -n /path/to/custom/library/directory
     ```

   Updating the cache ensures that the system can find and link the shared libraries correctly.

Please note that these commands are primarily used on Unix-like systems (e.g., Linux). They provide valuable information about the symbols and dependencies of binaries, as well as manage shared libraries and their paths on the system.
