(function () {
    window.addEventListener('DOMContentLoaded', function () {
        document.querySelector('.mybutton').addEventListener('click', function () {
            var result = Module.ccall('hello', // name of C function 
                null, // return type
                null, // argument types
                null); // arguments
        });
    });
})();