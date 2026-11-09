# DBSCAN Clustering with PCA and t-SNE

- **Dataset:** Iris (150 samples, 4 numerical features)
- **Algorithm:** DBSCAN (`eps=0.8`, `min_samples=5`)
- **Visualizations:** PCA and t-SNE, each in 2D

## Files
- `DBSCAN_PCA_tSNE_Iris.ipynb` — Jupyter Notebook with explanations and code
- `dbscan_pca_tsne_iris.py` — standalone Python script
- `dbscan_pca.png` — PCA plot
- `dbscan_tsne.png` — t-SNE plot

## Run
Install dependencies:
```bash
pip install numpy pandas matplotlib scikit-learn jupyter
```
Open the notebook in Jupyter or run the Python script.

## Current run summary
- Number of clusters: 2
- Number of noise points: 4
- PCA variance retained by two components: 95.81%
