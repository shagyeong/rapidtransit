void standardtime(void){
    /* 제원 참조 생략 */

    /* 차량 제원 */
    double acc = 3.0;
    double dec = 3.5;
    int v_top = 110; //top speed : 영업 최고 속력

    /* 트랙 제원 */
    int length;
    int v_lim; //limitation speed : 한계 속력-제한 속력과는 다름
    int v_lim_n; //next limitation speed : 다음 트랙의 한계 속력
    double v_bor = 0; //border speed : 경계선 속력

    double v_acc; //가속 목표
    double v_dec; //감속 목표

    double d_acc; //가속 거리
    double d_dec; //감속 거리
    double d_flat; //속력 유지 거리

    double t_acc; //가속 시격
    double t_flat; //감속 시격
    double t_dec; //속력 유지 시격

    double t_track; //트랙 단위 운전 시격

    while(true){
        /* 현재 구간과 다음 구간의 한계 속력 참조 생략 */

        /* 한계 속력 설정 */
        /* 차량 성능을 넘어서서 운전하거나 제한을 위반할 수 없으므로 */
        /* 작은 값을 취함 */
        if(v_lim > v_top){
            v_lim = v_top;
        }
        if(v_lim_n > v_top){
            v_lim_n = v_top;
        }

        /* 가속 목표와 감속 목표 */
        v_acc = v_lim - v_bor;
        if(v_lim < v_lim_n){
            v_dec = 0;
        }
        else{
            v_dec = v_lim - v_lim_n;
        }

        /* 한계 속력까지 가속 후 감속시 거리를 구해 */
        /* general case를 적용할 수 있는지 확인*/
        d_acc = 5 / 36 * v_acc / acc * (2 * v_bor + v_acc);
        d_dec = 5 / 36 * v_dec / dec * (2 * v_lim - v_dec);

        /* general case를 적용할 만큼 역간 거리가 충분한가? */
        if(length >= d_acc + d_dec){
            /* general case : 속력 그래프가 평평한(flat) 구간이 있다.*/
            d_flat = length - (d_acc + d_dec);

            t_acc = v_acc / acc; //가속
            t_flat = 18 / 5 * d_flat / v_lim; //속력 유지
            t_dec = v_dec / dec; //감속

            t_track = t_acc + t_flat + t_dec;
        }
        else{
            /* peculiar case : flat 구간이 나타나기 전 감속해야 한다.*/
        }
    }
}