from django.shortcuts import render
from django.http import HttpResponse
# Create your views here.

def news(request):
    return HttpResponse('i am news')

def contact(request):
    return HttpResponse('i am contact')

