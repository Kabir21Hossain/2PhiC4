from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def home(request):
    return HttpResponse('I love my home')

def about(request):
    return HttpResponse('I hate my about')
