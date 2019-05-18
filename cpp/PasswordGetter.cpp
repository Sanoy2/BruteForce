#include "PasswordGetter.hh"

std::vector<std::string> PasswordGetter::GetPasswordsHashes()
{
    std::vector<std::string> digests;
    Hasher hasher;
    digests.push_back(hasher.Hash("abc"));
    digests.push_back(hasher.Hash("abc"));
    digests.push_back(hasher.Hash("abc"));
    digests.push_back(hasher.Hash("qaz"));
    digests.push_back(hasher.Hash("sdf"));
    digests.push_back(hasher.Hash("zXz"));
    digests.push_back(hasher.Hash("zmp"));
    digests.push_back(hasher.Hash("sdf"));
    digests.push_back(hasher.Hash("qaz"));

    // digests.push_back("8C6976E5B5410415BDE908BD4DEE15DFB167A9C873FC4BB8A81F6F2AB448A918"); // admin
    // digests.push_back("25F43B1486AD95A1398E3EEB3D83BC4010015FCC9BEDB35B432E00298D5021F7"); // admin1
    // digests.push_back("65E84BE33532FB784C48129675F9EFF3A682B27168C0EA744B2CF58EE02337C5"); // qwerty
    // digests.push_back("EF797C8118F02DFB649607DD5D3F8C7623048C9C063D532CC95C5ED7A898A64F"); // 12345678
    // digests.push_back("5E884898DA28047151D0E56F8DC6292773603D0D6AABBDD62A11EF721D1542D8"); // password
    // digests.push_back("48D2A5BBCF422CCD1B69E2A82FB90BAFB52384953E77E304BEF856084BE052B6"); // p4ssw0rd
    // digests.push_back("E3FD6E5F91DA1217688AEC94F282865F666F053C5AAA703570E8E2360DE9E8A3"); // 24061984
    // digests.push_back("B20A3CD1A566671D77C6AFF641775C9857C4B3F585FCCC3278693ABBB15E385B"); // 667771888
    // digests.push_back("AF65D924F24DED70EC46472B93B0B7AA3F9317982F35881828140E0949D2E468"); // IloveYou!
    // digests.push_back("6CA13D52CA70C883E0F0BB101E425A89E8624DE51DB2D2392593AF6A84118090"); // abc123
    // digests.push_back("5850D367EED947F51B618B0B7576BA0EB8AE6810B5F3D2EC2B39865F0AA93A95"); // zaq1zaq1
    // digests.push_back("A42F63761863D6283BD3B66C74C4BD22F297B92F8397E929765C980C86DB64B8"); // !qAzXsW2
    // digests.push_back("2C2A84565380F9AC1CE7EBDDC5D6347245563043A4A72CB7467B1C30A4EA34EA"); // c!tY$iTe
    // digests.push_back("CA0E2C58B132E680005B1B639EC82F9E3398E8EDB8CBE6D7992A17EF6505DD8B"); // 743DE2A128
    // digests.push_back("8772F0DACB2C7A16D697C75528046F7B44C185477E011EED9C8DA21A97D1E2E7"); // k1Tt6Cat

    return digests;
}