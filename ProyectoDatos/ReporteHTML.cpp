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
	paramIniciales=" ";
	paramIniciales = "\n<div><pre>\n";
	paramIniciales += "\n1. Cantidad de Usuarios :" + cantUsuarios;
	paramIniciales += "\n2. Cantidad de cartones por usuario :" + cantCartones;
	paramIniciales += "\n3. Tipo de juego (" +tipoJuego;
	paramIniciales += "\n</pre></div>\n";
}

void ReporteHTML::actualizaHTML(string cartJugador){
	cartonesJugador=" ";
	cartonesJugador+="\n<div><pre>\n";
	cartonesJugador+=cartJugador;
	cartonesJugador+="\n</pre></div>\n";
}

void ReporteHTML::actualizaHTML(string cartJugador,string infoGan){
	infoGanador=" ";
	infoGanador +="\n<div><pre>\n";
	infoGanador +="\n<h4>GANADOR JUGADOR N#" +infoGan;
	infoGanador +="\n</h4>\n";
	infoGanador +="\n</pre></div>\n";
}

void ReporteHTML::finalizaHTML(){
	/*iniciaHTML();*/
	//html << paramIniciales;
	//html << cartonesJugador;
	//html << infoGanador;
	//html << "</html>";
	char c = 0;
	for(int i=0;i<225;c++,i++){
		cout<<"Valor I:"<<i<<"char:"<<c<<endl;
		html<<"Valor I:"<<i<<"Char:"<<c<<"\n";
	}
	html.close();
}