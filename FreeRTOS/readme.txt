place the folders `Demo`, `License` and `Source` from your FreeRTOS download here


export FREERTOS_BASE=~/workspace/amazon-freertos

cp $FREERTOS_BASE/LICENSE ./
cp -rf $FREERTOS_BASE/demos ./
cp -rf $FREERTOS_BASE/lib/FreeRTOS-Plus-TCP/source ./
mv source Source
cp -rf $FREERTOS_BASE/lib/include ./source/
