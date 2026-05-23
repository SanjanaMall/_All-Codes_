const dropdowns = document.querySelectorAll(".dropdown select");
const btn = document.querySelector("form button");
const fromCurr = document.querySelector(".from select");
const toCurr = document.querySelector(".to select");
const msg = document.querySelector(".msg");


for(let select of dropdowns){
    for(currCode in countryList){
        let newOption = document.createElement("option");
        newOption.innerText = currCode;
        newOption.value = currCode;
        if(select.name === "from" && currCode === "USD"){
            newOption.selected = "selected";
        }else if(select.name === "to" && currCode === "INR"){
            newOption.selected = "selected"
        }
        select.append(newOption);
    }


    select.addEventListener("change", (evt) =>{
        updateFlag(evt.target);
    });
}

const updateExchangeRate = async() => {
        const amountInput = document.querySelector(".amount input");
        let amtVal = amountInput.value;

        if (!amtVal || amtVal < 1) {
        amtVal = 1;
        amountInput.value = "1";
    }

        const base = fromCurr.value.toLowerCase();
        const target = toCurr.value.toLowerCase();

        const URL = `https://cdn.jsdelivr.net/npm/@fawazahmed0/currency-api@latest/v1/currencies/${base}.json`;

        console.log(URL);
        
        try{
            const response = await fetch(URL);

            if(!response.ok){
                throw new Error(`HTTP error! Status: ${response.status}`);
            }

            const data = await response.json();

            const rate = data[base][target];

            if(!rate){
                throw new Error("Rate not found");
            }

            const finalAmount = (amtVal * rate).toFixed(2);
            msg.innerText = `${amtVal} ${fromCurr.value} = ${finalAmount} ${toCurr.value}`
        }catch(error){
                msg.innerText = "Error fetching exchange rate";
                console.error(error);
        }
    };

    const updateFlag = (element) => {
        const currCode = element.value;
        const countryCode = countryList[currCode];
        const img = element.parentElement.querySelector("img");

        img.src = `https://flagsapi.com/${countryCode}/flat/64.png`;
    };



btn.addEventListener("click", (evt) => {
    evt.preventDefault();
    updateExchangeRate();
});

window.addEventListener("load", () => {
    updateExchangeRate()
});
