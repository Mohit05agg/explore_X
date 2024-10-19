# Use a lightweight web server as the base image
FROM nginx:alpine

# Copy your web files (HTML, CSS, JS) to the web server's default directory
COPY ./ /usr/share/nginx/html

# Expose port 80 for the web server
EXPOSE 80

# Start the web server
CMD ["nginx", "-g", "daemon off;"]
