#include "PhysicsTest.h"

void startPhysicsTest() {
    std::cout << "Physics Test Starting..." << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << std::endl;
    std::cout << "Be carefull with symbols and spaces" << std::endl;
    std::cout << std::endl;


    const int NUM_QUESTIONS = 50;
    std::string questions[NUM_QUESTIONS];
    std::string answers[NUM_QUESTIONS];

    questions[0] = "What is the SI unit of force";
    answers[0] = "Newton";

    questions[1] = "What is the formula for Newton's second law of motion?";
    answers[1] = "F = ma";

    questions[2] = "What is the SI unit of energy?";
    answers[2] = "Joule";

    questions[3] = "What is the formula for kinetic energy?";
    answers[3] = "KE=1/2*mv2";

    questions[4] = "What is the acceleration due to gravity on Earth's surface?";
    answers[4] = "9.81";

    questions[5] = "What is the SI unit of power?";
    answers[5] = "Watt";

    questions[6] = "What is the formula for work done?";
    answers[6] = "W = F*d";

    questions[7] = "What is the formula for momentum?";
    answers[7] = "p = m*v";

    questions[8] = "What is the law of conservation of energy?";
    answers[8] = "Energy cannot be created or destroyed, only transformed from one form to another.";

    questions[9] = "What is the SI unit of electric charge?";
    answers[9] = "Coulomb";

    questions[10] = "What is Ohm's law?";
    answers[10] = "The current passing through a conductor between two points is directly proportional to the voltage across the two points.";

    questions[11] = "What is the SI unit of electric potential difference?";
    answers[11] = "Volt";

    questions[12] = "What is the formula for electric power?";
    answers[12] = "P = I * V";

    questions[13] = "What is the SI unit of electric current?";
    answers[13] = "Ampere";

    questions[14] = "What is the force between two charged particles given by?";
    answers[14] = "Coulomb's law";

    questions[15] = "What is the formula for capacitance?";
    answers[15] = "C = Q / V";

    questions[16] = "What is the SI unit of electric field strength?";
    answers[16] = "Newton per coulomb";

    questions[17] = "What is the phenomenon where a conductor's resistance decreases as temperature decreases?";
    answers[17] = "Superconductivity";

    questions[18] = "What is the formula for Ohm's law in terms of resistance?";
    answers[18] = "V = I * R";

    questions[19] = "What is the SI unit of magnetic field strength?";
    answers[19] = "Tesla";

    questions[20] = "What is Faraday's law of electromagnetic induction?";
    answers[20] = "The induced electromotive force in any closed circuit is equal to the rate of change of the magnetic flux through the circuit.";

    questions[21] = "What is Lenz's law?";
    answers[21] = "The direction of the induced electromotive force opposes the change in current that caused it.";

    questions[22] = "What is the SI unit of magnetic flux?";
    answers[22] = "Weber";

    questions[23] = "What is the formula for magnetic force on a current-carrying wire in a magnetic field?";
    answers[23] = "F = B * I * L";

    questions[24] = "What is the SI unit of inductance?";
    answers[24] = "Henry";

    questions[25] = "What is the principle behind transformers?";
    answers[25] = "R = (p * L) / A";

    questions[26] = "What is the formula for electrical resistance in a wire?";
    answers[26] = "Ohm-meter";

    questions[27] = "What is the SI unit of resistivity?";
    answers[27] = "The frequency of a wave is inversely proportional to its wavelength.";

    questions[28] = "What is the relationship between wavelength and frequency for a wave?";
    answers[28] = "An object in motion stays in motion unless acted upon by an external force";

    questions[29] = "What is the SI unit of frequency?";
    answers[29] = "Hertz";

    questions[30] = "What is the principle behind Doppler effect?";
    answers[30] = "The apparent change in frequency of a wave due to the relative motion between the source of the wave and the observer.";

    questions[31] = "What is the formula for period of a wave?";
    answers[31] = "T = 1 / f";

    questions[32] = "What is the formula for wave velocity?";
    answers[32] = "v = f * λ";

    questions[33] = "What is the relationship between energy and frequency for photons?";
    answers[33] = "The energy of a photon is directly proportional to its frequency.";

    questions[34] = "What is the SI unit of intensity of sound?";
    answers[34] = "Decibel";

    questions[35] = "What is the phenomenon where sound waves reflect off surfaces?";
    answers[35] = "Reflection";

    questions[36] = "What is the SI unit of pressure?";
    answers[36] = "Pascal";

    questions[37] = "What is Pascal's principle?";
    answers[37] = "Changes in pressure applied to an enclosed fluid are transmitted undiminished to all portions of the fluid and to the walls of its container.";

    questions[38] = "What is the formula for pressure in a fluid at a depth?";
    answers[38] = "P = P0 + ρ * g * h";

    questions[39] = "What is the principle behind hydraulic machines?";
    answers[39] = "Hydraulic machines operate based on Pascal's principle, using the pressure transmitted through a confined fluid to perform work.";

    questions[40] = "What is the formula for buoyant force?";
    answers[40] = "F = ρ * g * V";

    questions[41] = "What is the phenomenon where light bends as it passes through different mediums?";
    answers[41] = "Refraction";

    questions[42] = "What is Snell's law?";
    answers[42] = "n1 * sin(θ1) = n2 * sin(θ)";

    questions[43] = "What is the critical angle?";
    answers[43] = "The angle of incidence at which light is refracted along the surface of a medium, rather than entering it.";

    questions[44] = "What is the phenomenon where light is dispersed into its constituent colors?";
    answers[44] = "Dispersion";

    questions[45] = "What is the formula for magnification of a lens?";
    answers[45] = "Magnification";

    questions[46] = "What is the SI unit of focal length?";
    answers[46] = "Meter";

    questions[47] = "What is the principle behind total internal reflection?";
    answers[47] = "Total internal reflection occurs when a light ray traveling from a denser medium to a less dense medium strikes the boundary interface at an angle greater than the critical angle.";

    questions[48] = "What is the formula for power of a lens?";
    answers[48] = "P = 1 / f";

    questions[49] = "What is the relationship between angle of incidence and angle of reflection?";
    answers[49] = "The angle of incidence is equal to the angle of reflection.";

    int userScore = 0;
    std::string userAnswer;

    for (int i = 0; i < NUM_QUESTIONS; i++) {
        std::cout << "Question " << (i + 1) << ": " << questions[i] << std::endl;
        std::cout.flush(); // Make sure the question is output to the console
        std::getline(std::cin, userAnswer);

        if (userAnswer == answers[i]) {
            userScore++;
        }
    }
    system("cls");
    std::cout << "Test complete. You scored " << userScore << " out of " << NUM_QUESTIONS << "." << std::endl;
}