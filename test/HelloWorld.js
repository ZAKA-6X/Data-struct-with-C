var x = new Map(
    [
        ["Zaka", "6X"],
        ["Salim", "9X"]
    ]
)

x.set("Karim", "1X")
console.log(x)

for (let [key, value] of x) {
    console.log(`Key: ${key}, Value: ${value}`)
}
