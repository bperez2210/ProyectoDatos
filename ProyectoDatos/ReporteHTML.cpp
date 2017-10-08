#include "ReporteHTML.h"

ReporteHTML::ReporteHTML(void){
	html.open("ReporteBINGO.html");
}

ReporteHTML::~ReporteHTML(void){
}

void ReporteHTML::iniciaHTML(){
	string linea = " ";
	ifstream encabezado("Encabezado.txt");
	if(encabezado.is_open()){
		while( getline(encabezado,linea) ){
			html << linea <<endl;
		}
		encabezado.close();
	}
}

void ReporteHTML::setParametros(int cantUsuarios,int cantCartones,int tipoJuego){
	paramIniciales.str(" ");
	paramIniciales << "<div><pre>";
	paramIniciales << "1. Cantidad de Usuarios :" << cantUsuarios<<endl;
	paramIniciales << "2. Cantidad de cartones por usuario :" + cantCartones<<endl;
	paramIniciales << "3. Tipo de juego (" <<tipoJuego<<")"<<endl;
	paramIniciales << "</pre></div>"<<endl;
}

void ReporteHTML::actualizaHTML(string cartJugador){
	cartonesJugador.str(" ");
	cartonesJugador<<"<div><pre>"<<endl;
	cartonesJugador<<cartJugador<<endl;
	cartonesJugador<<"</pre></div>";
}

void ReporteHTML::actualizaHTML(string cartJugador,string infoGan){
	infoGanador.str(" ");
	infoGanador <<"<div><pre>";
	infoGanador <<"<h4>GANADOR JUGADOR N#"<<infoGan<<"</h4>";
	infoGanador <<"</pre></div>";
}

void ReporteHTML::finalizaHTML(){
	iniciaHTML();
	html << paramIniciales.str();
	html << cartonesJugador.str();
	html << infoGanador.str();
	html << "</html>";
	html.close();
}