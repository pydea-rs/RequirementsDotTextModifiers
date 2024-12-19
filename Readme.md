<h1>Requirements.txt Modifiers</h1>
<hr />
* These two are simple projects, allowing to modify requirements.txt file for python package management.
<br>

<br>
<h1> FirstWord Reader </h1>
<h2>Language: C++</h2>
<hr />
* This is a simple c++ project, which reads a text file content; It just reads the first word from each line of the file and ignores the rest.
It can be useful to remove the CRC and hash data from old python requirements.txx file, and just retrieving its module name and the version.
Example input file content:

<pre>
asgiref==3.3.1; python_full_version >= "3.6.1" and python_full_version < "4.0.0" and python_version >= "3.6" \
    --hash=sha256:5ee950735509d04eb673bd7f7120f8fa1c9e2df495394992c73234d526907e17 \
    --hash=sha256:7162a3cb30ab0609f1a4c95938fd73e8604f63bdba516a7f7d64b83ff09478f0
async-timeout==3.0.1; python_full_version >= "3.5.3" and python_version >= "3.7" \
    --hash=sha256:0c3c816a028d47f659d6ff5c745cb2acf1f966da1fe5c19c77a70282b25f4c5f \
    --hash=sha256:4291ca197d287d274d0b6cb5d6f8f8f82d434ed288f962539ff18cc9012f9ea3
atomicwrites==1.4.0; python_version >= "3.6" and python_full_version < "3.0.0" and sys_platform == "win32" or sys_platform == "win32" and python_version >= "3.6" and python_full_version >= "3.4.0" \
    --hash=sha256:6d1784dea7c0c8d4a5172b6c620f40b6e4cbfdf96d783691f2e1302a7b88e197 \
    --hash=sha256:ae70396ad1a434f9c7046fd2dd196fc04b12f9e91ffb859164193be8b6168a7a
attrs==20.3.0; python_full_version >= "3.6.7" and python_version >= "3.7" \
    --hash=sha256:31b2eced602aa8423c2aea9c76a724617ed67cf9513173fd3a4f03e3a929c7e6 \
    --hash=sha256:832aa3cde19744e49938b91fea06d69ecb9e649c93ba974535d08ad92164f700
</pre>

<br>
<br>

# requirements.txt Version Remover
<h2>Language: Python</h2>
<hr/>
* This project is useful when a requirements.txt file is too old, some modules is it even have conflicts with each other.
Running this script on that file, will generate a new requirements file, which will only indicate module names, allowing python to choose the latest version of each nodule.

Example Input:
<pre>
gunicorn~=20.1.0
asgiref~=3.5.0
django-environ~=0.8.1
django==4
djangorestframework==3.13.1
</pre>