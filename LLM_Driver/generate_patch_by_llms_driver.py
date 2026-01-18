import openai
import os
import sys
from pathlib import *


openai.api_key= 'OPENAI_KEY'
os.environ['OPENAI_API_KEY']='OPENAI_KEY'

modelType = "gpt-4o"


current_working_directory = os.getcwd()
template_path = current_working_directory+"/prompt_template.json"

template=""
with open(template_path, 'r') as file:
    template = file.read()

sub_folder=''
folder_name=sys.argv[1]
sub_folder_name=sys.argv[2]
folder_location=current_working_directory+"/../PatchBench/"+folder_name+"/"+sub_folder_name+"/"
save_location=current_working_directory+"/LLM_Generated_Patches/"+folder_name+"/"+sub_folder_name+"/"
os.makedirs(save_location, exist_ok=True) 
sub_subfolders = os.listdir(folder_location)
# print("Sub subfolders: ", sub_subfolders)
for sub_subfolder in sub_subfolders:
    subsubfolder=os.listdir(folder_location+sub_subfolder+"/")
    flag=False
    folder_name=folder_location+sub_subfolder
    original_snippet_file=folder_name+"/oldV.c"
    file_path = Path(original_snippet_file)
    if file_path.exists():
        # print(f"The path {file_path} exists.")
        folder_name=folder_location+sub_subfolder
        original_snippet_file=folder_name+"/oldV.c"
        original_snippet=""
        save_folder=save_location+sub_subfolder+"/"
        os.makedirs(save_folder, exist_ok=True)
        if Path(save_folder+"/patches_"+modelType).exists():
            continue
        print(f"{file_path}")
        with open(original_snippet_file, 'r') as file:
            original_snippet = file.read()
        patch1_snippet_file=folder_name+"/newV.c"
        patch1_snippet=""
        with open(patch1_snippet_file, 'r') as file:
            patch1_snippet = file.read()
        message="Generate two patches (patch 2 and patch 3) following the example from json file "+template+" where the original code snippet is given as " +original_snippet+ " and patch 1 (good sink) is given as "+patch1_snippet+" . Based on the json template generate Patch 2 (Good source) and Patch 3 (Bad source Partial good sink)."
        messages = [ {"role": "system", "content": "You are a intelligent assistant and patching expert."} ]
        messages.append({"role": "user", "content": message})
        chat = openai.chat.completions.create(model=modelType, messages=messages)
        print("folder name: ", folder_name)
        reply = chat.choices[0].message.content
        
        f = open(save_folder+"/patches_"+modelType, "w")
        f.write("reply: "+reply)
        f.write("\nSystem fingerprint: "+str(chat.system_fingerprint))
        print(chat.system_fingerprint)
        f.close()
    else:
        for subsub in subsubfolder:
            folder_name=folder_location+sub_subfolder+"/"+subsub
            original_snippet_file=folder_name+"/oldV.c"
            if not Path(original_snippet_file).exists():
                continue
            save_folder=save_location+sub_subfolder+"/"+subsub+"/"
            os.makedirs(save_folder, exist_ok=True)
            if Path(save_folder+"/patches_"+modelType).exists():
                continue
            print(original_snippet_file," in cve")
            original_snippet=""
            with open(original_snippet_file, 'r') as file:
                original_snippet = file.read()
                
            # patch1_snippet_file="/home/laboni/Vulnerabilities/extractedPatch/patches/patchByProject/qemu/CWE-369-Divide-By-Zero/CVE_2016_8669_3592fe0c919cf27a81d8e9f9b4f269553418bb01/newV.c"
            patch1_snippet_file=folder_name+"/newV.c"
            patch1_snippet=""
            with open(patch1_snippet_file, 'r') as file:
                patch1_snippet = file.read()
            # message="Generate 3 (Patch 1, Patch 2 and Patch 3)  patches following the example from "+template+" for the following the given git diff "+git_diff+" and a sample original code snippet: "+code_snippet+". Generate 3 functional patches following the template and generate 3 different patches for the original code snippet."
            message="Generate two patches (patch 2 and patch 3) following the example from json file "+template+" where the original code snippet is given as " +original_snippet+ " and patch 1 (good sink) is given as "+patch1_snippet+" . Based on the json template generate Patch 2 (Good source) and Patch 3 (Bad source Partial good sink)."
            messages = [ {"role": "system", "content": "You are a intelligent assistant and patching expert."} ]
            messages.append({"role": "user", "content": message})
            chat = openai.chat.completions.create(model=modelType, messages=messages)
            # print(message)
            reply = chat.choices[0].message.content
       
            f = open(save_folder+"/patches_"+modelType, "w")
            # f.write("message: "+message)
            f.write("reply: "+reply)
            f.write("\nSystem fingerprint: "+str(chat.system_fingerprint))
            print(chat.system_fingerprint)
            f.close()

    # if flag:
    #     folder_name=folder_location+sub_subfolder
    #     original_snippet_file=folder_name+"/oldV.c"
    #     original_snippet=""
    #     with open(original_snippet_file, 'r') as file:
    #         original_snippet = file.read()
            
    #     # patch1_snippet_file="/home/laboni/Vulnerabilities/extractedPatch/patches/patchByProject/qemu/CWE-369-Divide-By-Zero/CVE_2016_8669_3592fe0c919cf27a81d8e9f9b4f269553418bb01/newV.c"
    #     patch1_snippet_file=folder_name+"/newV.c"
    #     patch1_snippet=""
    #     with open(patch1_snippet_file, 'r') as file:
    #         patch1_snippet = file.read()

    #     # message="Generate 3 (Patch 1, Patch 2 and Patch 3)  patches following the example from "+template+" for the following the given git diff "+git_diff+" and a sample original code snippet: "+code_snippet+". Generate 3 functional patches following the template and generate 3 different patches for the original code snippet."
    #     message="Generate two patches (patch 2 and patch 3) following the example from json file "+template+" where the original code snippet is given as " +original_snippet+ " and patch 1 (good sink) is given as "+patch1_snippet+" . Based on the json template generate Patch 2 (Good source) and Patch 3 (Bad source Partial good sink)."
    #     messages = [ {"role": "system", "content": "You are a intelligent assistant and patching expert."} ]
    #     messages.append({"role": "user", "content": message})
    #     chat = openai.chat.completions.create(model=modelType, messages=messages)
    #     print("folder name: ", folder_name)
    #     reply = chat.choices[0].message.content
    #     save_folder=save_location+sub_subfolder+"/"
    #     os.makedirs(save_folder, exist_ok=True)
    #     f = open(save_folder+"/patches_"+modelType, "w")
    #     # f.write("message: "+message)
    #     f.write("reply: "+reply)
    #     f.write("\nSystem fingerprint: "+str(chat.system_fingerprint))
    #     print(chat.system_fingerprint)
    #     f.close()

