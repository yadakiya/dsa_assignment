{
    // Use IntelliSense to learn about possible attributes.
    // Hover to view descriptions of existing attributes.
    // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Bash on Windows Attach",
            "type": "cppdbg",
            "request": "attach",
            "program": "enter program name, for example ${workspaceFolder}/a.exe",
            "processId": "${command:pickRemoteProcess}",
            "pipeTransport": {
                "debuggerPath": "/usr/bin/gdb",
                "pipeProgram": "${env:windir}\\system32\\bash.exe",
                "pipeArgs": ["-c"],
                "pipeCwd": ""
            },
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "Set Disassembly Flavor to Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ]
        },
        {
            "name": "(gdb) Bash on Windows Attach",
            "type": "cppdbg",
            "request": "attach",
            "program": "enter program name, for example ${workspaceFolder}/a.exe",
            "processId": "${command:pickRemoteProcess}",
            "pipeTransport": {
                "debuggerPath": "/usr/bin/gdb",
                "pipeProgram": "${env:windir}\\system32\\bash.exe",
                "pipeArgs": ["-c"],
                "pipeCwd": ""
            },
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                },
                {
                    "description": "Set Disassembly Flavor to Intel",
                    "text": "-gdb-set disassembly-flavor intel",
                    "ignoreFailures": true
                }
            ]
        }

    ]
}