import speech_recognition as sr
import openai
from config import apikey
openai.api_key = apikey
import google
import wikipedia
import pyaudio
import os
import webbrowser
import speech_recognition as sr
import pyttsx3
import win32com.client
import datetime
import random
#research on web-driver package




speaker = win32com.client.Dispatch("SAPI.SpVoice")





def say(text):#used to make the system say any given text
    speaker.Speak(text)
    
def AI(value):
    response = openai.Completion.create(engine="text-davinci-003",
                                        prompt=str(value),
                                        max_tokens=3500,
                                        temperature=0.7,
                                        top_p=1,
                                        frequency_penalty=0,
                                        presence_penalty=0)
    response = response["choices"][0]['text']
    say(response)
    print(response)

def intelligence(command):
    openai.api_key = apikey
    text = f"OpenAI response for prompt : {command} \n **********"
    
    response = openai.Completion.create(engine="text-davinci-003",
                                        prompt=str(command),
                                        max_tokens=3500,
                                        temperature=0.7,
                                        top_p=1,
                                        frequency_penalty=0,
                                        presence_penalty=0) 
    
    text += response["choices"][0]["text"]
    if not os.path.exists("OpenAI"):
        os.mkdir("OpenAI")
    
    with open(f"OpenAI/prompt - {random.randint(1,2343434356)}","w") as f:
        f.write(text)
               
        

def takeCommand():
    r = sr.Recognizer()#system object used for recognition of speech
    with sr.Microphone() as source:#the object where the sound input would be stored into
        r.pause_threshold = 1
        audio = r.listen(source)
        try:
            
            query = r.recognize_google(audio,language="hi-in")
            print("User said :",query)
            return query
        except Exception as e:
            
            return "Some error occured . I am sorry"
            
    
if __name__ == '__main__':
    say("Hi how may I help you Today")
    while True:
        print("Hi how may I help you Today")
        query = input().lower()
        
        if "the time" in query:
            Time = datetime.datetime.now().strftime("%H:%M:%S") 
            say(f"Sir the time is {Time}") 
        if 'open' in query:
            query = query.split(' ')
            index = query.index('open') + 1
            if query[index] == "music":
                musicPath = "C:/Users/HP/Downloads/interstellar_stay.mp3"
                os.system(f"open {musicPath}")
            
            else:
                app = ""
                for i in range (index,len(query)):
                    app+=query[i]
                    
                link = "https://"+app+".com"
                webbrowser.open(link)
                say(f"Opening {app} Master")
                
        elif "in text format" in query:
            intelligence(query)       
        
        else:
            AI(query)
