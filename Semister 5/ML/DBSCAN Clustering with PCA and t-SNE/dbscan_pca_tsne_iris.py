# DBSCAN Clustering with PCA and t-SNE - Iris Dataset

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.datasets import load_iris
from sklearn.preprocessing import StandardScaler
from sklearn.cluster import DBSCAN
from sklearn.decomposition import PCA
from sklearn.manifold import TSNE

# Load dataset
iris = load_iris()
X = iris.data
df = pd.DataFrame(X, columns=iris.feature_names)
print(df.head())

# Standardize
X_scaled = StandardScaler().fit_transform(X)

# Apply DBSCAN
dbscan = DBSCAN(eps=0.8, min_samples=5)
labels = dbscan.fit_predict(X_scaled)
n_clusters = len(set(labels)) - (1 if -1 in labels else 0)
n_noise = np.sum(labels == -1)
print("Number of clusters:", n_clusters)
print("Number of noise points:", n_noise)

# PCA visualization
X_pca = PCA(n_components=2).fit_transform(X_scaled)
plt.figure(figsize=(8, 6))
for cluster in sorted(set(labels)):
    mask = labels == cluster
    name = "Noise" if cluster == -1 else f"Cluster {cluster}"
    plt.scatter(X_pca[mask, 0], X_pca[mask, 1], s=50, label=name)
plt.title("DBSCAN Clusters - PCA (Iris Dataset)")
plt.xlabel("Principal Component 1")
plt.ylabel("Principal Component 2")
plt.legend()
plt.grid(alpha=0.3)
plt.tight_layout()
plt.savefig("dbscan_pca.png", dpi=180)
plt.show()

# t-SNE visualization
X_tsne = TSNE(n_components=2, random_state=42, perplexity=30,
              init="pca", learning_rate="auto").fit_transform(X_scaled)
plt.figure(figsize=(8, 6))
for cluster in sorted(set(labels)):
    mask = labels == cluster
    name = "Noise" if cluster == -1 else f"Cluster {cluster}"
    plt.scatter(X_tsne[mask, 0], X_tsne[mask, 1], s=50, label=name)
plt.title("DBSCAN Clusters - t-SNE (Iris Dataset)")
plt.xlabel("t-SNE Component 1")
plt.ylabel("t-SNE Component 2")
plt.legend()
plt.grid(alpha=0.3)
plt.tight_layout()
plt.savefig("dbscan_tsne.png", dpi=180)
plt.show()
