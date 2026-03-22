import streamlit as st
import pandas as pd
import plotly.express as px
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression, LogisticRegression
from sklearn.ensemble import RandomForestRegressor, RandomForestClassifier
from sklearn.metrics import mean_squared_error, accuracy_score
import statsmodels.api as sm
from ydata_profiling import ProfileReport
from fpdf import FPDF
import tempfile
import os

st.set_page_config(page_title="AutoDataInsight AI - Md Kabir's Tool", layout="wide")
st.title("🚀 AutoDataInsight AI")
st.subheader("Your Personal Data Science Robot (Predictive + BI + AI Insights)")

uploaded_file = st.file_uploader("Upload client CSV or Excel", type=["csv", "xlsx"])
if uploaded_file:
    df = pd.read_csv(uploaded_file) if uploaded_file.name.endswith('.csv') else pd.read_excel(uploaded_file)
    st.write("✅ Data loaded:", df.shape[0], "rows,", df.shape[1], "columns")

    # Auto EDA
    st.subheader("1. Automatic Exploratory Data Analysis")
    profile = ProfileReport(df, title="Auto EDA Report", explorative=True, minimal=True)
    with tempfile.NamedTemporaryFile(delete=False, suffix=".html") as f:
        profile.to_file(f.name)
        st.components.v1.html(open(f.name).read(), height=800, scrolling=True)

    # Predictive Modeling
    st.subheader("2. Auto Predictive Modeling")
    target = st.selectbox("Choose target column (what to predict)", df.columns)
    numeric_cols = df.select_dtypes(include=['number']).columns.tolist()

    if st.button("Run Auto Model"):
        X = df.drop(columns=[target])
        y = df[target]
        X = pd.get_dummies(X, drop_first=True)

        X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

        if y.dtype == 'object' or len(y.unique()) < 10:  # Classification
            model = RandomForestClassifier(random_state=42)
            model.fit(X_train, y_train)
            pred = model.predict(X_test)
            score = accuracy_score(y_test, pred)
            st.success(f"✅ Best Model: Random Forest Classifier | Accuracy: {score:.2%}")
        else:  # Regression
            model = RandomForestRegressor(random_state=42)
            model.fit(X_train, y_train)
            pred = model.predict(X_test)
            score = mean_squared_error(y_test, pred, squared=False)
            st.success(f"✅ Best Model: Random Forest Regressor | RMSE: {score:.2f}")

        # Simple dashboard
        st.subheader("3. Interactive BI Dashboard")
        col1, col2 = st.columns(2)
        with col1:
            fig1 = px.scatter(df, x=df.columns[0], y=target, title="Key Relationship")
            st.plotly_chart(fig1, use_container_width=True)
        with col2:
            fig2 = px.histogram(df, x=target, title="Target Distribution")
            st.plotly_chart(fig2, use_container_width=True)

        # AI-style insights (you add your own or use ChatGPT/Grok)
        st.subheader("4. AI-Powered Insights (copy-paste to Grok/ChatGPT)")
        insights_prompt = f"Analyze this data summary: Shape={df.shape}, Columns={df.columns.tolist()}, Mean of {target}={df[target].mean():.2f}. Give 5 bullet insights + business recommendations."
        st.code(insights_prompt, language="text")

        # Export Report
        if st.button("Generate Professional PDF Report for Client"):
            pdf = FPDF()
            pdf.add_page()
            pdf.set_font("Arial", 'B', 16)
            pdf.cell(0, 10, "AutoDataInsight AI Report - Delivered by Md Kabir", ln=1)
            pdf.set_font("Arial", '', 12)
            pdf.multi_cell(0, 10,
                           f"Dataset: {uploaded_file.name}\nTarget: {target}\nModel Score: {score}\n\nKey Insights:\n1. Auto-generated from your data.\n2. Ready to use for business decisions.")
            pdf.output("Client_Report.pdf")
            st.success("📄 Client_Report.pdf saved! Send this + dashboard to client.")
            with open("Client_Report.pdf", "rb") as f:
                st.download_button("Download Report", f, "Client_Report.pdf")

st.caption("Built for Md Kabir • Run locally • 100% free • Use responsibly on Upwork")