# rapidtransit
### rapidtransit : 운전 계획 프로젝트
* *'운전'은 도로 차량의 운전이 아닌 철도 차량의 운전을 의미한다.
* 객체 지향 프로그래밍, 가중치 그래프 이론 기반 철도 환경 구현
* 그래프의 가중치와 차량 성능을 인수로 표준 운전 시격 산출
* 표준 운전 시격 기반 노선 운영 계획 수립
### 폴더 구분
* static factors : 정적 요소
	* 트랙
	* 정션
	* 역
	* ...
* dynamic factors : 동적 요소
	* 차량
	* 이용객
	* ...
* abstract factors : 추상적 요소
	* 노선
	* 운영 등급
	* ...
* operating factors : 운영과 관련된 요소
	* 표준 운전 시격 알고리즘
	* 열차 투입 알고리즘
* *컴퓨터 과학 분야의 static, dynamic, abstract, operate의 의미와 관련이 없음
### 객체 지향 프로그래밍 이론
* 클래스와 상속을 통해 다음을 높임
	* 재사용성
	* 가독성
	* 유지보수성
### 가중치 그래프 이론
* 정점 : 트랙 위 임의의 한 지점 또는 정션
* 간선 : 트랙
* 가중치 : 트랙 길이
* 표현 : 인접 리스트
	* 간선의 밀도가 낮음-거의 모든 정션이 2개 이하의 정션을 가리킴
	* 2면4선식 역의 인접행렬 밀도 : 8.3%(12 / 144)
### static factors : 정적 요소
* 트랙과 정션
	* 트랙
		* 기반 트랙의 멤버
			* 이름(구분자)
			* 길이
		* 파생 트랙의 멤버
			* tp*, 플랫폼트랙 : 역내 플랫폼과 대응되는 트랙
				* 플랫폼 번호
				* 대응 칸수
				* 문열림 방향
			* tt*, 쓰루트랙 : 역내 통과 트랙
				* 무향/유향
			* ts*, 섹션트랙 : 역간 트랙
			* td*, 디포트랙 : 열차 보관 목적의 트랙
				* 열차 유무
			* tc*, 연결트랙 : 위에 해당하지 않는 트랙
				* 무향/유향
	* 정션
		* 기반 정션의 멤버
			* 이름
		* 파생 정션의 멤버
			* jp*, 플랫폼정션
			* jc*, 연결정션
				* 무향/유향
	* 방향 구분
		* 유향-상행 : 'u'
		* 유향-하행 : 'd'
		* 무향 : 'x'
	* 유/무향 유형
		* 유향트랙
			* 플랫폼트랙
			* 단방향 쓰루트랙
			* 섹션트랙
			* 유향 연결트랙 
		* 무향트랙
			* 양방향 쓰루트랙
			* 디포트랙
			* 무향 연결트랙
		* 유향정션
			* 플랫폼정션
			* 유향 연결정션
		* 무향정션
			* 무향 연결정션
	* 명명 우선순위 부여 방식
		* 진행방향 도달
		* 내선
* 역
	* 역명
	* 역번호
	* 정션과 트랙 그래프
	* 시간표
### dynamic factors : 동적 요소
* 차량
	* 가속력
	* 감속력
	* 영업 최고 속력
	* 설계 최고 속력
	* 차량 수(칸 수)
* 이용객
	* ...
### abstract factors : 추상적 요소
* 노선
	* 노선 명칭
	* 노선 상징색
	* 통행 방향
	* 역의 동적 배열(상행 종점역의 포인터)
	* 등급
	* 열차
* 운영 등급
	* 등급 명칭
	* 정차역의 동적 배열(상행 종점역의 포인터)
### operating factors : 운영과 관련된 요소
* 표준 운전 시격 알고리즘
	* 인수
		* 출발역
		* 도착역
		* *두 정거장 이상 차이나는 역을 인수로 입력시 '통과' 처리함(급행 운전 시격 산출)
	* 반환
		* 운전 시격
* 열차 투입 알고리즘
	* 인수
		* 투입 시각
		* 차량
	* 반환
		* 없음
	* 디폴트 차량 투입
		* 인수 : 출발역, 도착역
		* 디폴트 정차 위치를 1선으로 설정
	* 다른 등급 차량 투입
		* 인수 : 출발역, 도착역, 플랫폼 위치 정보
		* 외선에 정차하는 경우
