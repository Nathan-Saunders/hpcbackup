data=read.table('oilhw.txt', header=TRUE, fill=TRUE)
hist(data$dm, breaks=20, main="", xlab="Daily Mileage", border="black", col="red", las=1)