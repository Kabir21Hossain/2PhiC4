from django.http import HttpResponse

def home(request):
    return HttpResponse("I am home")

def about(request):
    return HttpResponse('i am about')
