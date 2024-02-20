#include "CONTAINER.h"
#include"../../libOne/inc/VECTOR2.h"
#include"../../libOne/inc/COLOR.h"
#include"../../libOne/inc/graphic.h"
namespace GAME14 {
    void CONTAINER::load() {
        setData();
        setImage();
    }
    void CONTAINER::setData() {
        //シンプルなゲームなら次のように、ここで行ってもよい。
        Data.player.color = COLOR(0, 255, 0, 125);
        Data.player.scale = VECTOR2(788 * 0.2-6, -788 * 0.2+8);
        Data.player.range1 = VECTOR2(110, -40);
        Data.player.range2 = VECTOR2(-40, -(788 * 0.2-8));
        Data.player.pos = VECTOR2((width-200)/2, 200);
        Data.player.speed = 0;
        Data.player.jumpSpeed = -500;
        Data.player.gravity = 9.8f;
        Data.player.highLimt = 0;
        Data.player.farstJumpFlag = false;
        Data.player.doubleJumpFlag = false;
        Data.player.collisionFlag = false;
        Data.player.jumpAnimeTime = 0.5f;
        Data.player.imgSize = 0.2f;
        Data.player.jumpImgSize = 0.45f;

        Data.building.img = 0;
        Data.building.pos = VECTOR2(100, height );
        Data.building.posOfset = 400;
        Data.building.speed = -400;
        Data.building.minHight = 400;
        Data.building.minWide = 100;
        Data.building.maxHight = 800;
        Data.building.maxWide = 200;
        Data.building.color = COLOR(125, 125, 125, 125);
        Data.building.maxBuilding = 6;

        strcpy_s(Data.title.titleStr, "車からの景色");
        Data.title.img = 0;
        Data.title.textColor = COLOR(125, 125, 225);
        Data.title.pos = VECTOR2(220, height / 2);
        Data.title.textSize = 250;

        Data.stage.img = 0;
        Data.stage.backColor = COLOR(68, 127, 255);
        Data.stage.flag = false;
        Data.stage.cnt = 0;

        Data.game_clear.img = 0;
        strcpy_s(Data.game_clear.str, "game_crear");
        Data.game_clear.textColor = COLOR(225, 125, 125);
        Data.game_clear.pos = VECTOR2(width / 2, height / 2);
        Data.game_clear.textSize = 40;

        Data.game_over.img = 0;
        strcpy_s(Data.game_over.str, "game_over");
        Data.game_over.textColor = COLOR(225, 125, 125);
        Data.game_over.pos = VECTOR2(width / 2, height / 2);
        Data.game_over.textSize = 40;

        Data.time.timeTextPos = VECTOR2(width - 400, 50);
        Data.time.timePos = VECTOR2(width - 150, 50);
        Data.time.timeColor = COLOR(0, 0, 0);
        Data.time.maxDigit = 4;
        Data.time.timeTextSize = 50.0f;
        Data.time.reduceTime = 15.0f;
        Data.time.limitTime = 60.0f * Data.time.reduceTime;
        strcpy_s(Data.time.timeStr, "目的地まで　　ｍ");

    }
    void CONTAINER::setImage() {
        Data.player.img = loadImage("../GAME14\\assets\\player.png");
        Data.player.jumpImg = loadImage("../GAME14\\assets\\player_jump.png");
    }

}
