from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def courses(request):
    return HttpResponse('i am courses')

def teacher(request):
    return HttpResponse('i am teacher')
