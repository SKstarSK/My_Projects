from watchdog.observers import Observer
import os
import time
import shutil
from watchdog.events import FileSystemEventHandler


class Handler(FileSystemEventHandler):

    def on_modified(self, event):

        findIt = False
        for filename in os.listdir(folder_track):
            extension = filename.split(".")
            if len(extension) > 1 and ("jpg" in extension or "svg" in extension or "png" in extension):
                if filename not in os.listdir(folder_track + "/" + myWays[1]):
                    handle.replace_file(folder_track, filename, myWays[1])
                else:
                    os.remove(folder_track + "/" + filename)
            elif len(extension) > 1 and ("zip" in extension or "7z" in extension or "rar" in extension):
                if filename not in os.listdir(folder_track + "/" + myWays[2]):
                    handle.replace_file(folder_track, filename, myWays[2])
                else:
                    os.remove(folder_track + "/" + filename)
            elif len(extension) > 1 and ("mp4" in extension):
                if filename not in os.listdir(folder_track + "/" + myWays[3]):
                    handle.replace_file(folder_track, filename, myWays[3])
                else:
                    os.remove(folder_track + "/" + filename)
            elif len(extension) > 1 and ("exe" in extension):
                if filename not in os.listdir(folder_track + "/" + myWays[4]):
                    handle.replace_file(folder_track, filename, myWays[4])
                else:
                    os.remove(folder_track + "/" + filename)
            elif len(extension) > 1 and (
                    "doc" in extension or "docx" in extension or "pdf" in extension or "ppt" in extension or "pptx" in extension or "xlsx" in extension):
                if filename not in os.listdir(folder_track + "/" + myWays[5]):
                    handle.replace_file(folder_track, filename, myWays[5])
                else:
                    os.remove(folder_track + "/" + filename)
            if len(extension) > 1 and (os.path.isfile(folder_track + "/" + filename)) or (
            os.path.isdir(folder_track + "/" + filename)):
                for dirname in myWays:
                    if dirname in extension:
                        findIt = True

                if not findIt:
                    if filename not in os.listdir(folder_track + "/" + myWays[6]):
                        # handle.replace_file(folder_track, filename, myWays[6])
                        shutil.move(folder_track+"/"+filename,folder_track+"/"+myWays[6])
                    else:
                        if os.path.isfile(folder_track + "/" + filename):
                            os.remove(folder_track + "/" + filename)
                        else:
                            shutil.rmtree(folder_track + "/" + filename)
                findIt = False

    def replace_file(self, folder_track, filename, way):
        file = folder_track + "/" + filename
        new_path = folder_track + "/" + way + "/" + filename
        os.replace(file, new_path)


# folder_track = '/Users/bolot/Downloads' #For Windows
folder_track = '/media/username/Acer/Users/bolot/Downloads' #For Linux
myWays = ['Downloads', 'Photo', 'Archives', 'Video', 'Programms', 'Docs', 'Other']
photoExtensions = ["jpg", "png", "svg"]
findIt = False

handle = Handler()
observer = Observer()
observer.schedule(handle, folder_track, recursive=True)
observer.start()

try:
    while (True):
        time.sleep(10)
except KeyboardInterrupt:
    observer.stop()

observer.join()
