/*




Протокол —	это набор правил и соглашений, которые определяют, как данные
						передаются и принимаются между устройствами в сети.
	Функции протоколов:
	Форматирование данных:
			Протоколы определяют структуру и формат данных, которые передаются по сети.
			Это включает в себя правила для заголовков пакетов, форматирование полей данных и т. д.
	Адресация и маршрутизация:
			Протоколы обеспечивают механизмы для адресации и маршрутизации данных между устройствами.
			Например, IP-протокол использует IP-адреса для определения источника и назначения пакетов данных.
	Контроль ошибок:
			Протоколы включают механизмы для обнаружения и коррекции ошибок, которые могут возникнуть при передаче данных.
			Это может включать контрольные суммы, циклические коды и другие методы.
	Управление потоком данных:
			Протоколы могут управлять потоком данных между отправителем и получателем, чтобы избежать перегрузки сети и потери данных.
	Установление и завершение соединений:
			Протоколы обеспечивают методы для установления, поддержания и завершения соединений между устройствами в сети.
			Например, TCP использует трехэтапный процесс для установления соединения.

Проводные сети (Wired Networks):
	Ethernet: используемая технология в локальных сетях (LAN) высокая скорость передачи данных стабильное соединение
	xDSL (Digital Subscriber Line): Технологии, использующие существующие телефонные линии для передачи данных. Примеры включают ADSL, VDSL.
	FTTH (Fiber to the Home): Волоконно-оптические линии, обеспечивающие высокоскоростное подключение непосредственно до дома пользователя.
Беспроводные сети (Wireless Networks):
	Wi-Fi (Wireless Fidelity): Используется для подключения устройств в домашних и офисных сетях. Стандарты включают 802.11a/b/g/n/ac/ax.
	LTE (Long Term Evolution) и 5G: Мобильные сети для широкополосного доступа к Интернету.
	WiMAX (Worldwide Interoperability for Microwave Access): Технология беспроводного доступа на большие расстояния.
Физические среды передачи данных:
	1. Медные кабели
		Витая пара (Twisted Pair):
			Неэкранированная витая пара (UTP):		Самый распространённый тип кабеля в Ethernet-сетях.
			Экранированная витая пара (STP):			Используется для уменьшения электромагнитных помех. Обычно применяется в промышленных средах.
			Коаксиальный кабель (Coaxial Cable):	Используется для кабельного телевидения, широкополосного Интернета и некоторых типов локальных сетей.
																						Обеспечивает хорошую защиту от электромагнитных помех и может передавать сигналы на большие расстояния.
	2. Оптоволоконные кабели (Fiber Optic Cables)
		Одномодовый волоконный кабель (Single-mode Fiber):	Поддерживает передачу данных на большие расстояния с высокой скоростью.
																												Используется в магистральных сетях и для подключения к Интернету на больших расстояниях.
		Многомодовый волоконный кабель (Multi-mode Fiber):	Подходит для коротких расстояний, часто используется в локальных сетях и центрах обработки данных.
	3. Беспроводные среды
		Радиоволны (Radio Waves):	Используются в Wi-Fi, сотовых сетях (LTE, 5G) и других беспроводных коммуникациях.
															Проходят через стены и другие препятствия, но могут подвергаться интерференции и затуханию сигнала.
		Инфракрасные радиоволны (IR): Используются в устройствах дистанционного управления и для передачи данных на короткие расстояния.
		Микроволны:										Используются для передачи данных на большие расстояния, включая спутниковую связь и беспроводные магистральные каналы.
	
	4. Электрические сети (Power Line Communication, PLC)
		Используют существующую электрическую проводку для передачи данных.
		Применяются для домашних и офисных сетей, где трудно или дорого прокладывать новые кабели.
	
	
Хосты обмениваются друг с другом сообщениями, используя сетевые интерфейсы.
Сообщения могут содержать любую информацию, которую разработчик поместит в них.
Для того чтобы отослать сообщение от конечной системы-источника в конечную систему-приемник,
оно разбивается на мелкие пакеты.
На пути от источника к приемнику каждый пакет проходит через линии связи и коммутаторы
Пакеты передаются по каждой линии связи с максимальной скоростью, которую может обеспечить данная линия.

Полный путь пакета от отправителя к получателю:
Когда пакет отправляется, он проходит через несколько этапов и устройств, прежде чем достичь конечного получателя.
1. Отправитель (Клиентское устройство)
	Создание данных приложения:
		Приложение на вашем устройстве (например, веб-браузер) создает данные (например, HTTP-запрос).
	Формирование пакета:
		Данные прикладываются к заголовкам протоколов транспортного уровня (TCP/UDP) и сетевого уровня (IP).
		Формируется IP-пакет, содержащий IP-адрес отправителя и IP-адрес получателя.
	Передача по локальной сети (LAN):
		IP-пакет инкапсулируется в кадр канального уровня (Ethernet), который включает MAC-адрес отправителя и MAC-адрес маршрутизатора (шлюза).
	Отправка на шлюз (маршрутизатор):
		Кадр передается по локальной сети и достигает маршрутизатора.
2. Маршрутизатор отправителя
	Получение кадра:
		Маршрутизатор извлекает IP-пакет из Ethernet-кадра.
	Определение маршрута:
		Маршрутизатор смотрит IP-адрес назначения и определяет следующий шаг (next hop) в таблице маршрутизации.
		Пакет инкапсулируется в новый кадр канального уровня для передачи к следующему маршрутизатору или узлу.
	Отправка к провайдеру:
		Маршрутизатор отправляет кадр на оборудование провайдера (ISP).
3. Провайдер (ISP)
	Промежуточные маршрутизаторы:
		Пакет проходит через несколько маршрутизаторов провайдера. Каждый маршрутизатор использует таблицу маршрутизации для определения следующего маршрута.
	Оптимизация маршрута:
		Провайдер может использовать различные алгоритмы маршрутизации для оптимизации пути пакета и минимизации задержек.
	Межсетевые маршрутизаторы:
		Если получатель находится в другой сети или у другого провайдера, пакет передается через межсетевые маршрутизаторы.
4. Магистральные сети (Backbone)
	Передача через магистральные маршрутизаторы:
		Пакет передается через высокоскоростные магистральные маршрутизаторы, которые соединяют различные крупные сети.
	Международные узлы:
		Пакет может проходить через международные маршрутизаторы и подводные кабели, если отправляется в другую страну.
5. Провайдер получателя
	Прием пакета:
		Пакет поступает в сеть провайдера получателя.
	Маршрутизация внутри провайдера:
		Пакет проходит через несколько маршрутизаторов провайдера получателя, которые направляют его к конечной точке назначения.
6. Маршрутизатор получателя
	Получение пакета:
		Пакет поступает на маршрутизатор, связанный с локальной сетью получателя.
	Определение конечного устройства:
		Маршрутизатор использует таблицу маршрутизации для определения устройства в локальной сети, которому предназначен пакет.
		Пакет инкапсулируется в Ethernet-кадр с MAC-адресом получателя и передается в локальную сеть.
7. Получатель (Клиентское устройство)
	Прием кадра:
		Клиентское устройство получает Ethernet-кадр и извлекает из него IP-пакет.
	Декодирование пакета:
		IP-пакет передается на транспортный уровень, где из него извлекается TCP/UDP-сегмент.
		Транспортный уровень передает данные приложению.
	Обработка данных приложением:
		Приложение получает данные и обрабатывает их (например, отображает веб-страницу).
-------------------------------------------------------------------------------------
Маршрутизация:	Каждый маршрутизатор в пути использует таблицу маршрутизации для определения следующего узла, куда отправить пакет.
								Таблицы маршрутизации обновляются с помощью различных протоколов маршрутизации (например, OSPF, BGP).
Буферизация и очереди:	На каждом этапе, если сеть загружена, пакеты могут быть временно помещены в очереди и буферы маршрутизаторов для предотвращения потерь данных.
Надежность:	Протоколы транспортного уровня, такие как TCP, обеспечивают надежность передачи данных с помощью подтверждений и повторных передач.
Безопасность: В некоторых случаях пакеты могут проходить через межсетевые экраны (firewalls) и системы обнаружения вторжений (IDS), которые обеспечивают безопасность сети.
Качество обслуживания (QoS): Некоторые сети используют механизмы QoS для обеспечения приоритета трафика, что важно для приложений реального времени, таких как VoIP и видеоконференции.
Этот процесс происходит миллионы раз в секунду в глобальных масштабах, обеспечивая бесперебойную работу интернет-сервисов и приложений.











Внутренняя работа коммутатора
Коммутатор — это устройство, которое связывает узлы в локальной сети (LAN) и использует метод коммутации
пакетов для передачи данных между ними. Основные компоненты и процессы внутри коммутатора включают:
Буферизация:	При поступлении пакета на коммутатор он помещается в буфер.
							Буферизация необходима для сглаживания временных перепадов нагрузки и предотвращения потерь данных при перегрузке.
Очередь:	Коммутаторы используют очереди для хранения пакетов, ожидающих передачи.
					Каждому выходному порту коммутатора соответствует своя очередь.
					Очереди могут быть организованы по различным принципам, например, FIFO (first in, first out).
MAC-таблица:	Коммутатор ведет таблицу коммутации, в которой хранится соответствие между MAC-адресами устройств и портами коммутатора.
							Когда коммутатор получает пакет, он смотрит MAC-адрес назначения и определяет, на какой порт отправить пакет.
Коммутация: Коммутатор определяет порт назначения пакета и передает его через соответствующий порт.

Внутренняя работа маршрутизатора (роутера)
Маршрутизатор — это устройство, которое передает пакеты данных между различными сетями. Основные компоненты и процессы внутри маршрутизатора включают:
Буферизация и очередь:	Подобно коммутатору, маршрутизатор буферизирует поступающие пакеты и ставит их в очередь на передачу.
												Очереди могут быть организованы по различным принципам, включая приоритетные очереди для разных типов трафика.
Таблица маршрутизации:	Маршрутизатор ведет таблицу маршрутизации, в которой хранится информация о том, через какие интерфейсы
												и маршруты можно достичь различных сетей. Таблица маршрутизации может содержать статические маршруты
												(вручную настроенные администратором) и динамические маршруты (обновляемые с помощью протоколов динамической маршрутизации).
Принятие решения о маршрутизации: Когда маршрутизатор получает пакет, он извлекает IP-адрес назначения из заголовка пакета и ищет соответствующий
																	маршрут в таблице маршрутизации. Маршрутизатор определяет следующий шаг (next hop) для пакета и отправляет
																	его через соответствующий интерфейс.






------------------------------------------------------------------
Иерархия уровней провайдеров Интернета
Интернет представляет собой сложную иерархическую сеть, состоящую из различных уровней интернет-провайдеров (ISP).
Каждый уровень выполняет свою роль и взаимодействует с другими уровнями для обеспечения глобального соединения.

1. Tier 1 ISPs (Международные магистральные провайдеры)
Описание: Самый верхний уровень иерархии. Это крупные провайдеры с глобальной сетью магистральных маршрутов. У них нет необходимости платить другим провайдерам за транзит трафика, так как они соединяются напрямую друг с другом через взаимные соглашения о пиринге (peering).
Примеры: AT&T, Verizon, NTT, CenturyLink, Level 3.
Роль: Обеспечение глобальной магистральной связности между континентами и странами. Услуги предоставляются другим провайдерам, включая Tier 2 и Tier 3 ISPs.
2. Tier 2 ISPs (Региональные магистральные провайдеры)
Описание: Провайдеры, которые имеют региональные или национальные сети. Они покупают транзит трафика у Tier 1 ISPs, но могут иметь взаимные соглашения с другими Tier 2 ISPs.
Примеры: Comcast, Cox, Telia, Tata Communications.
Роль: Обеспечение региональной или национальной связности, предоставление услуг доступа к Интернету для Tier 3 ISPs и крупных корпоративных клиентов.
3. Tier 3 ISPs (Локальные провайдеры)
Описание: Провайдеры, которые непосредственно предоставляют услуги конечным пользователям (домашним пользователям и малому бизнесу). Они покупают транзит трафика у Tier 1 или Tier 2 ISPs.
Примеры: Местные интернет-провайдеры, кабельные компании, DSL-провайдеры.
Роль: Предоставление доступа к Интернету конечным пользователям, обслуживание локальных сообществ.
Взаимодействие между уровнями
Peering: Взаимные соглашения между провайдерами для обмена трафиком без оплаты. Обычно используется между провайдерами одного уровня.
Transit: Коммерческие соглашения, где один провайдер платит другому за пропуск трафика через его сеть. Это основное взаимодействие между разными уровнями (например, Tier 3 платит Tier 2, а Tier 2 платит Tier 1).
Пример взаимодействия с Google
Google — один из крупнейших контент-провайдеров с собственными дата-центрами и глобальной сетью. Вот как их инфраструктура взаимодействует с сетью Интернет:

Дата-центры: Google имеет дата-центры по всему миру, которые хранят и обрабатывают данные пользователей.
Магистральные сети: Google владеет обширной магистральной сетью, соединяющей эти дата-центры. Эта сеть может взаимодействовать с магистральными провайдерами (Tier 1 ISPs) напрямую через пиринг.
Пиринг: Google устанавливает пиринг-соглашения с Tier 1 и Tier 2 ISPs для оптимизации маршрутизации и снижения затрат на трафик.
Локальные кэши: Для ускорения доступа к контенту Google также размещает серверы кэширования ближе к конечным пользователям (например, в сетях Tier 2 и Tier 3 ISPs).
Как работает взаимодействие
Пользовательский запрос: Пользователь в своей локальной сети (Tier 3 ISP) запрашивает контент с сервера Google.
Маршрутизация: Запрос передается через сеть Tier 3 ISP, которая направляет его к Tier 2 ISP, если требуется.
Магистральный трафик: Если необходимо, запрос идет к Tier 1 ISP, который направляет его через свою глобальную сеть к ближайшему дата-центру Google.
Ответ: Сервер Google обрабатывает запрос и отправляет ответ по тому же маршруту обратно к пользователю.
Заключение
Интернет состоит из нескольких уровней провайдеров, взаимодействующих через пиринг и транзитные соглашения для обеспечения глобальной связности. Крупные компании, такие как Google, имеют свои сети и дата-центры, что позволяет им оптимизировать маршрутизацию и улучшать производительность, взаимодействуя напрямую с магистральными и региональными провайдерами.
------------------------------------------------------------------

-про ip адрес mac адрес и способы идентификации узла хоста в сети











ДО 1.4







*/