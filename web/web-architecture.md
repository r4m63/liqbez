# Архитектуры клиент-серверного взаимодействия веб приложений

---
# **REST**

### Основы 
РАСПИСАТЬ что такое REST, КАК работает, его преимущества и недостатки
**REST API** - это архитектурный стиль, который определяет, по каким правилам приложения должны обмениваться данными между собой. 

Он используется для создания веб-сервисов, мобильных приложений, интеграционных платформ и других IT-решений.
**Цель** - облегчить передачу и управление информацией между разными системами: создавать, читать, изменять, удалять (CRUD).

REST API использует для этого стандартные HTTP-запросы: GET, POST, PUT, DELETE и другие.
РАСПИСАТЬ URI vs URL
РАСПИСАТЬ Кэширование (заголовки ответа - Cache-Control, Expires, ETag)
REST - StateLess, сервер не хранит информацию о предыдущих запросах.

### Swagger - документация

### Postman - тестирование 

### Способы передачи данных c клиента на сервер:

- Query (Get-параметры)
    ```
    /book?author=name
    ```
- Body запроса (Json, XML)
    ```
    {"author"="name", "title"="book1"}
    ```
- Заголовки
- Cookies
### Способы передачи данных c сервера на клиент:
- Body ответа (Json, XML)
- Status Code
- Заголовки
- Cookies
### Правила проектирования REST API
URL пути:
```
.../api/v1/...
```

### Правила отправки кодов ответа



---
- ## **GraphQL**
---
- ## **gRPC**
---
- ## **SOAP**
---
- ## **WebSockets**
---
- ## **JSON-RPC / XML-RPC**
---
- ## **Server-Sent Events**
---
- ## **OData**
---
Выбор архитектуры клиент-серверного взаимодействия зависит от требований к приложению:

REST и GraphQL — подходят для веб-приложений с запросами/ответами на основе HTTP.
WebSockets и gRPC — используются для приложений, которые требуют двусторонней связи и высокой производительности.
SSE и Polling — применяются для обновлений в реальном времени, с SSE как предпочтительным вариантом для однонаправленных потоков данных.
SOAP — подходит для корпоративных решений с высокой степенью безопасности и надежности.


# Архитектуры серверных веб приложений

- **MVC (Model-View-Controller)**

    Описание: Это классическая архитектура, разделяющая приложение на три основные компоненты:  модель, представление и контроллер. Она используется для улучшения читаемости кода и     разделения бизнес-логики от представления.
    Роль компонентов:
    Model (Модель): отвечает за данные и логику приложения, включая работу с базой данных.
    View (Представление): отвечает за отображение данных пользователю.
    Controller (Контроллер): управляет запросами от клиента, обновляет модель и выбирает    подходящее представление для отображения.
    Пример: В Java это может быть Spring MVC, в Python — Django или Flask (с дополнительным     паттерном MVC).
---
- **MVVM (Model-View-ViewModel)**

    Описание: Архитектурный паттерн, который часто используется в разработке приложений с   пользовательскими интерфейсами, например, в приложениях на WPF или Xamarin. В веб-разработке  MVVM используется в сочетании с JavaScript-фреймворками.
    Роль компонентов:
    Model: хранит данные приложения.
    View: отображает данные пользователю (UI).
    ViewModel: абстракция, которая связывает данные модели с представлением, обрабатывает   бизнес-логику, но не имеет собственного UI.
    Пример: В веб-разработке это может быть Angular, где компоненты (ViewModel) связываются с   представлением (HTML) и моделью (данными).
---
- **MVP (Model-View-Presenter)**

    Описание: Архитектурный паттерн, который схож с MVC, но с изменениями в роли компонентов.   Presenter в этом случае отвечает за взаимодействие с представлением и обработку   пользовательских действий.
    Роль компонентов:
    Model: данные и бизнес-логика.
    View: отображение данных пользователю.
    Presenter: принимает данные от модели, обновляет представление и обрабатывает события от    представления.
    Пример: Этот паттерн используется в некоторых JavaScript-фреймворках, таких как GWT (Google     Web Toolkit).
