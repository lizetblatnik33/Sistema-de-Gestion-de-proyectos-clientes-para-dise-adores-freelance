#include "sembrar_datos.h"

using namespace std;

//Si la base de datos esta vacia registra 10 clientes
void sembrarDatos(vector<Proyecto>& proyectos) {
    if (proyectos.empty()) {
        proyectos.push_back({"R01", "App Movil", "UX", "TechCorp", "2023", "2500", "tech@mail.com"});
        proyectos.push_back({"R02", "Logo", "branding", "Juan Perez", "2022", "500", "juan@mail.com"});
        proyectos.push_back({"R03", "Web Store", "web", "Zapatos SRL", "2024", "4200", "ventas@zapatos.com"});
        proyectos.push_back({"R04", "Animacion Intro", "motion", "StreamerX", "2023", "800", "stream@x.com"});
        proyectos.push_back({"R05", "Mascota", "ilustracion", "Cereal Co", "2021", "1200", "cer@co.com"});
        proyectos.push_back({"R06", "Landing Page", "web", "Abogados AS", "2024", "1500", "abog@as.com"});
        proyectos.push_back({"R07", "Rebranding", "branding", "Cafe Local", "2022", "3000", "cafe@local.com"});
        proyectos.push_back({"R08", "Folleto", "ilustracion", "Imprenta", "2023", "300", "print@mail.com"});
        proyectos.push_back({"R09", "Dashboard", "UX", "Finanzas Pro", "2024", "5000", "fin@pro.com"});
        proyectos.push_back({"R10", "Video Promo", "motion", "Gimnasio", "2021", "2000", "gym@fit.com"});
    }
}