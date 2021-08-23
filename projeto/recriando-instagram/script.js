let time = 5000,
    currentImageIndex = 0,
    images = document
                   .querySelectorAll("#slider img")
    max = images.length;

function nextImage() {
    
    images[currentImageIndex]
        .classList.remove("selected")

    currentImageIndex++

    if(currentImageIndex >= max)
        currentImageIndex = 0
    
    images[currentImageIndex]
        .classList.add("selected")
}

function start() {
    setInterval(() => {
        nextImage()
    }, time)
}


window.addEventListener("load", start)

//Primeiro temos um tempo, em seguida iniciamos essas imagens com 
//um indice, pegamos todas as imagens de onde elas estão localizadas
//quantidade maxima é o tanto de imagem encontrada, temos a 
//função que passa as imagens, nessa função ela add e remove a classe selected
// que é a classe que define a imagem que irá aparecer
// nela tambem incrementamos as imagens para passar de uma para outra
//e zeramos o indece quando chega ao final das imagens
// por fim uma função que inicia toda essa interação, e tudo só
//funciona quando a janela é totalmente carregada