'''
print(folder_name)
cve=folder_name.split("/")[-1]
# print(cve)
if "cve" in cve:
    sub_folder=cve
    cve=folder_name.split("/")[-2]
cve_list=cve.split("_")
cve='-'.join(cve_list)
if sub_folder!='':
    cve=cve+'-'+sub_folder
# print(cve[0])

# git_diff_file="/home/laboni/Vulnerabilities/extractedPatch/patches/patchByProject/qemu/CWE-369-Divide-By-Zero/CVE_2016_8669_3592fe0c919cf27a81d8e9f9b4f269553418bb01/CVE-2016-8669-3592fe0c919cf27a81d8e9f9b4f269553418bb01.txt"

# git_diff_file=folder_name+"/"+cve+".txt"
# git_diff=""
# with open(git_diff_file, 'r') as file:
#     git_diff = file.read()

# original_snippet_file="/home/laboni/Vulnerabilities/extractedPatch/patches/patchByProject/qemu/CWE-369-Divide-By-Zero/CVE_2016_8669_3592fe0c919cf27a81d8e9f9b4f269553418bb01/oldV.c"
original_snippet_file=folder_name+"/oldV.c"
original_snippet=""
with open(original_snippet_file, 'r') as file:
    original_snippet = file.read()
    
# patch1_snippet_file="/home/laboni/Vulnerabilities/extractedPatch/patches/patchByProject/qemu/CWE-369-Divide-By-Zero/CVE_2016_8669_3592fe0c919cf27a81d8e9f9b4f269553418bb01/newV.c"
patch1_snippet_file=folder_name+"/newV.c"
patch1_snippet=""
with open(patch1_snippet_file, 'r') as file:
    patch1_snippet = file.read()

# message="Generate 3 (Patch 1, Patch 2 and Patch 3)  patches following the example from "+template+" for the following the given git diff "+git_diff+" and a sample original code snippet: "+code_snippet+". Generate 3 functional patches following the template and generate 3 different patches for the original code snippet."
message="Generate two patches (patch 2 and patch 3) following the example from json file "+template+" where the original code snippet is given as " +original_snippet+ " and patch 1 (good sink) is given as "+patch1_snippet+" . Based on the json template generate Patch 2 (Good source) and Patch 3 (Bad source Partial good sink)."
messages.append({"role": "user", "content": message})
chat = openai.chat.completions.create(model=modelType, messages=messages)
print(message)
reply = chat.choices[0].message.content
f = open("patches_gpt_3.5_"+cve, "w")
# f.write("message: "+message)
f.write("reply: "+reply)
f.write("\nSystem fingerprint: "+str(chat.system_fingerprint))
print(chat.system_fingerprint)
f.close()
'''

# import sys
# import requests

# def llm_chat(messages, model: str | None = None) -> str:
#     model = model or os.environ.get("LLM_MODEL", "deepseek-chat")
#     api_base = os.environ.get("LLM_API_BASE", "https://api.deepseek.com").rstrip("/")
#     api_key = os.environ.get("DEEPSEEK_API_KEY") or os.environ.get("OPENAI_API_KEY")
#     if not api_key:
#         print("[!] Missing DEEPSEEK_API_KEY / OPENAI_API_KEY", file=sys.stderr)
#         sys.exit(1)
#     url = f"{api_base}/v1/chat/completions"
#     headers = {
#         "Authorization": f"Bearer {api_key}",
#         "Content-Type": "application/json",
#     }
#     payload = {
#         "model": model,
#         "messages": messages,
#         "temperature": 0.2,
#     }
#     resp = requests.post(url, headers=headers, json=payload, timeout=60)
#     resp.raise_for_status()
#     data = resp.json()
#     # Return the message content
#     return data["choices"][0]["message"]["content"]

# import argparse

# def main():
#     parser = argparse.ArgumentParser(description="example")
#     parser.add_argument(
#         "prompt", help="Prompt to send to the LLM"
#     )
#     parser.add_argument(
#         "--system", help="System message"
#     )
#     args = parser.parse_args()
#     messages = [
#         {"role": "system", "content": args.system},
#         {"role": "user", "content": args.prompt},
#     ]
#     reply = llm_chat(messages)
#     print(reply)