---
- **Layered Architecture (Многослойная архитектура)**

    Описание: Это подход, при котором приложение делится на несколько слоев, каждый из которых  отвечает за определенную часть работы, например, представление, бизнес-логику, доступ к  данным и т. д.
    Роль компонентов:
    Presentation Layer (Слой представления): отвечает за взаимодействие с пользователем,    например, веб-страницы или API.
    Business Layer (Слой бизнес-логики): содержит логику приложения.
    Data Access Layer (Слой доступа к данным): взаимодействует с базой данных.
    Пример: Это может быть использовано в Spring с разделением на контроллеры, сервисы и    репозитории.
---
- **Service-Oriented Architecture (SOA)**

    Описание: Архитектурный стиль, где приложение делится на сервисы, каждый из которых выполняет отдельную задачу. Эти сервисы взаимодействуют друг с другом через стандартизированные интерфейсы.
    Роль компонентов:
    Сервисы: независимые компоненты, выполняющие конкретные операции, например, обработка   платежей, авторизация и т. д.
    Клиенты: взаимодействуют с сервисами через стандартные протоколы (например, HTTP).
    Пример: Используется в крупных распределенных системах и может быть реализована через REST  API или SOAP.
---
- **Microservices Architecture**

    Описание: Это архитектурный стиль, в котором приложение разделяется на независимые микросервисы, каждый из которых выполняет отдельную задачу и может быть развернут и масштабирован независимо.
    Роль компонентов:
    Микросервисы: каждый микросервис отвечает за одну бизнес-логику (например, управление   пользователями, обработка заказов, оплата).
    API Gateway: шлюз, который управляет взаимодействием между клиентами и микросервисами.
    Пример: В Spring Boot или Node.js можно использовать Spring Cloud или Express.js для    реализации микросервисов.
---
- **Event-Driven Architecture (EDA)**

    Описание: В этой архитектуре взаимодействие между компонентами происходит через события. Каждый компонент слушает события и реагирует на них.
    Роль компонентов:
    Events: события, которые инициируют действия (например, создание заказа или обновление  данных).
    Event Handlers: обработчики событий, которые выполняют действия, например, обновление базы  данных.
    Event Bus: система, через которую события передаются между компонентами.
    Пример: Может быть реализована с использованием Kafka или RabbitMQ для передачи сообщений   между компонентами.
---
- **Hexagonal Architecture (Ports and Adapters)**

    Описание: Это архитектурный паттерн, который разделяет бизнес-логику от внешних зависимостей    (например, базы данных, интерфейсы пользователя, сторонние сервисы). Основная цель — сделать   бизнес-логику независимой от внешних технологий.
    Роль компонентов:
    Core (Основная логика): бизнес-логика, которая не зависит от технологий.
    Ports: интерфейсы для связи с внешними мирами (например, REST API).
    Adapters: компоненты, которые преобразуют данные между внешними мирами и портами.
    Пример: Реализуется в Spring Boot или Django с четким разделением бизнес-логики и внешних   интерфейсов.
---
- **Serverless Architecture**

    Описание: В серверлесс-архитектуре приложение делится на небольшие функции или обработчики,     которые выполняются в облаке, не требуя управления серверами.
    Роль компонентов:
    Функции: небольшие функции, которые выполняются на сервере по запросу. Каждая функция   выполняет конкретную задачу (например, обработка запроса, отправка уведомления).
    API Gateway: шлюз для управления запросами, который передает их на соответствующие функции.
    Пример: Используется в AWS Lambda, Azure Functions и других облачных сервисах.
---
Каждая из этих архитектур может использоваться в зависимости от требований проекта:

MVC, MVVM, MVP — это классы архитектур, которые разделяют логику приложения, что облегчает поддержку и развитие.
SOA, Microservices и Event-Driven — это архитектуры для построения более сложных распределенных систем.
Hexagonal и Serverless архитектуры помогают в создании приложений, которые легко масштабируются и интегрируются с другими системами.
Выбор архитектуры зависит от сложности приложения, требуемой масштабируемости и специфики бизнес-логики.

https://stackoverflow.com/questions/34130036/how-to-understand-restful-api-is-stateless