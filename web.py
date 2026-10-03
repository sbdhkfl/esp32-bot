"""Simple browser dashboard for the ESP32 XiaoZhi project."""
from http.server import BaseHTTPRequestHandler,ThreadingHTTPServer
import webbrowser
HOST,PORT="127.0.0.1",8771
PAGE="""<!doctype html><html><head><meta charset="utf-8"><title>ESP32 XiaoZhi Bot</title><style>body{font-family:Arial;max-width:800px;margin:40px auto;padding:20px;background:#f5f7fb}.card{background:white;padding:25px;border-radius:14px}code{background:#eee;padding:3px}</style></head><body><div class="card"><h1>ESP32 XiaoZhi Bot 🤖</h1><p>This browser page is your easy control center for the project.</p><h3>Tools</h3><ul><li>Wikipedia</li><li>YouTube playback through the configured integration</li><li>Email when configured</li></ul><h3>Hardware setup</h3><p>Use the PlatformIO buttons in VS Code to build, upload, and open Serial Monitor. This dashboard does not replace the ESP32 firmware.</p><p><b>Status:</b> Browser dashboard is running.</p></div></body></html>"""
class H(BaseHTTPRequestHandler):
    def do_GET(self):
        b=PAGE.encode(); self.send_response(200); self.send_header("Content-Type","text/html; charset=utf-8"); self.send_header("Content-Length",str(len(b))); self.end_headers(); self.wfile.write(b)
if __name__=="__main__":
    s=ThreadingHTTPServer((HOST,PORT),H); url=f"http://{HOST}:{PORT}"; print(url); open_chrome(url)
    try:s.serve_forever()
    except KeyboardInterrupt:pass
    finally:s.server_close()
