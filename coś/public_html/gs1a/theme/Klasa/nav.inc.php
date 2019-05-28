<?php if(!defined('IN_GS')){ die('you cannot load this page directly.'); } ?>
   <nav class="navbar navbar-expand-lg navbar-dark bg-dark">
      <a class="navbar-brand" href="#">Nasza klasa</a>
      <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#nawigacja" aria-controls="nawigacja" aria-expanded="false" aria-label="Toggle navigation">
         <span class="navbar-toggler-icon"></span>
      </button>
      <div class="collapse navbar-collapse" id="nawigacja">
         <ul class="navbar-nav m-auto">
            <li class="nav-item active">
               <a class="nav-link" href="#">Strona główna <span class="sr-only">(current)</span></a>
            </li>
            <li class="nav-item">
               <a class="nav-link" href="#">O nas</a>
            </li>
            <li class="nav-item">
               <a class="nav-link" href="#">Galerie</a>
            </li>
            <li class="nav-item dropdown">
               <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                  Archiwum
               </a>
               <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                  <a class="dropdown-item" href="#">2017/2018</a>
                  <a class="dropdown-item" href="#">2016/2017</a>
               </div>
            </li>
         </ul>
         <form class="form-inline my-2 my-lg-0">
            <input class="form-control mr-sm-2" type="search" placeholder="Szukaj" aria-label="Szukaj">
            <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Szukaj</button>
         </form>
      </div>
   </nav>