// For Runner
{
"cmd": [ "sh", "-c", "echo $file | sed -r 's/.*\\/src\\///g' | sed -r 's/\\.java//g' | sed -r 's/\\//\\./g' | xargs java;"
],
"info": "\\033[01;34mRunning\\033[00m \\033[01;31m$file_name\\033[00m\n",
"env": {"OUT_DIR": "$project_path\\.bin", "CLASSPATH" : "$OUT_DIR:$CLASSPATH"},
"selector": "source.java",
"working_dir": "$project_path"
}

// For Buid System

{
"cmd": [ "sh", "-c", "mkdir -p $OUT_DIR; find $SRC_DIR -name \"*.java\" -print | xargs javac -sourcepath $SRC_DIR -d \"$OUT_DIR\"; echo '\\033[01;34mDone!\\033[00m'"
],
"info": "\\033[01;34mBuilding\\033[00m \\033[01;31m$project_name\\033[00m",
"env": {"OUT_DIR": "$project_path\\.bin", "CLASSPATH" : "$OUT_DIR:$CLASSPATH", "SRC_DIR": "src"},
"selector": "source.java",
"working_dir": "$project_path"
}