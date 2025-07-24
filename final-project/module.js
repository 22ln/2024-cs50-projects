function calc(op) {
    n1 = parseFloat(document.getElementById("fo").value)
    n2 = parseFloat(document.getElementById("so").value)

    if (op === "+") {
        result = n1 + n2
    } else if (op === "-") {
        result = n1 - n2
    } else if (op === "*") {
        result = n1 * n2
    } else if (op === "/") {
        result = n1 / n2
    } else if (op === "%") {
        result = n1 % n2
    }

    if (isNaN(result)) {
        alert(" invalid input ")
        return 0
    }

    document.getElementById("res").value = result
}
