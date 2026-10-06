function planTrip() {

    let start = document.getElementById("start").value;
    let destination = document.getElementById("destination").value;

    if (start === "" || destination === "") {
        alert("Please enter both locations.");
        return;
    }

    alert("Your trip is planned!\n\nFrom: " + start +
          "\nTo: " + destination);
}
function createTrip() {

    let start = document.getElementById("tripStart").value;

    let destination =
        document.getElementById("tripDestination").value;

    let bike =
        document.getElementById("bike").value;

    let mileage =
        document.getElementById("mileage").value;


    if (
        start === "" ||
        destination === "" ||
        bike === "" ||
        mileage === ""
    ) {

        alert("Please fill all trip details.");

        return;
    }


    alert(
        "Trip Created Successfully!\n\n" +
        "From: " + start + "\n" +
        "To: " + destination + "\n" +
        "Bike: " + bike + "\n" +
        "Mileage: " + mileage + " km/L"
    );
}