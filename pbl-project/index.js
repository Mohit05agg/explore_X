const pune = document.querySelector("[pune]");
const delhi = document.querySelector("[delhi]");
const kolhapur = document.querySelector("[kolhapur]");



















// Smooth scrolling for anchor links
$('a[href*="#"]').on('click', function (e) {
    e.preventDefault();

    $('html, body').animate({
        scrollTop: $($(this).attr('href')).offset().top
    }, 500, 'linear');
});
