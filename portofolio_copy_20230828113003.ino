<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>My Portfolio</title>
<style>
  body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #f5f5f5;
  }
  header {
    background-color: #333;
    color: white;
    text-align: center;
    padding: 20px;
  }
  .container {
    max-width: 1200px;
    margin: 0 auto;
    padding: 20px;
  }
  .project-slider {
    display: flex;
    overflow: hidden;
  }
  .project {
    flex: 0 0 100%;
    transition: transform 0.3s ease-in-out;
  }
  .project img {
    width: 100%;
    height: auto;
  }
  .skills ul {
    list-style-type: none;
    padding: 0;
  }
  .contact {
    text-align: center;
    padding: 20px;
  }
</style>
</head>
<body>
  <header>
    <h1>John Doe</h1>
    <p>Web Developer</p>
  </header>
  <div class="container">
    <section class="introduction">
      <h2>About Me</h2>
      <p>I'm a passionate web developer with a keen interest in creating beautiful and functional websites.</p>
    </section>
    <section class="projects">
      <h2>Projects</h2>
      <div class="project-slider">
        <div class="project">
          <img src="project1.jpg" alt="Project 1">
        </div>
        <div class="project">
          <img src="project2.jpg" alt="Project 2">
        </div>
        <div class="project">
          <img src="project3.jpg" alt="Project 3">
        </div>
      </div>
    </section>
    <section class="skills">
      <h2>Skills</h2>
      <ul>
        <li>HTML5</li>
        <li>CSS3</li>
        <li>JavaScript</li>
        <li>React</li>
        <li>Node.js</li>
      </ul>
    </section>
    <section class="contact">
      <h2>Contact Me</h2>
      <p>Email: john@example.com</p>
      <p>Phone: (123) 456-7890</p>
    </section>
  </div>
  <script>
    const projectSlider = document.querySelector('.project-slider');
    const projects = document.querySelectorAll('.project');
    let currentIndex = 0;

    function showProject(index) {
      projects.forEach((project, idx) => {
        project.style.transform = `translateX(${(idx - index) * -100}%)`;
      });
      currentIndex = index;
    }

    setInterval(() => {
      currentIndex = (currentIndex + 1) % projects.length;
      showProject(currentIndex);
    }, 3000);
  </script>
</body>
</html>


