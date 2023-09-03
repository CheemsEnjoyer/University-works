from flask import Flask, render_template

app = Flask(__name__)

nav = [
    { "title": "Главная", "URL": "/" },
    { "title": "Культура", "URL": "/culture" },
    { "title": "Экономика", "URL": "/economy" },
    { "title": "История", "URL": "/history" },
    { "title": "Народ", "URL": "/people" },
    { "title": "Обо мне", "URL": "/about" },
    { "title": "Глоссарий", "URL": "/glossary" },
]

@app.context_processor
def global_context():
    return {
        "nav":nav
    }

@app.route("/")
def index():
    return render_template("index.html", name="Главная")

@app.route("/about")
def about_view():
    return render_template("aboutme.html", name="Обо мне")

@app.route("/glossary")
def glossary_view():
    return render_template("glossary.html", name="Глоссарий")

@app.route("/culture")
def culture_view():
    return render_template("culture.html", name="Культура")

@app.route("/economy")
def economy_view():
    return render_template("economy.html", name="Экономика")

@app.route("/history")
def history_view():
    return render_template("history.html", name="История")

@app.route("/people")
def people_view():
    return render_template("people.html", name="Народ")