#!/bin/sh
echo "ABCのコンテストNumberを入力してください ABCのA, B, C問題のみ生成"
read NAME
mkdir ./ABC/$NAME ./ABC/$NAME/A ./ABC/$NAME/B ./ABC/$NAME/C
touch ./ABC/$NAME/A/A.cpp ./ABC/$NAME/B/B.cpp ./ABC/$NAME/C/C.cpp

# template = "#include <bits/stdc++.h>\nusing namespace std;\nint main(){\n\n\n}"
echo -e "#include <bits/stdc++.h>\nusing namespace std;\nint main(){\n\n\n}" >> ./ABC/$NAME/A/A.cpp
echo -e "#include <bits/stdc++.h>\nusing namespace std;\nint main(){\n\n\n}" >> ./ABC/$NAME/B/B.cpp
echo -e "#include <bits/stdc++.h>\nusing namespace std;\nint main(){\n\n\n}" >> ./ABC/$NAME/C/C.cpp
code ./ABC/$NAME/A/A.cpp ./ABC/$NAME/B/B.cpp ./ABC/$NAME/C/C.cpp
cd ./ABC/$NAME



echo "完了"