#include "ReporteHTML.h"

ReporteHTML::ReporteHTML(void){
	html.open("ReporteBINGO.html");
	ronda=1;
	canCartones=0;
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
	this->canCartones=cantCartones;
	paramIniciales.str(" ");
	paramIniciales << "<div style='margin:0;'>";
	paramIniciales << "<h1>Parametros iniciales</h1>"<<endl;
	paramIniciales << "<p>1. Cantidad de Usuarios: "<< cantUsuarios<<"</p>";
	paramIniciales << "<p>2. Cantidad de cartones por usuario: " << cantCartones<<"</p>";
	paramIniciales << "<p>3. Tipo de juego (" <<tipoJuego<<") :"<<"</p>";
	paramIniciales << "</div>"<<endl;
}

void ReporteHTML::actualizaHTML(int numJugador,string cartJugador){
	cartonesJugador<<"<h3>Jugador N:"<<numJugador<<" ("<<canCartones<<" tableros)"<<"</h3>"<<endl;
	cartonesJugador<<cartJugador<<endl;
}

void ReporteHTML::actualizaHTML(string cartJugador,string infoGan){
	infoGanador <<"<h4>GANADOR JUGADOR N#"<<infoGan<<"</h4>";
}

void ReporteHTML::finalizaHTML(){
	iniciaHTML();
	html << paramIniciales.str();
	html <<"<h2>Ronda N:"<<ronda<<"</h2>"<<endl;
	html << cartonesJugador.str();
	html << infoGanador.str();
	html << "</html>";
	html.close();
	ronda++;
}