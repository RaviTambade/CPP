# Stream Classes in C++

A stream is a representation of a computer that performs input/output operations. It can be viewed as either a destination or a source of indefinitely long characters which can be decided by the way they are used. 

fstream in C++ comes with a library that includes methods for dealing with files.

- <b>ofstream</b>- This class describes an output stream. It is used to create files and to write data to files.
- <b>ifstream</b>- This class describes an input stream. It's a program that reads data from files and displays it.
- <b>fstream</b>- This class describes a file stream in general. It has ofstream and ifstream capabilities. This means it can create files, write to files, and read data from files.

To use the fstream library's above classes, you must include it as a header file in your program. By default, the #include preprocessor directive will be used. The iostream header file must also be used.


## Different Types of File Modes
Let's look at the different types of file modes that can be used in our source code.

<table><tbody>
<tr>
<td>
<h3>Input-Output Stream Prefix</h3>
</td>
<td>
<h3>Description</h3>
</td>
</tr>
<tr>
<td>
<p><b>ios::in</b></p>
</td>
<td>
<p>This ios prefix is used to open a file to read input from the user.</p>
</td>
</tr>
<tr>
<td>
<p><b>ios::out</b></p>
</td>
<td>
<p>This ios prefix is used to open a file to write the output from the user.</p>
</td>
</tr>
<tr>
<td>
<p><b>ios::ate</b></p>
</td>
<td>
<p>This ios prefix in ifstream c++ is used to open a file without truncating and allows data to be written anywhere in the mentioned file.</p>
</td>
</tr>
<tr>
<td>
<p><b>ios::trunc</b></p>
</td>
<td>
<p>This ios prefix is used to truncate the existing file.</p>
</td>
</tr>
<tr>
<td>
<p><b>ios::app</b></p>
</td>
<td>
<p>This ios prefix is used to open a file and append it to the end.</p>
</td>
</tr>
<tr>
<td>
<p><b>ios::binary</b></p>
</td>
<td>
<p>This ios prefix is used to treat the given file as a binary format.</p>
</td>
</tr>
</tbody></table>