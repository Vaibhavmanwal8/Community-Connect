# Community Connect

**Community Resource and Help Exchange Platform**

A college PBL application demonstrating C++17, OOPS, DSA, local text-file persistence, a local HTTP server, HTML/CSS and vanilla JavaScript.

## Quick start on macOS

```bash
cd backend
make
./build/cc-server --selftest
./build/cc-server --seed-demo
./build/cc-server
```

Open `http://127.0.0.1:8080/`.

The seed command is safe: it only creates demo data when the data directory is empty.

## Main features

- Registration, login, logout and profile editing
- PBKDF2-HMAC-SHA256 password hashing with unique salts
- Educational resource CRUD and availability
- Help requests with Pending / Accepted / Rejected / Completed / Cancelled states
- Hand-written binary-heap priority queue: High > Medium > Low, older first on ties
- Skill and interest matching
- Ranked resource search
- Persistent in-app notifications
- Contact details protected by backend authorization until a request is accepted
- Local `.txt` persistence with escaped records and temporary-file rewrites
- HTTP API served directly by the C++ backend
- Responsive HTML/CSS/JavaScript frontend

## Project structure

```text
Community-Connect/
├── backend/
│   ├── include/
│   ├── src/
│   ├── CMakeLists.txt
│   └── Makefile
├── frontend/
│   ├── *.html
│   ├── css/
│   └── js/
├── data/
├── docs/
└── audit/
```

## API

The backend exposes endpoints for authentication, profiles, resources, requests, search, matching, dashboard data and notifications. The frontend calls these endpoints using `fetch()` and a bearer session token.

## Testing

`./build/cc-server --selftest` exercises the backend modules and DSA/OOPS logic. Stage 8 also includes HTTP smoke testing of the most important browser-facing flows.

## Academic concepts

### DSA

- `vector` for in-memory entity collections
- `unordered_map` indexes for fast ID/email/username lookup
- `set`-style de-duplication logic for skills/interests
- binary heap priority queue for pending help requests
- sorting and linear search/ranking for resource and user matching

### OOPS

- classes and objects
- encapsulation
- abstraction through service classes
- inheritance through the common `Entity` model
- polymorphic record serialization via virtual methods
- constructors/destructors and composition
- access specifiers

See `docs/STAGE8-DSA-OOPS-REPORT.md` for the viva/report explanation.

## Limitations

This is a local academic application, not a production internet service. It does not provide HTTPS, cloud synchronization, distributed deployment, multi-device identity management or a production-grade database. Session state is intentionally kept in memory and is lost when the server stops.
